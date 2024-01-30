@interface BRFetchQuotaOperation : BROperation

@property (copy) id /* block */ fetchQuotaCompletionBlock;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (void).cxx_destruct;

@end
