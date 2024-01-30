@interface SBAppBrightnessMetric : SBAWDMetric

- (Class)dataClass;
- (void)postWithDataBuilder:(id /* block */)a0;
- (unsigned long long)metricID;
- (id)configureWithData:(id)a0;

@end
