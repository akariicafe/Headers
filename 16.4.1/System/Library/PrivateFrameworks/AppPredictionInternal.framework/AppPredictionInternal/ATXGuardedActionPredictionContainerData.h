@class ATXScoredPrediction, ATXSlotSet;

@interface ATXGuardedActionPredictionContainerData : NSObject {
    ATXScoredPrediction *_scoredAction;
    ATXSlotSet *_slotSet;
    float _score;
}

- (id)initWithScoredAction:(id)a0 slotSet:(id)a1 score:(float)a2;
- (void).cxx_destruct;

@end
