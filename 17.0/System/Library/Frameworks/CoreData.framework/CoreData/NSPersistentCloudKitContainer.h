@class NSString, NSManagedObjectContext;

@interface NSPersistentCloudKitContainer : NSPersistentContainer <NSCloudKitMirroringDelegateProgressProvider> {
    long long _operationTimeout;
    NSManagedObjectContext *_metadataContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)discoverDefaultContainerIdentifier;

- (void)dealloc;
- (void)fetchParticipantsMatchingLookupInfos:(id)a0 intoPersistentStore:(id)a1 completion:(id /* block */)a2;
- (void)acceptShareInvitationsFromURLs:(id)a0 intoPersistentStore:(id)a1 completion:(id /* block */)a2;
- (BOOL)canUpdateRecordForManagedObjectWithID:(id)a0;
- (id)initWithName:(id)a0 managedObjectModel:(id)a1;
- (BOOL)canDeleteRecordForManagedObjectWithID:(id)a0;
- (BOOL)initializeCloudKitSchemaWithOptions:(unsigned long long)a0 error:(id *)a1;
- (void)acceptShareInvitationsFromMetadata:(id)a0 intoPersistentStore:(id)a1 completion:(id /* block */)a2;
- (BOOL)assignManagedObjects:(id)a0 toCloudKitRecordZone:(id)a1 inPersistentStore:(id)a2 error:(id *)a3;
- (void)eventUpdated:(id)a0;
- (id)recordIDForManagedObjectID:(id)a0;
- (void)persistUpdatedShare:(id)a0 inPersistentStore:(id)a1 completion:(id /* block */)a2;
- (void)shareManagedObjects:(id)a0 toShare:(id)a1 completion:(id /* block */)a2;
- (id)recordsForManagedObjectIDs:(id)a0;
- (void)purgeObjectsAndRecordsInZoneWithID:(id)a0 inPersistentStore:(id)a1 completion:(id /* block */)a2;
- (id)fetchSharesInPersistentStore:(id)a0 error:(id *)a1;
- (BOOL)canModifyManagedObjectsInStore:(id)a0;
- (void)setPersistentStoreDescriptions:(id)a0;
- (id)fetchSharesMatchingObjectIDs:(id)a0 error:(id *)a1;
- (void)_loadStoreDescriptions:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)recordIDsForManagedObjectIDs:(id)a0;
- (id)recordForManagedObjectID:(id)a0;

@end
