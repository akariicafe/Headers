@protocol SBAWDMetricDelegate;

@interface SBAWDMetric : NSObject

@property (weak, nonatomic) id<SBAWDMetricDelegate> delegate;

- (void).cxx_destruct;
- (unsigned long long)componentID;
- (Class)dataClass;
- (unsigned long long)metricID;
- (void)postWithDataBuilder:(id /* block */)a0;
- (id)configureWithData:(id)a0;
- (void)_postMetric:(id)a0 withID:(unsigned int)a1;

@end
