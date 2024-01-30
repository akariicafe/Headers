@class NSTimer, SymbolValidator, NSString;

@interface StockFetcher : NSObject <SymbolValidatorDelegate>

@property (retain) SymbolValidator *validator;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSTimer *timeoutTimer;
@property double timeoutDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithValidator:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)symbolValidator:(id)a0 didValidateSymbols:(id)a1;
- (void)symbolValidator:(id)a0 didFailWithError:(id)a1;
- (void)fetchStockWithSymbol:(id)a0 completionHandler:(id /* block */)a1;
- (void)cleanUpAndReportResult:(id)a0;
- (void)attemptRemoteFetchOfStockWithSymbol:(id)a0 completionHandler:(id /* block */)a1;
- (void)remoteFetchTimedOut;

@end
