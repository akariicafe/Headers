@interface VUIJSMetricsInterface : IKJSObject <VUIJSMetricsInterface>

- (void)recordEvent:(id)a0;
- (id)initWithAppContext:(id)a0;
- (void)recordPerfEvent:(id)a0;
- (void)recordLogEvent:(id)a0;

@end
