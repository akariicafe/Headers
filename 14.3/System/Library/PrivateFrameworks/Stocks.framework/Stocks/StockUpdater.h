@class NSArray, NSError;
@protocol StockUpdaterDelegate;

@interface StockUpdater : YQLRequest {
    NSError *_lastError;
}

@property (weak, nonatomic) id<StockUpdaterDelegate> delegate;
@property (readonly, nonatomic) BOOL isComprehensive;
@property (readonly, nonatomic) BOOL forceUpdate;
@property (retain, nonatomic) NSArray *requestStocks;
@property (retain, nonatomic) NSArray *pendingStocks;
@property (copy, nonatomic) id /* block */ updateCompletionHandler;

- (void).cxx_destruct;
- (void)parseData:(id)a0;
- (void)failWithError:(id)a0;
- (void)didParseData;
- (BOOL)hadError;
- (BOOL)_updateStocks:(id)a0 comprehensive:(BOOL)a1 forceUpdate:(BOOL)a2;
- (void)_parseExchangeDictionaries:(id)a0;
- (void)_parseQuoteDictionaries:(id)a0 withDataSourceDictionaries:(id)a1;

@end
