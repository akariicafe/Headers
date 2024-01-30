@class PXMemoriesFeedLayoutMetrics;

@interface PXMemoriesFeedLayoutGenerator : PXLayoutGenerator

@property (nonatomic) BOOL includeDateHeader;
@property (nonatomic) BOOL isFirstHeader;
@property (copy, nonatomic) PXMemoriesFeedLayoutMetrics *metrics;

- (id)initWithMetrics:(id)a0;

@end
