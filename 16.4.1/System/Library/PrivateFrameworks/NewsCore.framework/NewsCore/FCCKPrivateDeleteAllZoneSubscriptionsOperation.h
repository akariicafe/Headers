@interface FCCKPrivateDeleteAllZoneSubscriptionsOperation : FCCKPrivateDatabaseOperation

@property (copy, nonatomic) id /* block */ deleteAllZoneSubscriptionsCompletionBlock;

- (void)operationWillFinishWithError:(id)a0;
- (void)performOperation;
- (void).cxx_destruct;

@end
