@class NSMutableArray;

@interface PXStoryPanTransitionConfiguration : NSObject {
    NSMutableArray *_clipLayouts;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_sourceRects;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_targetRects;
    long long _capacity;
    long long _count;
}

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)enumerateLayoutsUsingBlock:(id /* block */)a0;
- (void)addClipLayout:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
