@interface IDSTransactionLogTask : NSObject

@property (copy, nonatomic) id /* block */ completionBlock;

- (void)_completeWithError:(id)a0;
- (void).cxx_destruct;

@end
