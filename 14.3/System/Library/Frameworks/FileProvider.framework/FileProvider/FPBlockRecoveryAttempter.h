@class NSError;

@interface FPBlockRecoveryAttempter : NSObject {
    id /* block */ _recoveryBlock;
}

@property (weak, nonatomic) NSError *expectedError;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (BOOL)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1;

@end
