@class NSMutableDictionary;

@interface MTSampling : NSObject

@property (retain, nonatomic) NSMutableDictionary *sessions;

- (id)init;
- (void).cxx_destruct;
- (void)clearSessionWithEventType:(id)a0;
- (BOOL)isSampledInWithEventType:(id)a0 samplingForced:(id)a1 sessionSamplingPercentage:(id)a2 sessionDuration:(id)a3 samplingPercentage:(id)a4;
- (BOOL)isSampledInWithEventType:(id)a0 sessionSamplingPercentage:(double)a1 sessionDurationMs:(unsigned long long)a2;
- (BOOL)isSampledInWithMetricsData:(id)a0;
- (BOOL)isSampledInWithSamplingPercentage:(double)a0;

@end
