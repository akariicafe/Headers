@class UIVisualEffect, NSArray, NSString, UIVisualEffectView, UIView, NSMutableArray, UIPointerInteraction;
@protocol AVMobileChromelessSliderDelegate;

@interface AVMobileChromelessSlider : UIControl <UIPointerInteractionDelegate> {
    UIView *_contentView;
    UIVisualEffectView *_filledBarView;
    UIVisualEffectView *_unfilledBarView;
    float _trackingStartNormalizedValue;
    float _trackingTouchStartNormalizedX;
    NSMutableArray *_sliderMarkViews;
    UIVisualEffect *_enabledFilledBarViewEffect;
    UIVisualEffect *_enabledUnfilledBarViewEffect;
    UIVisualEffect *_disabledFilledBarViewEffect;
    UIVisualEffect *_disabledUnfilledBarViewEffect;
    UIPointerInteraction *_sliderPointerInteraction;
}

@property (weak, nonatomic) id<AVMobileChromelessSliderDelegate> delegate;
@property (nonatomic) float value;
@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;
@property (nonatomic) float totalValue;
@property (nonatomic) unsigned long long tintState;
@property (nonatomic) double barHeight;
@property (retain, nonatomic) NSArray *sliderMarks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)cancelTrackingWithEvent:(id)a0;
- (void)_updateAccessibilityValue;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForSliderMark:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;
- (void)setEnabled:(BOOL)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)accessibilityIncrement;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)layoutSubviews;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)didMoveToWindow;
- (void)_updateBarTintStateAlpha;

@end
