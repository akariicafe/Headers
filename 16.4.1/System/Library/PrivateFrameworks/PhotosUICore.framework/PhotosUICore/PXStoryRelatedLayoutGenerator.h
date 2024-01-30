@class PXStoryRelatedLayoutMetrics;

@interface PXStoryRelatedLayoutGenerator : PXLayoutGenerator {
    BOOL _isPrepared;
    struct CGSize { double width; double height; } _size;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _scrollableOutsets;
    BOOL _isContentScrolledIntoView;
    long long _capacity;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_itemFrames;
}

@property (copy, nonatomic) PXStoryRelatedLayoutMetrics *metrics;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } scrollableOutsets;
@property (readonly, nonatomic) BOOL isContentScrolledIntoView;

+ (long long)_preferredNumberOfItemsForUserInterfaceIdiom:(long long)a0;
+ (BOOL)isExpectedKeyItemAtIndex:(long long)a0;
+ (long long)preferredNumberOfItemsForExtendedTraitCollection:(id)a0;

- (id)initWithMetrics:(id)a0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })size;
- (void)invalidate;
- (void)getGeometries:(struct _PXLayoutGeometry { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; float x4; long long x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; struct CGSize { double x0; double x1; } x7; } *)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withKind:(long long)a2;
- (const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)_framesForItemInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_prepareIfNeeded;
- (void)adjustTargetScrollOffset:(inout struct CGPoint { double x0; double x1; } *)a0 forVelocity:(struct CGPoint { double x0; double x1; })a1 currentScrollOffset:(struct CGPoint { double x0; double x1; })a2 shouldHideContent:(out BOOL *)a3;
- (struct CGSize { double x0; double x1; })estimatedSize;
- (void)getFrames:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 forItemsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
