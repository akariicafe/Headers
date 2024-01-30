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

- (void)resetLocale;
- (void)failWithError:(id)a0;
- (id)init;
- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (void)didParseData;
- (void)loadNewsCacheFromDiskForSymbol:(id)a0;
- (void)clearNewsCacheOnDisk;
- (void)fetchNewsForStock:(id)a0;
- (void)fetchNewsForStock:(id)a0 withCompletion:(id /* block */)a1;
- (void)saveLastResponse;
- (BOOL)shouldReloadOnResume;

@end
