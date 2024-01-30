@interface AKCASatoriReporter : AKCAReporter

- (id)initWithRequestID:(id)a0;
- (void)didCompleteVerificationWithSuccess:(BOOL)a0 duration:(unsigned long long)a1;
- (void)didCompleteWithSuccess:(BOOL)a0 authorizationAlreadyComplete:(BOOL)a1;
- (void)didPerformVerificationWithSuccess:(BOOL)a0 duration:(unsigned long long)a1;

@end
