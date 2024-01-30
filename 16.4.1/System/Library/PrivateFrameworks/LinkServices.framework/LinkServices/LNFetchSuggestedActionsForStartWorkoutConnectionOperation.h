@class NSArray, LNAction;

@interface LNFetchSuggestedActionsForStartWorkoutConnectionOperation : LNInterfaceConnectionOperation

@property (copy, nonatomic) NSArray *results;
@property (copy, nonatomic) LNAction *action;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)finishWithError:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)initWithConnectionInterface:(id)a0 action:(id)a1 completionHandler:(id /* block */)a2;

@end
