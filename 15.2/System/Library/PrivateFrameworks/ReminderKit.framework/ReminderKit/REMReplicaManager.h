@class NSMutableDictionary, NSMutableOrderedSet;

@interface REMReplicaManager : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ivarLock;
@property (nonatomic) BOOL isPersistable;
@property (retain, nonatomic) NSMutableOrderedSet *replicaUUIDs;
@property (retain, nonatomic) NSMutableDictionary *replicaEntries;
@property (nonatomic) unsigned long long currentVersion;
@property (nonatomic) unsigned long long maxLastSavedVersion;
@property (nonatomic) BOOL exceededMaxSerializedSize;

+ (id)unsavedReplicaManagersForAccountIDs:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (BOOL)disablesInMemoryOnlyCheck;
+ (BOOL)shouldUseNewInMemoryOnlyReplicaManager;
+ (id)replicaManagerWithSerializedData:(id)a0 error:(id *)a1;
+ (id)replicaManagerForAccountID:(id)a0 store:(id)a1;
+ (void)setDisablesInMemoryOnlyCheck:(BOOL)a0;
+ (id)replicaManagerIfLoadedForAccountID:(id)a0;
+ (void)setReplicaManager:(id)a0 forAccountID:(id)a1;

- (BOOL)hasUnsavedChanges;
- (void)commonInit;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)persistenceDescription;
- (id)l_checkoutReplicaUUIDForClient:(id)a0;
- (void)performLocked:(id /* block */)a0;
- (BOOL)l_updateVersionOfEntry:(id)a0 forClient:(id)a1;
- (void)modifyReplicaEntryForClient:(id)a0 block:(id /* block */)a1;
- (id)l_replicaUUIDsDescription;
- (id)l_replicaEntriesDescriptionForPersistence:(BOOL)a0;
- (id)initWithArchive:(const void *)a0 error:(id *)a1;
- (void)encodeIntoArchive:(void *)a0;
- (id)l_serializedDataWithError:(id *)a0;
- (id)checkoutReplicaUUIDForClient:(id)a0;
- (void)updateVersionForClient:(id)a0;
- (void)returnReplicaForClient:(id)a0;
- (id)serializedDataCappedAtMaxSize:(BOOL)a0 error:(id *)a1;
- (void)didSaveVersion:(unsigned long long)a0;
- (unsigned long long)replicaEntryCount;
- (id)availabilityOfFirstReplicaForCRDTID:(id)a0;
- (id)clockOfFirstReplicaForCRDTID:(id)a0;
- (BOOL)hasEqualPersistedEntriesAs:(id)a0;
- (void)addRandomReplicaEntriesWithCount:(long long)a0;

@end
