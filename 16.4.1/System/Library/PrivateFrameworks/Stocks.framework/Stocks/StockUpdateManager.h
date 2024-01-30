@class NSString, NSMutableArray, NSHashTable;

@interface StockUpdateManager : NSObject <StockUpdaterDelegate> {
    BOOL _postingRemoteUpdateNotification;
    NSMutableArray *_activeUpdaters;
    NSMutableArray *_inactiveUpdaters;
    NSHashTable *_updateObservers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)_enumerateObserversRespondingToSelector:(SEL)a0 usingBlock:(id /* block */)a1;
- (BOOL)isLoading;
- (void)cancel;
- (void)dealloc;
- (void)failWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)hadError;
- (void)addUpdateObserver:(id)a0;
- (void)removeUpdateObserver:(id)a0;
- (void)_kickoffUpdater:(id)a0 forStocks:(id)a1 comprehensive:(BOOL)a2 forceUpdate:(BOOL)a3 completion:(id /* block */)a4;
- (void)_stocksDidReload;
- (void)_updateStocksBasic:(id)a0 forced:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)_updaterDidCancelOrFinish:(id)a0;
- (id)availableStockUpdater;
- (void)resetUpdaters;
- (void)stockUpdater:(id)a0 didFailWithError:(id)a1 whileUpdatingStocks:(id)a2 comprehensive:(BOOL)a3;
- (void)stockUpdater:(id)a0 didRequestUpdateForStocks:(id)a1 isComprehensive:(BOOL)a2;
- (void)stockUpdater:(id)a0 didUpdateStocks:(id)a1 isComprehensive:(BOOL)a2;
- (void)stocksDidUpdateRemotely;
- (void)updateAllStocksBasic;
- (void)updateAllStocksBasic:(id)a0 withCompletion:(id /* block */)a1;
- (void)updateAllStocksBasicWithCompletion:(id /* block */)a0;
- (void)updateStaleStocksBasicWithCompletion:(id /* block */)a0;
- (void)updateStockBasicWithCompletion:(id)a0 withCompletion:(id /* block */)a1;
- (void)updateStockComprehensive:(id)a0;
- (void)updateStockComprehensive:(id)a0 forced:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)updateStockComprehensive:(id)a0 withCompletion:(id /* block */)a1;
- (void)updateStocksComprehensive:(id)a0;

@end
