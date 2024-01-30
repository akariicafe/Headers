@class NSMutableArray;

@interface PXStoryWipeTransitionConfiguration : NSObject {
    NSMutableArray *_clipLayouts;
    struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; } *_sourceStates;
    struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; } *_targetStates;
    struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; unsigned long long x4; struct CGPoint { double x0; double x1; } x5; } *_primaryDividerInfos;
    struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; BOOL x3; unsigned long long x4; struct CGPoint { double x0; double x1; } x5; } *_secondaryDividerInfos;
    long long _capacity;
    long long _count;
}

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (nonatomic) struct CGSize { double width; double height; } viewportSize;
@property (nonatomic) double dividerWidth;

- (id)initWithDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addClipLayout:(id)a0 configurationBlock:(id /* block */)a1;
- (void)enumerateLayoutsUsingBlock:(id /* block */)a0;

@end
