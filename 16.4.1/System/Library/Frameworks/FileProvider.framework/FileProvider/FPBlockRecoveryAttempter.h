@class NSError;
@protocol FPXOperationService;

@interface FPBlockRecoveryAttempter : NSObject {
    id /* block */ _recoveryBlock;
    id<FPXOperationService> _fpxOperationService;
}

@property (weak, nonatomic) NSError *expectedError;

- (void).cxx_destruct;
- (BOOL)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1;
- (id)initWithBlock:(id /* block */)a0 operationService:(id)a1;

@end
