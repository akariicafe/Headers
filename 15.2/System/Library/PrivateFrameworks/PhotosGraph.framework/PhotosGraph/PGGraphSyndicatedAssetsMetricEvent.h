@class NSDictionary, PGManagerWorkingContext;

@interface PGGraphSyndicatedAssetsMetricEvent : PGAbstractMetricEvent {
    NSDictionary *_payload;
}

@property (retain, nonatomic) PGManagerWorkingContext *workingContext;

- (id)payload;
- (id)identifier;
- (void).cxx_destruct;
- (id)initWithWorkingContext:(id)a0;
- (void)gatherMetricsWithProgressBlock:(id /* block */)a0;

@end
