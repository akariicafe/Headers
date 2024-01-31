@class NSDate, NSString, CKRecordID, NSArray, NSOrderedSet, NSMutableDictionary, NSDictionary, CKServerChangeToken, NSObject, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

@interface CKSyncEngineState : NSObject <NSSecureCoding> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableOrderedSet *_zoneIDsNeedingToFetchChangesSet;
    NSMutableOrderedSet *_pendingDatabaseChangesSet;
    NSMutableOrderedSet *_pendingRecordZoneChangesSet;
    NSMutableOrderedSet *_inFlightRecordChangesSet;
    unsigned long long _internalChangeCount;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *mServerChangeTokensByZoneID;
@property (copy) NSOrderedSet *fakeRecordIDsToSaveForSerializationTests;
@property (copy) NSOrderedSet *fakeRecordIDsToDeleteForSerializationTests;
@property (copy) NSDictionary *fakeZonesToSaveForSerializationTests;
@property (copy) NSOrderedSet *fakeZoneIDsToSaveForSerializationTests;
@property (copy) NSOrderedSet *fakeZoneIDsToDeleteForSerializationTests;
@property (copy) CKRecordID *mockNextKnownUserRecordID;
@property BOOL useMockNextKnownUserRecordID;
@property (copy, nonatomic) id /* block */ changeHandler;
@property (readonly, nonatomic) unsigned long long changeCount;
@property (copy) NSArray *pendingRecordZoneChanges;
@property (copy) NSArray *pendingDatabaseChanges;
@property BOOL needsToFetchDatabaseChanges;
@property BOOL needsToSaveDatabaseSubscription;
@property (copy) NSDate *lastFetchDatabaseChangesDate;
@property (copy, nonatomic) NSString *existingDatabaseSubscriptionID;
@property (readonly, nonatomic) NSArray *inFlightRecordChanges;
@property (copy) CKRecordID *lastKnownUserRecordID;
@property BOOL didPerformInitialUserRecordIDFetch;
@property BOOL hasInFlightUntrackedChanges;
@property (copy) NSString *loggingID;
@property (retain) CKServerChangeToken *serverChangeTokenForDatabase;
@property BOOL hasPendingUntrackedChanges;
@property (readonly, copy) NSArray *zoneIDsWithUnfetchedServerChanges;

+ (id)emptyState;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)init;
- (void)reset;
- (id)redactedDescription;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initInternal;
- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)markRecordZoneChanges:(id)a0 inFlight:(BOOL)a1;
- (void)removePendingRecordZoneChanges:(id)a0;
- (void)setServerChangeToken:(id)a0 forZoneID:(id)a1;
- (void)addPendingDatabaseChanges:(id)a0;
- (void)addPendingRecordZoneChanges:(id)a0;
- (BOOL)containsInFlightRecordZoneChange:(id)a0;
- (BOOL)containsPendingRecordZoneChange:(id)a0;
- (void)getDataRepresentation:(id /* block */)a0;
- (id)initWithStateSerialization:(id)a0 error:(id *)a1;
- (BOOL)needsToDeleteZoneID:(id)a0;
- (BOOL)needsToFetchChangesForZoneID:(id)a0;
- (BOOL)needsToSaveZoneID:(id)a0;
- (void)notifyChangeHandlerWithCoalescing:(BOOL)a0 scheduleSync:(BOOL)a1;
- (void)removeInFlightRecordChanges:(id)a0;
- (void)removePendingDatabaseChanges:(id)a0;
- (id)serverChangeTokenForZoneID:(id)a0;
- (id)serverChangeTokensByZoneID;
- (void)setInitialValues;
- (void)setNeedsToFetchChanges:(BOOL)a0 forRecordZoneID:(id)a1;

@end
