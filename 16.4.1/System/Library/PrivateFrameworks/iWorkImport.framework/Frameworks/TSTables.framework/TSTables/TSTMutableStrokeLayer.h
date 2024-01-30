@interface TSTMutableStrokeLayer : TSTStrokeLayer

@property (nonatomic) unsigned int columnOrRowIndex;

- (void)invalidate;
- (void)removeRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a0;
- (void)moveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toIndex:(long long)a1;
- (void)appendStroke:(id)a0 inRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a1 order:(int)a2;
- (void)applyStroke:(id)a0 atIndexes:(id)a1 order:(int)a2 applyStroke:(id)a3 atIndexes:(id)a4 order:(int)a5 applyStroke:(id)a6 atIndexes:(id)a7 order:(int)a8 applyStroke:(id)a9 atIndexes:(id)a10 order:(int)a11 applyStroke:(id)a12 atIndexes:(id)a13 order:(int)a14;
- (void)flattenStrokeOrder;
- (BOOL)hasStrokeInRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a0;
- (void)insertSpaceAtRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a0;
- (void)invalidateRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a0;
- (void)setStroke:(id)a0 inRange:(struct TSTSimpleRange { long long x0; unsigned long long x1; })a1 order:(int)a2;
- (void)swapSegmentAtIndex:(long long)a0 withSegmentAtIndex:(long long)a1;

@end
