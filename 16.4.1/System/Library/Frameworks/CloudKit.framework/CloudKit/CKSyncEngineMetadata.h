@class NSDate, NSArray, CKRecordID, NSOrderedSet, NSMutableDictionary, NSDictionary, CKServerChangeToken, NSObject, NSMutableSet, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

@interface CKSyncEngineMetadata : NSObject <NSSecureCoding> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_zoneIDsNeedingToFetchChangesSet;
    NSMutableOrderedSet *_zoneIDsToSaveSet;
    NSMutableOrderedSet *_zoneIDsToDeleteSet;
    NSMutableOrderedSet *_pendingModificationsSet;
    NSMutableOrderedSet *_inFlightModificationsSet;
    unsigned long long _internalChangeCount;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *mServerChangeTokensByZoneID;
@property (copy) NSOrderedSet *fakeRecordIDsToSaveForSerializationTests;
@property (copy) NSOrderedSet *fakeRecordIDsToDeleteForSerializationTests;
@property (copy) NSDictionary *fakeZonesToSaveForSerializationTests;
@property (copy) CKRecordID *mockNextKnownUserRecordID;
@property BOOL useMockNextKnownUserRecordID;
@property (copy) NSDate *lastFetchDatabaseChangesDate;
@property (readonly, nonatomic) unsigned long long changeCount;
@property BOOL needsToFetchDatabaseChanges;
@property (retain) CKServerChangeToken *serverChangeTokenForDatabase;
@property BOOL needsToSaveDatabaseSubscription;
@property (readonly, nonatomic) NSArray *zoneIDsNeedingToFetchChanges;
@property (readonly, nonatomic) NSArray *zoneIDsToSave;
@property (readonly, nonatomic) NSArray *zoneIDsToDelete;
@property (readonly, nonatomic) NSArray *pendingRecordModifications;
@property (readonly, nonatomic) NSArray *inFlightRecordModifications;
@property (copy) CKRecordID *lastKnownUserRecordID;
@property BOOL didPerformInitialUserRecordIDFetch;
@property BOOL hasPendingAdopterTrackedModifications;
@property BOOL hasInFlightAdopterTrackedModifications;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (void)encodeWithCoder:(id)a0;
- (id)serverChangeTokensByZoneID;
- (void)markRecordModifications:(id)a0 inFlight:(BOOL)a1;
- (void)addPendingRecordModifications:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)getDataRepresentation:(id /* block */)a0;
- (BOOL)needsToSaveZoneID:(id)a0;
- (id)recordIDsToDelete;
- (void)removePendingRecordModifications:(id)a0;
- (BOOL)needsToDeleteZoneID:(id)a0;
- (id)recordIDsToSave;
- (void)removeInFlightRecordModifications:(id)a0;
- (id)serverChangeTokenForRecordZoneID:(id)a0;
- (id)init;
- (void)setNeedsToSave:(BOOL)a0 zoneIDs:(id)a1;
- (BOOL)needsToFetchChangesForZoneID:(id)a0;
- (id)description;
- (void)setNeedsToFetchChanges:(BOOL)a0 forRecordZoneID:(id)a1;
- (void).cxx_destruct;
- (id)pendingRecordIDsWithModificationType:(long long)a0;
- (void)setNeedsToDelete:(BOOL)a0 zoneIDs:(id)a1;
- (void)setServerChangeToken:(id)a0 forRecordZoneID:(id)a1;

@end
