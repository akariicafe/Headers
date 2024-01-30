@interface FCCKPrivateDeleteAllZoneSubscriptionsOperation : FCCKPrivateDatabaseOperation

@property (copy, nonatomic) id /* block */ deleteAllZoneSubscriptionsCompletionBlock;

- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;

@end
