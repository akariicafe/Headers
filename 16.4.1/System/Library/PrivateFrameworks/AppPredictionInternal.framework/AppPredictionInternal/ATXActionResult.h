@class ATXScoredPrediction, NSString;

@interface ATXActionResult : NSObject {
    struct ATXPredictionItem { NSString *key; unsigned long long actionHash; float inputSignals[817]; float score; BOOL isMediumConfidenceForBlendingLayer; BOOL isHighConfidenceForBlendingLayer; } _predictionItem;
    BOOL _hasPredictionItem;
}

@property (readonly, nonatomic) ATXScoredPrediction *scoredAction;
@property (readonly, nonatomic) NSString *actionKey;
@property (readonly, nonatomic) const struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; BOOL x4; BOOL x5; } *predictionItem;
@property (readonly, nonatomic) BOOL isSampledResultForLoggingOnly;

- (id).cxx_construct;
- (void)setPredictionItem:(const struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; BOOL x4; BOOL x5; } *)a0;
- (id)description;
- (id)initForLoggingWithPredictionItem:(const struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; BOOL x4; BOOL x5; } *)a0;
- (id)initWithScoredAction:(id)a0 predictionItem:(const struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; BOOL x4; BOOL x5; } *)a1 actionKey:(id)a2;
- (void).cxx_destruct;

@end
