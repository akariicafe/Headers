@interface SiriActivationAssertion : SiriActivationSource

@property (nonatomic) unsigned long long reason;

- (void)configureConnection;
- (id)connection;
- (id)initWithIdentifier:(id)a0 reason:(unsigned long long)a1;
- (void)invalidatedAtTimestamp:(double)a0;
- (void)dealloc;
- (void)invalidate;
- (void)_setConnection:(id)a0;

@end
