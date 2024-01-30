@class NSOperationQueue, NSArray;

@interface VSErrorRecoveryAttempter : NSObject

@property (retain, nonatomic) NSOperationQueue *recoveryAttemptingQueue;
@property (copy, nonatomic) NSArray *options;

- (id)init;
- (void).cxx_destruct;
- (BOOL)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1;
- (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 delegate:(id)a2 didRecoverSelector:(SEL)a3 contextInfo:(void *)a4;

@end
