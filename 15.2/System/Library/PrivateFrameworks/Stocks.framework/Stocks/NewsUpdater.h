@class Stock, StockNewsItemCollection;
@protocol NewsUpdaterDelegate;

@interface NewsUpdater : YQLRequest {
    BOOL _firstLoad;
    double _lastResponseTimestamp;
    StockNewsItemCollection *_lastNewsItemCollection;
    Stock *_stock;
    id /* block */ _updateCompletionHandler;
}

@property (weak, nonatomic) id<NewsUpdaterDelegate> delegate;

+ (id)_newsItemCollectionCache;
+ (id)sharedNewsUpdater;

- (void)parseData:(id)a0;
- (void)resetLocale;
- (void).cxx_destruct;
- (id)init;
- (void)failWithError:(id)a0;
- (void)didParseData;
- (void)clearNewsCacheOnDisk;
- (void)fetchNewsForStock:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)shouldReloadOnResume;
- (void)loadNewsCacheFromDiskForSymbol:(id)a0;
- (void)fetchNewsForStock:(id)a0;
- (void)saveLastResponse;

@end
