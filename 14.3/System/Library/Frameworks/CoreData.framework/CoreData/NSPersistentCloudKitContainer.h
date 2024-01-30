@class NSManagedObjectContext, NSString;

@interface NSPersistentCloudKitContainer : NSPersistentContainer <NSCloudKitMirroringDelegateProgressProvider>

@property (readonly, nonatomic) long long operationTimeout;
@property (readonly, nonatomic) NSManagedObjectContext *metadataContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)discoverDefaultContainerIdentifier;

- (BOOL)initializeCloudKitSchemaWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)recordIDForManagedObjectID:(id)a0;
- (void)dealloc;
- (id)recordsForManagedObjectIDs:(id)a0;
- (BOOL)canUpdateRecordForManagedObjectWithID:(id)a0;
- (BOOL)canDeleteRecordForManagedObjectWithID:(id)a0;
- (id)recordIDsForManagedObjectIDs:(id)a0;
- (id)recordForManagedObjectID:(id)a0;
- (BOOL)canModifyManagedObjectsInStore:(id)a0;
- (id)initWithName:(id)a0 managedObjectModel:(id)a1;
- (void)setPersistentStoreDescriptions:(id)a0;
- (void)eventUpdated:(id)a0;
- (void)_loadStoreDescriptions:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
