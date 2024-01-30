@class ADPointCloudAggregator, ADAggregationParameters;

@interface ARDepthPointCloudCoalescer : NSObject {
    ADPointCloudAggregator *_aggregator;
}

@property (readonly, nonatomic) ADAggregationParameters *aggregationParameters;

- (void)flush;
- (id)init;
- (void).cxx_destruct;
- (void)_commonInit:(id)a0 calibration:(id)a1;
- (void)addDepthPointCloudData:(id)a0;
- (id)depthPointCloudWithPose:(id)a0 imageData:(id)a1;
- (id)initWithAggregationParameters:(id)a0;

@end
