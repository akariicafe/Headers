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

- (unsigned long long)count;
- (void).cxx_destruct;
- (struct { id x0; id x1; id x2; id x3; id x4; })stackReferences;
- (BOOL)hasSpillStrokeInRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a0;
- (void)insertClearedStrokeAtRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a0;
- (void)insertDynamicStroke:(id)a0 strokeOrder:(int)a1 atRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a2;
- (void)insertSpillStroke:(id)a0 atRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a1;
- (void)invalidateClearedStrokesInRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a0;
- (void)invalidateCustomStrokes;
- (void)invalidateDynamicStrokes;
- (void)invalidateDynamicStrokesInRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a0;
- (void)invalidateSpillStrokes;
- (struct vector<TSTStrokeLayer *__unsafe_unretained, std::allocator<TSTStrokeLayer *__unsafe_unretained>> { id *x0; id *x1; struct __compressed_pair<TSTStrokeLayer *__unsafe_unretained *, std::allocator<TSTStrokeLayer *__unsafe_unretained>> { id *x0; } x2; })p_strokeLayerVector;
- (id)portalledStrokeLayer;
- (BOOL)replaceCustomStrokeLayerWith:(id)a0;
- (BOOL)replaceDefaultStrokeLayerWith:(id)a0;
- (id)replacementWithDefaults;
- (void)verifyWithExpectedDefaultStrokeLayer:(id)a0;

@end
