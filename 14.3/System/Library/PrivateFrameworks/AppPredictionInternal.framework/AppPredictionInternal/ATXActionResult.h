@class ATXScoredPrediction, NSString;

@interface ATXActionResult : NSObject {
    struct ATXPredictionItem { NSString *key; unsigned long long actionHash; float inputSignals[807]; float score; BOOL isMediumConfidenceForBlendingLayer; BOOL isHighConfidenceForBlendingLayer; } _predictionItem;
    BOOL _hasPredictionItem;
}

@property (readonly, nonatomic) ATXScoredPrediction *scoredAction;
@property (readonly, nonatomic) NSString *actionKey;
@property (readonly, nonatomic) const struct ATXPredictionItem { id x0; unsigned long long x1; float x2[807]; float x3; BOOL x4; BOOL x5; } *predictionItem;

- (void).cxx_destruct;
- (void)setPredictionItem:(const struct ATXPredictionItem { id x0; unsigned long long x1; float x2[807]; float x3; BOOL x4; BOOL x5; } *)a0;
- (id)initWithScoredAction:(id)a0 predictionItem:(const struct ATXPredictionItem { id x0; unsigned long long x1; float x2[807]; float x3; BOOL x4; BOOL x5; } *)a1 actionKey:(id)a2;
- (id).cxx_construct;

@end
