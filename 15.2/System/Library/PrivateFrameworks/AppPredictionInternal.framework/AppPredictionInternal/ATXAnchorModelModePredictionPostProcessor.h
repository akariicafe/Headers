@class NSArray, ATXAnchorModelPrediction, BMUserFocusComputedModeStream;

@interface ATXAnchorModelModePredictionPostProcessor : NSObject {
    ATXAnchorModelPrediction *_anchorModelPrediction;
    BMUserFocusComputedModeStream *_modeStream;
}

@property (retain, nonatomic) NSArray *serializedTriggers;

- (void).cxx_destruct;
- (id)initWithAnchorModelPrediction:(id)a0;
- (id)_triggerForAnchorType;
- (BOOL)shouldPredictAnchorModelModePrediction;

@end
