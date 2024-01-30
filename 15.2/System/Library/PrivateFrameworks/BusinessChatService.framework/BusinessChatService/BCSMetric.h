@class NSArray;

@interface BCSMetric : NSObject {
    NSArray *_postProcessingMetricHandlers;
    id _context;
}

@property (readonly, nonatomic) long long metricType;

+ (BOOL)isUsingExpensiveNetwork;

- (void).cxx_destruct;
- (void)submitForPostProcessing;

@end
