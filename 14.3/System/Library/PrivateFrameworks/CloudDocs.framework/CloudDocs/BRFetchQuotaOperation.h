@interface BRFetchQuotaOperation : BROperation

@property (copy) id /* block */ fetchQuotaCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;

@end
