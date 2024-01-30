@interface NMSKeepLocalRequestLocal : NMSKeepLocalRequest

+ (id)sharedKeepLocalOperationQueue;

- (unsigned long long)_constraintsWithConstraints:(unsigned long long)a0 options:(id)a1;
- (void)_performRequestWithConstraints:(unsigned long long)a0 qualityOfService:(long long)a1 completion:(id /* block */)a2;
- (unsigned long long)_validatorExceptionWithValidatorException:(unsigned long long)a0 options:(id)a1;
- (void)performWithOptions:(id)a0 completion:(id /* block */)a1;

@end
