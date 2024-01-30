@class NSMutableArray, NSUbiquitousKeyValueStore;

@interface StockManager : NSObject {
    NSMutableArray *_defaultListStockSymbols;
    BOOL _shouldPostSyncNotifications;
    NSMutableArray *_stocksList;
    NSMutableArray *_chartDataLRUCache;
    double _lastModifiedTime;
    BOOL _needRemoteAddNotification;
    BOOL _needRemoteDeleteNotification;
    BOOL _needRemoteMoveNotification;
    NSUbiquitousKeyValueStore *_syncedKVStore;
}

+ (id)sharedManager;
+ (void)clearSharedManager;

- (void).cxx_destruct;
- (id)init;
- (void)handleSyncedDataChanged:(id)a0;
- (void)dealloc;
- (void)UpdateChartDataInLRU:(id)a0;
- (void)RemoveChartDataFromLRU:(id)a0;
- (void)reloadStocksFromDefaults;
- (id)stocksList;
- (void)saveDataChanges;
- (id)stockWithSymbol:(id)a0;
- (id)_defaultStockDictionaries;
- (BOOL)setLocalStockListFromSyncableStockList:(id)a0;
- (void)saveListChanges;
- (void)clearCachedChartData;
- (id)makeSyncableStockListFromList:(id)a0;
- (void)_addStock:(id)a0 withRemoteNotification:(BOOL)a1;
- (void)_removeStock:(id)a0 withRemoteNotification:(BOOL)a1;
- (void)DeleteChartData:(id)a0;
- (void)_saveDataChangesWithStockDictionaries:(id)a0;
- (id)stockForURL:(id)a0;
- (void)addStock:(id)a0;
- (void)removeStock:(id)a0;
- (void)moveStockFromIndex:(long long)a0 toIndex:(long long)a1;
- (void)clearCachedChartDataImageSets;
- (BOOL)anyMarketOpen;
- (void)purgeTransientData;
- (void)_checkForAddedStocks;
- (void)_checkForDeletedStocks;
- (void)_checkForMovedStocks;

@end
