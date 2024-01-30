@class NSArray;

@interface LNFetchDisplayRepresentationConnectionOperation : LNInterfaceConnectionOperation

@property (copy, nonatomic) NSArray *results;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)finishWithError:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)initWithConnectionInterface:(id)a0 actions:(id)a1 completionHandler:(id /* block */)a2;

@end
