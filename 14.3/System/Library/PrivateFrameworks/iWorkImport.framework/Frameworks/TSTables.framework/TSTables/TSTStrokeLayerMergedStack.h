@class TSTStrokeLayer, TSTMutableStrokeLayer, TSTStrokeOrderedLayer;

@interface TSTStrokeLayerMergedStack : TSTStrokeLayerAbstractStack

@property (retain, nonatomic) TSTStrokeLayer *defaultMinorStrokeLayer;
@property (retain, nonatomic) TSTStrokeLayer *defaultMajorStrokeLayer;
@property (retain, nonatomic) TSTStrokeLayer *customUnorderedStrokeLayer;
@property (retain, nonatomic) TSTStrokeOrderedLayer *customOrderedStrokeLayer;
@property (retain, nonatomic) TSTMutableStrokeLayer *clearedMinorStrokeLayer;
@property (retain, nonatomic) TSTMutableStrokeLayer *clearedMajorStrokeLayer;
@property (retain, nonatomic) TSTMutableStrokeLayer *dynamicUnorderedStrokeLayer;
@property (retain, nonatomic) TSTStrokeOrderedLayer *dynamicOrderedStrokeLayer;
@property (retain, nonatomic) TSTMutableStrokeLayer *spillMinorStrokeLayer;
@property (retain, nonatomic) TSTMutableStrokeLayer *spillMajorStrokeLayer;

+ (id)mergeTopStrokes:(id)a0 withBottomStrokes:(id)a1;
+ (id)mergeLeftStrokes:(id)a0 withRightStrokes:(id)a1;

- (void)unlock;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)lockForRead;
- (void)lockForWrite;
- (id)p_strokeLayerEnumeration;
- (id)portalledStrokeLayer;
- (void)invalidateSpillStrokes;
- (id)initWithCopyOfMajorStrokes:(id)a0 andMinorStrokes:(id)a1;
- (id)initWithReferenceOfMajorStrokes:(id)a0 andMinorStrokes:(id)a1;
- (double)maxWidthOfStrokesInRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a0 cachedMax:(double)a1;
- (double)p_widthOfStrokesAtIndex:(long long)a0;

@end
