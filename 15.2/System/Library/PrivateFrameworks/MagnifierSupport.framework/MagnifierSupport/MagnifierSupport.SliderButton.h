@class NSString;

@interface MagnifierSupport.SliderButton : UIView <UIGestureRecognizerDelegate, _UIClickPresentationInteractionDelegate> {
    void /* unknown type, empty encoding */ isGlowing;
    void /* unknown type, empty encoding */ glowSubscription;
    void /* unknown type, empty encoding */ freezeFrameReviewSubscription;
    void /* unknown type, empty encoding */ clickInteraction;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_internalButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_slider;
    void /* unknown type, empty encoding */ isExpanded;
    void /* unknown type, empty encoding */ control;
    void /* unknown type, empty encoding */ isDimmed;
}

@property (nonatomic) BOOL isAccessibilityElement;
@property (nonatomic, copy) NSString *accessibilityIdentifier;

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)clickPresentationInteraction:(id)a0 presentationForPresentingViewController:(id)a1;
- (void)layoutSubviews;
- (void)didTap:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)clickPresentationInteractionShouldBegin:(id)a0;
- (void).cxx_destruct;
- (BOOL)clickPresentationInteractionShouldPresent:(id)a0;
- (void)clickPresentationInteractionEnded:(id)a0 wasCancelled:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (id)clickPresentationInteraction:(id)a0 previewForHighlightingAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)removeFromSuperview;

@end
