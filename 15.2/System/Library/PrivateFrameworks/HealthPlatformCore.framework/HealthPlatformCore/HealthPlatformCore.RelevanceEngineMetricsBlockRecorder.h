@interface HealthPlatformCore.RelevanceEngineMetricsBlockRecorder : NSObject <RERelevanceEngineMetricsRecorder> {
    void /* unknown type, empty encoding */ callback;
}

- (void)recordTrainingMetrics:(id)a0 forInteraction:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)ignoreValidMetricCheck;

@end
