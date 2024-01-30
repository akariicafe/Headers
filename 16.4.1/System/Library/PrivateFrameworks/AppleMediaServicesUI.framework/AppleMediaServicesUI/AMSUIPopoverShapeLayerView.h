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

+ (double)cornerRadius;
+ (double)arrowBase;

- (void)setNeedsLayout;
- (double)minNonPinnedOffset;
- (void)_updateShapeLayerPath;
- (void)didMoveToWindow;
- (id)_shadowPath;
- (double)maxNonPinnedOffset;
- (double)_upAndDownStartingXLocationForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_shadowRadius;
- (double)_leftAndRightStartYLocationForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })_shadowOffset;
- (void)layoutSubviews;
- (void)_updateShapeLayerPathIfNeeded;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_shadowInsets;
- (void)_loadNecessaryViews;
- (void).cxx_destruct;
- (double)_shadowOpacity;
- (BOOL)wouldPinForOffset:(double)a0;
- (void)_addLeadingPinnedCurveToPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)_addLeadingPinnedCurveToPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3;
- (void)_addLeftRightArrowCurveForPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3 peakPoint:(struct CGPoint { double x0; double x1; })a4 isPinned:(BOOL)a5;
- (void)_addLeftRightRoundedRectWithGapForPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_addRoundedRectExcludingTopLeftCornerForPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_addTopBottomArrowCurveForPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3 peakPoint:(struct CGPoint { double x0; double x1; })a4 isPinned:(BOOL)a5;
- (void)_addTopBottomRoundedRectWithGapForPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_updatePathAnimationState;

@end
