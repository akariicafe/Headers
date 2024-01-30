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

- (void)failWithError:(id)a0;
- (void)parseData:(id)a0;
- (void).cxx_destruct;
- (BOOL)hadError;
- (void)didParseData;
- (void)_parseExchangeDictionaries:(id)a0;
- (void)_parseQuoteDictionaries:(id)a0 withDataSourceDictionaries:(id)a1;
- (BOOL)_updateStocks:(id)a0 comprehensive:(BOOL)a1 forceUpdate:(BOOL)a2;

@end
