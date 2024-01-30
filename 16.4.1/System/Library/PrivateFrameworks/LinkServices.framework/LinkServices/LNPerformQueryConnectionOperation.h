@class LNQueryRequest, LNQueryOutput;

@interface LNPerformQueryConnectionOperation : LNInterfaceConnectionOperation

@property (readonly, nonatomic) LNQueryRequest *queryRequest;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) LNQueryOutput *output;

- (void)finishWithError:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)initWithConnectionInterface:(id)a0 query:(id)a1 completionHandler:(id /* block */)a2;

@end
