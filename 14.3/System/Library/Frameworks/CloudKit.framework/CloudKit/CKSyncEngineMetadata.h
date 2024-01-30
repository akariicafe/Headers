@class NSMutableDictionary, CKServerChangeToken, NSMutableSet, NSMutableOrderedSet, NSObject, NSArray;
@protocol OS_dispatch_queue;

@interface CKSyncEngineMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableSet *zoneIDsNeedingToFetchChangesSet;
@property (retain, nonatomic) NSMutableDictionary *serverChangeTokensByZoneID;
@property (retain, nonatomic) NSMutableDictionary *zonesToSaveDictionary;
@property (retain, nonatomic) NSMutableOrderedSet *zoneIDsToDeleteSet;
@property (retain, nonatomic) NSMutableOrderedSet *pendingModificationsSet;
@property (retain, nonatomic) NSMutableOrderedSet *inFlightModificationsSet;
@property (nonatomic) unsigned long long internalChangeCount;
@property (retain, nonatomic) NSMutableOrderedSet *fakeRecordIDsToSaveForSerializationTests;
@property (retain, nonatomic) NSMutableOrderedSet *fakeRecordIDsToDeleteForSerializationTests;
@property (readonly, nonatomic) unsigned long long changeCount;
@property (nonatomic) BOOL needsToFetchDatabaseChanges;
@property (retain, nonatomic) CKServerChangeToken *serverChangeTokenForDatabase;
@property (nonatomic) BOOL needsToSaveDatabaseSubscription;
@property (readonly, nonatomic) NSArray *zoneIDsNeedingToFetchChanges;
@property (readonly, nonatomic) NSArray *zonesToSave;
@property (readonly, nonatomic) NSArray *zoneIDsToDelete;
@property (readonly, nonatomic) NSArray *pendingRecordModifications;
@property (readonly, nonatomic) NSArray *inFlightRecordModifications;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)init;
- (void).cxx_destruct;
- (void)setNeedsToDelete:(BOOL)a0 zoneIDs:(id)a1;
- (void)getDataRepresentation:(id /* block */)a0;
- (id)recordIDsToDelete;
- (void)commonInit;
- (id)serverChangeTokenForRecordZoneID:(id)a0;
- (id)initWithData:(id)a0;
- (BOOL)needsToSaveZone:(id)a0;
- (BOOL)needsToFetchChangesForZoneID:(id)a0;
- (void)markRecordModifications:(id)a0 inFlight:(BOOL)a1;
- (void)setServerChangeToken:(id)a0 forRecordZoneID:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)addPendingRecordModifications:(id)a0;
- (void)removePendingRecordModifications:(id)a0;
- (BOOL)needsToDeleteZoneID:(id)a0;
- (id)pendingRecordIDsWithModificationType:(long long)a0;
- (void)setNeedsToSave:(BOOL)a0 zones:(id)a1;
- (id)recordIDsToSave;
- (void)setNeedsToFetchChanges:(BOOL)a0 forRecordZoneID:(id)a1;
- (void)removeInFlightRecordModifications:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
