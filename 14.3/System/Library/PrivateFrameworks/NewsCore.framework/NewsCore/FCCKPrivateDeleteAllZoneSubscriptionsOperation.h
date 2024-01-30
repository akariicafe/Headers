@interface FCCKPrivateDeleteAllZoneSubscriptionsOperation : FCCKPrivateDatabaseOperation

@property (copy, nonatomic) id /* block */ deleteAllZoneSubscriptionsCompletionBlock;

- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;

@end
