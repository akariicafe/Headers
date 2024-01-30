@class TSTStrokeLayer, TSTMutableStrokeLayer;

@interface TSTStrokeLayerStack : TSTStrokeLayerAbstractStack

@property (retain, nonatomic) TSTStrokeLayer *defaultStrokeLayer;
@property (retain, nonatomic) TSTStrokeLayer *customStrokeLayer;
@property (retain, nonatomic) TSTMutableStrokeLayer *clearedStrokeLayer;
@property (retain, nonatomic) TSTMutableStrokeLayer *dynamicStrokeLayer;
@property (retain, nonatomic) TSTMutableStrokeLayer *spillStrokeLayer;
@property (readonly, nonatomic) BOOL isDefaultsOnly;
@property (readonly, nonatomic) BOOL isEligibleForDefaultsOnlyReplacement;

+ (id)defaultsOnlyStrokeLayerStack;
+ (id)strokeLayerStack;

- (void).cxx_destruct;
- (unsigned long long)count;
- (BOOL)replaceDefaultStrokeLayerWith:(id)a0;
- (id)p_strokeLayerEnumeration;
- (id)portalledStrokeLayer;
- (id)replacementWithDefaults;
- (void)verifyWithExpectedDefaultStrokeLayer:(id)a0;
- (void)insertClearedStrokeAtRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a0;
- (void)insertDynamicStroke:(id)a0 strokeOrder:(int)a1 atRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a2;
- (void)insertSpillStroke:(id)a0 atRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a1;
- (BOOL)hasSpillStrokeInRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a0;
- (BOOL)replaceCustomStrokeLayerWith:(id)a0;
- (void)invalidateCustomStrokes;
- (void)invalidateClearedStrokesInRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a0;
- (void)invalidateDynamicStrokes;
- (void)invalidateDynamicStrokesInRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a0;
- (void)invalidateSpillStrokes;

@end
