@class NSHashTable;
@protocol BDSServiceProtocol;

@interface BDSReadingHistoryServiceClient : NSObject <BDSBookWidgetReadingHistoryProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessLock;
}

@property (readonly, nonatomic) id<BDSServiceProtocol> serviceProxy;
@property (retain, nonatomic) NSHashTable *observers;

+ (void)clearDefaultsCachedDataWithCompletionHandler:(id /* block */)a0;
+ (id)sharedServiceProxy;

- (void)addObserver:(id)a0;
- (id)allObservers;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)clearDataWithCompletionHandler:(id /* block */)a0;
- (void)_handleModelDidChange:(id)a0;
- (void)bookWidgetReadingHistoryStateInfoWithCompletionHandler:(id /* block */)a0;
- (void)clearDefaultsCachedDataWithCompletionHandler:(id /* block */)a0;
- (void)clearTodayWithCompletionHandler:(id /* block */)a0;
- (void)handleSyncFileChangeWithSyncVersionInfo:(id)a0 completion:(id /* block */)a1;
- (void)incrementWithDate:(id)a0 by:(long long)a1 completionHandler:(id /* block */)a2;
- (void)readingHistoryModelSnapshotInfoWithCurrentTime:(id)a0 completionHandler:(id /* block */)a1;
- (void)readingHistoryStateInfoWithRangeStart:(id)a0 rangeEnd:(id)a1 currentTime:(id)a2 completionHandler:(id /* block */)a3;

@end
