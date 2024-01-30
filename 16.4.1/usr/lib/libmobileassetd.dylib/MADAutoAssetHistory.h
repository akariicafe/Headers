@class MADAutoAssetHistoryTracker, NSObject;
@protocol OS_dispatch_queue;

@interface MADAutoAssetHistory : NSObject

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *historyProtectionQueue;
@property (readonly, retain, nonatomic) MADAutoAssetHistoryTracker *trackerFilesystem;
@property (readonly, retain, nonatomic) MADAutoAssetHistoryTracker *trackerLocker;
@property (readonly, retain, nonatomic) MADAutoAssetHistoryTracker *trackerAtomic;
@property (readonly, retain, nonatomic) MADAutoAssetHistoryTracker *trackerError;
@property (nonatomic) BOOL persistedStateLoaded;

+ (void)loadPersistedState;
+ (id)autoAssetHistory;
+ (void)recordFailedOperation:(long long)a0 fromClient:(id)a1 forAssetID:(id)a2 withSelector:(id)a3 failingWithError:(id)a4;
+ (void)recordFailedOperation:(long long)a0 fromClient:(id)a1 forAtomicInstance:(id)a2 ofAssetSet:(id)a3 failingWithError:(id)a4;
+ (void)recordFailedOperation:(long long)a0 fromLayer:(long long)a1 forAssetID:(id)a2 withSelector:(id)a3 failingWithError:(id)a4;
+ (void)recordFailedOperation:(long long)a0 fromLayer:(long long)a1 forAtomicInstance:(id)a2 ofAssetSet:(id)a3 failingWithError:(id)a4;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromClient:(id)a2 forAssetID:(id)a3 withSelector:(id)a4;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromClient:(id)a2 fromLayer:(long long)a3 forAssetID:(id)a4 withSelector:(id)a5 usageCount:(long long)a6 forAtomicInstance:(id)a7 ofAssetSet:(id)a8 failingWithError:(id)a9;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromClient:(id)a2 usageCount:(long long)a3 forAssetID:(id)a4 withSelector:(id)a5;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromClient:(id)a2 usageCount:(long long)a3 forAtomicInstance:(id)a4 ofAssetSet:(id)a5;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromLayer:(long long)a2 forAssetID:(id)a3 withSelector:(id)a4;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromLayer:(long long)a2 usageCount:(long long)a3 forAssetID:(id)a4 withSelector:(id)a5;
+ (void)recordOperation:(long long)a0 toHistoryType:(long long)a1 fromLayer:(long long)a2 usageCount:(long long)a3 forAtomicInstance:(id)a4 ofAssetSet:(id)a5;

- (id)init;
- (void).cxx_destruct;
- (id)_trackerForHistoryType:(long long)a0;

@end
