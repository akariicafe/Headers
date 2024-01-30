@class MBConnection, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MBBehaviorOptions : NSObject

@property (retain, nonatomic) MBConnection *conn;
@property (retain, nonatomic) NSMutableDictionary *cachedPrefs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cachedPrefsQueue;
@property (copy, nonatomic) NSString *cloudKitContainerName;
@property (nonatomic) long long maxBatchCount;
@property (nonatomic) long long maxBatchSize;
@property (nonatomic) long long manifestPageSize;
@property (nonatomic) long long recordSaveAttempts;
@property (nonatomic) BOOL sqlTrace;
@property (nonatomic) BOOL warnForLateiTunesBackups;
@property (nonatomic) int sqlBatchCount;
@property (nonatomic) double sqlBatchTime;
@property (nonatomic) BOOL useBackgroundOperationsForBackup;
@property (copy, nonatomic) NSString *minimumBuildVersionForFullBackup;
@property (nonatomic) BOOL backupFromLocalSnapshot;
@property (nonatomic) BOOL useABC;
@property (nonatomic) BOOL keepDailySnapshots;
@property (nonatomic) BOOL snapshotAfterForegroundRestore;
@property (nonatomic) BOOL flushLogMessages;
@property (readonly, nonatomic) long long maxBatchSaveAssetSize;
@property (readonly, nonatomic) long long maxBatchFetchAssetSize;
@property (readonly, nonatomic) BOOL usePowerLog;

+ (id)sharedOptions;

- (void).cxx_destruct;
- (id)init;
- (BOOL)sqlTrace;
- (void)_setPref:(id)a0 forKey:(id)a1;
- (id)_behaviorOptionForKey:(id)a0;
- (void)_startListeningForNotifications;
- (id)_getStringOptionLockedForKey:(id)a0 defaultValue:(id)a1;
- (id)_behaviorContainerOptionForKey:(id)a0;
- (id)_getStringOptionForKey:(id)a0 defaultValue:(id)a1;
- (int)_getIntOptionForKey:(id)a0 defaultValue:(int)a1;
- (BOOL)_getBoolOptionForKey:(id)a0 defaultValue:(BOOL)a1;
- (double)_getDoubleOptionForKey:(id)a0 defaultValue:(double)a1;
- (id)_getArrayOptionForKey:(id)a0 defaultValue:(id)a1;
- (void)setmaxBatchSaveAssetSize:(long long)a0;
- (int)maxBatchSaveConcurrentModifyRecordsOperationsWithDefaultValue:(int)a0;
- (int)maxBatchDeleteConcurrentModifyRecordsOperationsWithDefaultValue:(int)a0;
- (int)maxBatchFetchConcurrentFetchRecordsOperationsWithDefaultValue:(int)a0;
- (void)setmaxBatchFetchAssetSize:(long long)a0;
- (void)setSQLTrace:(BOOL)a0;
- (void)setUsePowerLog:(BOOL)a0;
- (double)SQLiteSpaceSavingsThresholdWithDefaultValue:(double)a0;
- (BOOL)validateSignatureOnRestoreWithDefaultValue:(BOOL)a0;
- (int)validateFileEncodingWithDefaultValue:(int)a0;
- (BOOL)enableSQLiteArchivingWithDefaultValue:(BOOL)a0;
- (BOOL)fixOwnershipOnFileScanWithDefaultValue:(BOOL)a0;

@end
