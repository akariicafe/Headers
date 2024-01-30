@protocol MSFetchMetricsControllerDataSource;

@interface MSFetchMetricsController : NSObject {
    double _startTime;
}

@property (readonly, weak, nonatomic) id<MSFetchMetricsControllerDataSource> dataSource;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)start;
- (void)stopAndSubmitWithOptions:(unsigned long long)a0 fetchSize:(unsigned long long)a1;

@end
