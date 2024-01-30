@class NSArray;

@interface PXErrorRecoveryAttempter : NSObject

@property (copy, nonatomic) NSArray *recoveryOptions;
@property (nonatomic) long long preferredRecoveryOptionIndex;

- (id)init;
- (void).cxx_destruct;
- (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 delegate:(id)a2 didRecoverSelector:(SEL)a3 contextInfo:(void *)a4;
- (long long)alertActionStyleForRecoveryOptionAtIndex:(unsigned long long)a0;

@end
