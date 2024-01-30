@class NSArray;

@interface BCSMetric : NSObject

@property (readonly, nonatomic) NSArray *postProcessingMetricHandlers;
@property (readonly, nonatomic) id context;
@property (readonly, nonatomic) long long metricType;

- (void).cxx_destruct;
- (void)submitForPostProcessing;
- (id)_initWithType:(long long)a0 context:(id)a1 postProcessingMetricHandlers:(id)a2;

@end
