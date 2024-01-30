@class UILabel, UIView, CAMExposureBiasStatusIndicatorTickMarksView;

@interface CAMExposureBiasStatusIndicator : CAMControlStatusIndicator

@property (readonly, nonatomic) UILabel *_exposureLabel;
@property (readonly, nonatomic) CAMExposureBiasStatusIndicatorTickMarksView *_ticksView;
@property (readonly, nonatomic) UIView *_shadowClippingTick;
@property (readonly, nonatomic) UIView *_highlightClippingTick;
@property (nonatomic) double exposureBiasValue;
@property (nonatomic, getter=isExposureValueVisible) BOOL exposureValueVisible;
@property (nonatomic) double shadowClipping;
@property (nonatomic) double highlightClipping;

- (id)imageNameForCurrentState;
- (id)hudItemForAccessibilityHUDManager:(id)a0;
- (BOOL)shouldUseOutline;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (double)_clippingTickAlphaForClipping:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_clippingTickFrameForClipping:(double)a0 leftAligned:(BOOL)a1;
- (double)_horizontalExposureLabelOffset;
- (void)_layoutHighlightClippingTick;
- (void)_layoutShadowClippingTick;
- (void)_updateExposureLabel;
- (void)_updateHighlightClippingTickAlpha;
- (void)_updateShadowClippingTickAlpha;
- (void)_updateTicks;
- (id)imageNameForAXHUD;
- (BOOL)supportsOrientations;

@end
