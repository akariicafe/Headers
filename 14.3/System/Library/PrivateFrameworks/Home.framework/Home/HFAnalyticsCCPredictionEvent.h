@interface HFAnalyticsCCPredictionEvent : HFAnalyticsEvent

@property (nonatomic) unsigned long long predictionStage;
@property (nonatomic) unsigned long long predictionCount;

+ (void)sendMetricsForPredictionEventAtStage:(unsigned long long)a0 withCount:(unsigned long long)a1;

- (id)payload;
- (id)initWithData:(id)a0;

@end
