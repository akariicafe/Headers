@interface AKCAPiggybackReporter : AKCAReporter

- (id)initWithRequestID:(id)a0;
- (void)didCancelRequesting;
- (void)didCircleTimeout;
- (void)didEscapeRequesting;
- (void)didFinishAccepting;
- (id)piggybackResultString:(unsigned long long)a0;

@end
