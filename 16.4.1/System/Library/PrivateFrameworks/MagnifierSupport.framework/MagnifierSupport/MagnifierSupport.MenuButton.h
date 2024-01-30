@class NSString;

@interface MagnifierSupport.MenuButton : UIControl <_UIClickPresentationInteractionDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_label;
    void /* unknown type, empty encoding */ freezeFrameReviewSubscription;
    void /* unknown type, empty encoding */ menuButtonSubscription;
    void /* unknown type, empty encoding */ clickInteraction;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ $__lazy_storage_$_internalButton;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isExpanded;
    void /* unknown type, empty encoding */ control;
    void /* unknown type, empty encoding */ isDimmed;
    void /* unknown type, empty encoding */ isGlowing;
    void /* unknown type, empty encoding */ cameraMenu;
}

@property (nonatomic) BOOL isAccessibilityElement;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic) struct CGPoint { double x0; double x1; } accessibilityActivationPoint;

- (BOOL)clickPresentationInteractionShouldPresent:(id)a0;
- (id)clickPresentationInteraction:(id)a0 previewForHighlightingAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)clickPresentationInteractionEnded:(id)a0 wasCancelled:(BOOL)a1;
- (BOOL)clickPresentationInteractionShouldBegin:(id)a0;
- (id)clickPresentationInteraction:(id)a0 presentationForPresentingViewController:(id)a1;
- (void)didTap:(id)a0;
- (void)removeFromSuperview;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
