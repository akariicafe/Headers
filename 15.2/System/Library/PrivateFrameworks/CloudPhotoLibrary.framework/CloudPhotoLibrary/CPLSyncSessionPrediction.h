@class NSDictionary;

@interface CPLSyncSessionPrediction : NSObject {
    NSDictionary *_predictions;
}

- (id)predictedValueForType:(id)a0;
- (BOOL)matchesXPCActivity:(id)a0;
- (void)updateXPCActivityCriteria:(id)a0;
- (id)updatedPredictionWithValuesAndTypes:(id)a0;
- (id)description;
- (id)initWithPredictedValuesAndTypes:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)matchesXPCActivityCriteria:(id)a0;
- (BOOL)_oldPredictionWithKey:(const char *)a0 inCriteria:(id)a1 matchesPredictionWithKey:(id)a2;
- (id)redactedDescription;
- (void)updateXPCActivity:(id)a0;

@end
