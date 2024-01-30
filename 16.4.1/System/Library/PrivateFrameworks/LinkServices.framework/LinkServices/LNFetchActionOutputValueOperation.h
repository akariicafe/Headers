@class LNValue, LNActionOutput;

@interface LNFetchActionOutputValueOperation : LNInterfaceConnectionOperation

@property (retain, nonatomic) LNActionOutput *actionOutput;
@property (retain, nonatomic) LNValue *value;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)finishWithError:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)initWithConnectionInterface:(id)a0 actionOutput:(id)a1 completionHandler:(id /* block */)a2;

@end
