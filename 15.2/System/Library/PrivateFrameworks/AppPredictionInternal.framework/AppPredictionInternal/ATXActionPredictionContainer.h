@class NSString, _PASLock, ATXMinimalSlotResolutionParameters;

@interface ATXActionPredictionContainer : NSObject <ATXScoredPredictionProtocol, NSCopying> {
    _PASLock *_lock;
    struct ATXPredictionItem { NSString *key; unsigned long long actionHash; float inputSignals[817]; float score; BOOL isMediumConfidenceForBlendingLayer; BOOL isHighConfidenceForBlendingLayer; } _predictionItem;
    ATXMinimalSlotResolutionParameters *_parameters;
}

@property (nonatomic) struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; BOOL x4; BOOL x5; } predictionItem;
@property (readonly, nonatomic) NSString *actionKey;

- (id)slotSet;
- (BOOL)isEqualToActionPredictionContainer:(id)a0;
- (id)initWithScoredAction:(id)a0 slotSet:(id)a1 minimalSlotResolutionParameters:(id)a2 score:(float)a3 actionKey:(id)a4 predictionItem:(struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; BOOL x4; BOOL x5; })a5;
- (void)setScore:(float)a0;
- (float)score;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithScoredAction:(id)a0 slotSet:(id)a1 actionKey:(id)a2;
- (id)initWithMinimalSlotResolutionParameters:(id)a0 score:(float)a1 actionKey:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)initializeScoredActionAndSlotSet;
- (id)copy;
- (unsigned long long)hash;
- (id).cxx_construct;
- (id)scoredAction;

@end
