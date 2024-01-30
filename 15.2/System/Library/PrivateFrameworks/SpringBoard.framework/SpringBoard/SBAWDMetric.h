@protocol SBAWDMetricDelegate;

@interface SBAWDMetric : NSObject

@property (weak, nonatomic) id<SBAWDMetricDelegate> delegate;

- (Class)dataClass;
- (void).cxx_destruct;
- (unsigned long long)componentID;
- (void)postWithDataBuilder:(id /* block */)a0;
- (unsigned long long)metricID;
- (id)configureWithData:(id)a0;
- (void)_postMetric:(id)a0 withID:(unsigned int)a1;

@end
