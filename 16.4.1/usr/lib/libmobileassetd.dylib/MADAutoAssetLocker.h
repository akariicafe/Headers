@class NSMutableDictionary, SUCoreLog, MADAutoAssetPersisted, NSObject;
@protocol OS_dispatch_queue;

@interface MADAutoAssetLocker : NSObject

@property (readonly, retain, nonatomic) SUCoreLog *logger;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *lockerQueue;
@property (readonly, retain, nonatomic) MADAutoAssetPersisted *persistedState;
@property (retain, nonatomic) NSMutableDictionary *locksBySelector;
@property (retain, nonatomic) NSMutableDictionary *eliminateSelectors;

+ (BOOL)lockedByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 withUsagePolicy:(id)a3 withLocalContentURL:(id)a4 withAssetAttributes:(id)a5 lockError:(id *)a6;
+ (id)copyOfLocksBySelector;
+ (id)migrateMismatchedPersistedStateVersion:(id)a0 forEntryID:(id)a1 withMismatchedState:(id)a2;
+ (void)forceGlobalUnlock:(id)a0;
+ (BOOL)endedAllPreviousLocksByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 endError:(id *)a3;
+ (id)autoAssetLocker;
+ (id)newCurrentLockUsageForSelector:(id)a0;
+ (void)resumeFromPersistedWithDownloadedSelectors:(id)a0;
+ (BOOL)additionalLockedByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 withUsagePolicy:(id)a3 lockError:(id *)a4;
+ (BOOL)endedPreviousLocksByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 removingLockCount:(long long)a3 endError:(id *)a4;
+ (BOOL)continuedLockByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 withUsagePolicy:(id)a3 continueError:(id *)a4;
+ (id)lockedSelectorsForEliminate:(id)a0;
+ (BOOL)endedLockByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 endError:(id *)a3;
+ (void)addClientLockReasons:(id)a0 basedOnControl:(id)a1;

- (long long)_currentLockCountOfLock:(id)a0;
- (id)_refreshFilesystemMetadataLastInterest:(id)a0;
- (void)_logPersistedEntry:(id)a0 operation:(id)a1 persistingAssetLock:(id)a2 forSelector:(id)a3 message:(id)a4;
- (void)_logPersistedTableOfContents:(id)a0;
- (BOOL)_endLockDecideUnlocked:(id)a0;
- (void)_mergeContinuedLock:(id)a0 intoExistingLock:(id)a1;
- (id)summary;
- (id)_assetIDOfLock:(id)a0;
- (void)_mergeAddedLock:(id)a0 intoExistingLock:(id)a1;
- (void)_logPersistedRemovedEntry:(id)a0 removedAssetLock:(id)a1 forSelector:(id)a2 message:(id)a3;
- (id)init;
- (void)_removeAssetLock:(id)a0 lastClient:(id)a1 forSelector:(id)a2 message:(id)a3;
- (BOOL)_anyCurrentLocksForEliminate:(id)a0;
- (BOOL)_persistAssetLock:(id)a0 operation:(id)a1 forAssetLock:(id)a2 message:(id)a3;
- (id)description;
- (id)_newAssetLockSummaryWithoutSelectorOrAttributes:(id)a0;
- (BOOL)_endLocksByClient:(id)a0 forAssetSelector:(id)a1 forLockReason:(id)a2 removingLockCount:(long long)a3 endError:(id *)a4;
- (void).cxx_destruct;
- (void)_persistRemoveAssetLock:(id)a0 removedAssetLock:(id)a1 message:(id)a2;

@end
