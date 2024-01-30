@class NSArray;

@interface LNFetchViewEntitiesConnectionOperation : LNInterfaceConnectionOperation

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSArray *result;
@property (copy) NSArray *interactionIDs;

- (void)finishWithError:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)initWithConnectionInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithConnectionInterface:(id)a0 interactionIDs:(id)a1 completionHandler:(id /* block */)a2;

@end
