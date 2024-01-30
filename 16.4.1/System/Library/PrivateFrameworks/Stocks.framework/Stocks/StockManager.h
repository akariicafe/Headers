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

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)handleSyncedDataChanged:(id)a0;
- (void)saveDataChanges;
- (void)saveListChanges;
- (void)DeleteChartData:(id)a0;
- (void)RemoveChartDataFromLRU:(id)a0;
- (void)UpdateChartDataInLRU:(id)a0;
- (void)_addStock:(id)a0 withRemoteNotification:(BOOL)a1;
- (void)_checkForAddedStocks;
- (void)_checkForDeletedStocks;
- (void)_checkForMovedStocks;
- (id)_defaultStockDictionaries;
- (void)_removeStock:(id)a0 withRemoteNotification:(BOOL)a1;
- (void)_saveDataChangesWithStockDictionaries:(id)a0;
- (void)addStock:(id)a0;
- (BOOL)anyMarketOpen;
- (void)clearCachedChartData;
- (void)clearCachedChartDataImageSets;
- (id)makeSyncableStockListFromList:(id)a0;
- (void)moveStockFromIndex:(long long)a0 toIndex:(long long)a1;
- (void)purgeTransientData;
- (void)reloadStocksFromDefaults;
- (void)removeStock:(id)a0;
- (BOOL)setLocalStockListFromSyncableStockList:(id)a0;
- (id)stockForURL:(id)a0;
- (id)stockWithSymbol:(id)a0;
- (id)stocksList;

@end
