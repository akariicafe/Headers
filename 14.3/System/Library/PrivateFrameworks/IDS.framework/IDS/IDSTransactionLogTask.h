@interface IDSTransactionLogTask : NSObject

@property (copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;
- (void)_completeWithError:(id)a0;

@end
