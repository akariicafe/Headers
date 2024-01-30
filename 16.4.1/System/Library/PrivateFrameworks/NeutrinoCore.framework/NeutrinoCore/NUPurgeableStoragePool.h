@class NUStoragePoolStats, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NUPurgeableStoragePool : NSObject {
    NUStoragePoolStats *_stats;
    unsigned long long _nonPurgeableActivityCounter;
    BOOL _migrationTimerScheduled;
    NSMutableArray *_sharedStoragesToBeReclaimedList;
}

@property (readonly, nonatomic) long long nonPurgeableLimit;
@property (readonly, nonatomic) long long purgeableLimit;
@property (readonly, nonatomic) double migrationDelay;
@property (readonly, nonatomic) NSMutableArray *volatileList;
@property (readonly, nonatomic) NSMutableArray *nonPurgeableList;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *migrationQueue;
@property (readonly, copy, nonatomic) NUStoragePoolStats *stats;
@property (readonly, nonatomic) Class storageClass;

+ (void)initialize;
+ (void)purge:(BOOL)a0;
+ (void)reapAllVolatile;
+ (void)reapAllPurged;

- (void)purge:(BOOL)a0;
- (void)migrateAllNonPurgeableStorage;
- (void)_resetNonPurgeableStorageMigrationTimer;
- (id)_allocateStorageWithSize:(struct { long long x0; long long x1; })a0 format:(id)a1;
- (void)_enforcePurgableLimit;
- (id)newStorageWithSize:(struct { long long x0; long long x1; })a0 format:(id)a1 exactMatch:(BOOL)a2;
- (void)_reapVolatile;
- (void)_migrateOldestNonPurgeableStorageToPurgeable;
- (id)newStorageWithMinimumSize:(struct { long long x0; long long x1; })a0 format:(id)a1;
- (void)_returnNonPurgeableStorage:(id)a0;
- (void)_migrationTimer:(unsigned long long)a0;
- (void)_scheduleMigrationTimer;
- (void)_returnVolatileStorage:(id)a0;
- (id)debugDescription;
- (id)newStorageWithSize:(struct { long long x0; long long x1; })a0 format:(id)a1;
- (void)_returnStorage:(id)a0;
- (void)_migrateStorageToPurgeable:(id)a0;
- (id)initWithStorageClass:(Class)a0;
- (void)_reapPurged;
- (void)_migrateAllNonPurgeableStorageIfNoRecentActivity:(unsigned long long)a0;
- (id)reapVolatile;
- (id)_storageFromPoolWithSize:(struct { long long x0; long long x1; })a0 format:(id)a1 exactMatch:(BOOL)a2;
- (id)init;
- (void)returnStorage:(id)a0;
- (id)reapPurged;
- (void)waitForMigration;
- (void)_reclaimSharedStorages;
- (void).cxx_destruct;
- (id)_popOldestNonPurgeableStorage;
- (void)_returnPurgedStorage:(id)a0;

@end
