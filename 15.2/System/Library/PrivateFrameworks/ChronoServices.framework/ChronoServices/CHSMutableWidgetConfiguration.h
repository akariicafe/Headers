@class NSArray, CHSWidgetMetricsSpecification;

@interface CHSMutableWidgetConfiguration : CHSWidgetConfiguration

@property (copy, nonatomic) NSArray *containerDescriptors;
@property (copy, nonatomic) CHSWidgetMetricsSpecification *metricsSpecification;

- (void)setMetricsSpecification:(id)a0;
- (void)setContainerDescriptors:(id)a0;

@end
