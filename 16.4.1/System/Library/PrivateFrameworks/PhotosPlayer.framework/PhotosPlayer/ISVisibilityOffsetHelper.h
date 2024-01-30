@class UIScrollView;

@interface ISVisibilityOffsetHelper : NSObject <ISVisibilityOffsetComputer>

@property (retain, nonatomic, setter=_setScrollView:) UIScrollView *_scrollView;
@property (nonatomic, setter=_setTargetContentOffset:) struct CGPoint { double x; double y; } _targetContentOffset;
@property (nonatomic) long long direction;
@property (nonatomic) double maximumDistance;
@property (nonatomic) double maximumDistanceLag;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForView:(id)a0 inScrollView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRectForScrollView:(id)a0;
- (void).cxx_destruct;
- (void)_updateDirectionIfNeeded;
- (struct ISVisibilityRange { double x0; double x1; })_visibilityRangeForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)computeVisibilityOffsetsInScrollView:(id)a0 withTargetContentOffset:(struct CGPoint { double x0; double x1; })a1 usingBlock:(id /* block */)a2;
- (void)getVisibility:(BOOL *)a0 offset:(double *)a1 targetVisibilityOffset:(double *)a2 forView:(id)a3;

@end
