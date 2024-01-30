@interface SBAppBrightnessMetric : SBAWDMetric

- (Class)dataClass;
- (unsigned long long)metricID;
- (void)postWithDataBuilder:(id /* block */)a0;
- (id)configureWithData:(id)a0;

@end
