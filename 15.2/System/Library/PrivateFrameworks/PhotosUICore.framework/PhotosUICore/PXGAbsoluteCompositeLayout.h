@class _PXGAbsoluteSublayoutComposition;

@interface PXGAbsoluteCompositeLayout : PXGCompositeLayout

@property (readonly, nonatomic) _PXGAbsoluteSublayoutComposition *absoluteComposition;
@property (nonatomic) BOOL shouldUpdateSublayoutsInStrictOrder;

- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)insertSublayout:(id)a0 atIndex:(long long)a1;
- (void)insertSublayoutProvider:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithComposition:(id)a0;
- (void)removeSublayoutsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)setOrigin:(struct CGPoint { double x0; double x1; })a0 forSublayoutAtIndex:(long long)a1;
- (void)setOrigins:(const struct CGPoint { double x0; double x1; } *)a0 forSublayoutsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSublayoutAtIndex:(long long)a1;
- (void)setFrames:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 forSublayoutsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setZPosition:(double)a0 forSublayoutAtIndex:(long long)a1;
- (void)setZPositions:(const double *)a0 forSublayoutsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setReferenceDepth:(double)a0 forSublayoutAtIndex:(long long)a1;
- (void)setReferenceDepths:(const double *)a0 forSublayoutsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setSpriteTransform:(struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; double x1; })a0 forSublayoutAtIndex:(long long)a1;

@end
