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

- (BOOL)shouldUseOutline;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void).cxx_destruct;
- (id)imageNameForCurrentState;
- (void)layoutSubviews;
- (BOOL)supportsOrientations;
- (void)_updateExposureLabel;
- (void)_updateTicks;
- (double)_horizontalExposureLabelOffset;
- (void)_layoutShadowClippingTick;
- (void)_layoutHighlightClippingTick;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_clippingTickFrameForClipping:(double)a0 leftAligned:(BOOL)a1;
- (double)_clippingTickAlphaForClipping:(double)a0;
- (void)_updateShadowClippingTickAlpha;
- (void)_updateHighlightClippingTickAlpha;

@end
