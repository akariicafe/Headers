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

+ (void)enumerateWidthsInLayers:(void *)a0 usingBlock:(id /* block */)a1;
+ (id)mergeLeftStrokes:(id)a0 withRightStrokes:(id)a1;
+ (id)mergeTopStrokes:(id)a0 withBottomStrokes:(id)a1;

- (void)unlock;
- (unsigned long long)count;
- (void).cxx_destruct;
- (void)lockForRead;
- (void)lockForWrite;
- (id)initWithCopyOfMajorStrokes:(id)a0 andMinorStrokes:(id)a1;
- (void)invalidateSpillStrokes;
- (double)maxWidthOfStrokesInRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a0 cachedMax:(double)a1;
- (struct vector<TSTStrokeLayer *__unsafe_unretained, std::allocator<TSTStrokeLayer *__unsafe_unretained>> { id *x0; id *x1; struct __compressed_pair<TSTStrokeLayer *__unsafe_unretained *, std::allocator<TSTStrokeLayer *__unsafe_unretained>> { id *x0; } x2; })p_strokeLayerVector;
- (double)p_widthOfStrokesAtIndex:(long long)a0;
- (id)portalledStrokeLayer;

@end
