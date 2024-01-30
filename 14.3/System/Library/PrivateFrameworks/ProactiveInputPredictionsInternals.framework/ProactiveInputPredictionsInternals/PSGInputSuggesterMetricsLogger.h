@class PETEventTracker2;

@interface PSGInputSuggesterMetricsLogger : NSObject {
    PETEventTracker2 *_tracker;
}

- (void)logQuery:(id)a0 config:(id)a1;
- (void)logError:(unsigned char)a0 request:(id)a1 trigger:(id)a2 config:(id)a3;
- (int)_predictionDataSourceTypeProto:(unsigned char)a0;
- (void)logPrediction:(id)a0 request:(id)a1 latencyMillis:(double)a2 config:(id)a3;
- (void)_populateQueryFields:(id)a0 proto:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTracker:(id)a0;
- (void)_populatePredictionItems:(id)a0 proto:(id)a1;
- (void)logEngagement:(id)a0 request:(id)a1 position:(unsigned long long)a2 config:(id)a3;
- (void)logTrigger:(id)a0 request:(id)a1 config:(id)a2;
- (void)_populateTriggerFields:(id)a0 proto:(id)a1;
- (int)_errorTypeProto:(unsigned char)a0;
- (void)_populateTriggerAttributeFields:(id)a0 proto:(id)a1;
- (int)_triggerSourceTypeProto:(unsigned long long)a0;
- (void)logImpression:(id)a0 request:(id)a1 config:(id)a2;
- (void)_populateTreatmentFields:(id)a0 proto:(id)a1;
- (void)logSpeedMetricForLocaleIdentifier:(id)a0 messageDurationMilliseconds:(int)a1 messageLength:(int)a2 messageWords:(int)a3 zkwConfig:(id)a4 wordBoundaryConfig:(id)a5;

@end
