@class UIView, AMSUIPopoverShapeLayerMaskView;

@interface AMSUIPopoverShapeLayerView : UIView

@property BOOL shapeLayerPathNeedsUpdate;
@property BOOL popoverBackgroundColorIsOpaque;
@property BOOL arrowVisible;
@property BOOL arrowOffsetWasFlipped;
@property BOOL arrowDirectionWasFlipped;
@property (retain) AMSUIPopoverShapeLayerMaskView *shapeLayerMaskView;
@property unsigned long long arrowDirection;
@property (readonly) double arrowHeight;
@property double arrowOffset;
@property (weak, nonatomic) UIView *viewToMaskWhenContentExtendsOverArrow;

+ (double)arrowBase;
+ (double)cornerRadius;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_shadowPath;
- (double)_shadowOpacity;
- (double)_shadowRadius;
- (void)setNeedsLayout;
- (void).cxx_destruct;
- (void)_updateShapeLayerPath;
- (void)_updateShapeLayerPathIfNeeded;
- (BOOL)wouldPinForOffset:(double)a0;
- (double)_upAndDownStartingXLocationForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_leftAndRightStartYLocationForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_loadNecessaryViews;
- (double)minNonPinnedOffset;
- (double)maxNonPinnedOffset;
- (struct CGSize { double x0; double x1; })_shadowOffset;
- (void)didMoveToWindow;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_shadowInsets;
- (void)_updatePathAnimationState;
- (void)_addLeadingPinnedCurveToPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)_addLeadingPinnedCurveToPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3;
- (void)_addRoundedRectExcludingTopLeftCornerForPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_addTopBottomRoundedRectWithGapForPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_addTopBottomArrowCurveForPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3 peakPoint:(struct CGPoint { double x0; double x1; })a4 isPinned:(BOOL)a5;
- (void)_addLeftRightRoundedRectWithGapForPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_addLeftRightArrowCurveForPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3 peakPoint:(struct CGPoint { double x0; double x1; })a4 isPinned:(BOOL)a5;

@end
