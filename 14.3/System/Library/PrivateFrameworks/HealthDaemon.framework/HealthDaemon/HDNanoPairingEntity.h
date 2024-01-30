@class NSUUID, NSString;

@interface HDNanoPairingEntity : HDHealthEntity

@property (retain, nonatomic) HDNanoPairingEntity *entity;
@property (copy, nonatomic) NSUUID *nanoRegistryUUID;
@property (nonatomic) long long syncProvenance;
@property (copy, nonatomic) NSUUID *persistentUUID;
@property (copy, nonatomic) NSUUID *healthDatabaseUUID;
@property (copy, nonatomic) NSString *defaultSourceBundleIdentifier;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (nonatomic, getter=isRestoreComplete) BOOL restoreComplete;

+ (id)foreignKeys;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)_nanoPairingEntitiesWithPredicate:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)nanoPairingEntityWithRegistryUUID:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)sourceEntityForRegistryUUID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)_predicateWithRegistryUUID:(id)a0;
+ (id)nanoPairingEntityWithRegistryUUID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (long long)protectionClass;

- (void).cxx_destruct;
- (id)description;
- (id)_initWithNanoRegistryUUID:(id)a0 persistentUUID:(id)a1 healthDatabaseUUID:(id)a2 sourceBundleIdentifier:(id)a3 deviceIdentifier:(id)a4 syncStoreEntity:(id)a5 restoreComplete:(BOOL)a6 database:(id)a7 error:(id *)a8;
- (BOOL)saveWithHealthDatabase:(id)a0 error:(id *)a1;

@end
