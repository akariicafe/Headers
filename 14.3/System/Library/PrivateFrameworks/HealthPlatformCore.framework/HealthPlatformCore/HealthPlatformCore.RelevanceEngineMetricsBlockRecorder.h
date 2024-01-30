@interface HealthPlatformCore.RelevanceEngineMetricsBlockRecorder : NSObject <RERelevanceEngineMetricsRecorder> {
    void /* unknown type, empty encoding */ callback;
}

- (id)init;
- (void).cxx_destruct;
- (void)recordTrainingMetrics:(id)a0 forInteraction:(id)a1;
- (BOOL)ignoreValidMetricCheck;

@end
