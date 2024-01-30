@interface AKCAPiggybackReporter : AKCAReporter

- (id)initWithRequestID:(id)a0;
- (id)piggybackResultString:(unsigned long long)a0;
- (void)didCircleTimeout;
- (void)didFinishAccepting;
- (void)didCancelRequesting;
- (void)didEscapeRequesting;

@end
