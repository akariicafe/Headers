@interface FAURLConfiguration : NSObject <FAURLProvider>

- (id)groupKitConfiguration;
- (void)fetchAAURLConfigurationWithCompletion:(id /* block */)a0;
- (void)URLForEndpoint:(id)a0 withCompletion:(id /* block */)a1;
- (id)URLForEndpoint:(id)a0;
- (id)groupKitMetricsRateLimit;

@end
