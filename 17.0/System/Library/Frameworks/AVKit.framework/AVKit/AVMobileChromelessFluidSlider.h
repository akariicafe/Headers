@class _UISliderFluidConfiguration, NSArray, NSString, UIBlurEffect, UIView, NSMutableArray, UIPointerInteraction;
@protocol AVMobileChromelessFluidSliderDelegate;

@interface AVMobileChromelessFluidSlider : UISlider <UIPointerInteractionDelegate, _UISliderFluidInteractionDelegate> {
    UIView *_contentView;
    float _trackingStartNormalizedValue;
    float _trackingTouchStartNormalizedX;
    NSMutableArray *_sliderMarkViews;
    UIBlurEffect *_enabledFilledBarViewEffect;
    UIBlurEffect *_enabledUnfilledBarViewEffect;
    UIBlurEffect *_disabledFilledBarViewEffect;
    UIBlurEffect *_disabledUnfilledBarViewEffect;
    UIPointerInteraction *_sliderPointerInteraction;
    _UISliderFluidConfiguration *_fluidSliderConfiguration;
}

@property (weak, nonatomic) id<AVMobileChromelessFluidSliderDelegate> delegate;
@property (nonatomic) float totalValue;
@property (nonatomic) unsigned long long tintState;
@property (nonatomic) double barHeight;
@property (nonatomic) double barWidth;
@property (nonatomic) BOOL usesVolumeStyle;
@property (nonatomic) BOOL prefersSliderTrackVisualsDisabled;
@property (nonatomic) double stretchLimit;
@property (retain, nonatomic) NSArray *sliderMarks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForSliderMark:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;
- (void)_sliderFluidInteractionWillBegin:(id)a0 withLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)setEnabled:(BOOL)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)setMaximumValueView:(id)a0;
- (void).cxx_destruct;
- (void)_sliderFluidInteractionWillEnd:(id)a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)_sliderFluidInteractionWillContinue:(id)a0 withLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_sliderFluidInteractionWillExtend:(id)a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
