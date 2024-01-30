@interface MagnifierSupport.SegmentedButton : UIView <_UIClickPresentationInteractionDelegate> {
    void /* unknown type, empty encoding */ isGlowing;
    void /* unknown type, empty encoding */ glowSubscription;
    void /* unknown type, empty encoding */ clickInteraction;
    void /* unknown type, empty encoding */ expandsWithClickInteractionOnly;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_segmentedControl;
    void /* unknown type, empty encoding */ $__lazy_storage_$_internalButton;
    void /* unknown type, empty encoding */ isExpanded;
    void /* unknown type, empty encoding */ control;
    void /* unknown type, empty encoding */ isDimmed;
}

- (id)clickPresentationInteraction:(id)a0 presentationForPresentingViewController:(id)a1;
- (BOOL)clickPresentationInteractionShouldBegin:(id)a0;
- (BOOL)clickPresentationInteractionShouldPresent:(id)a0;
- (void)clickPresentationInteractionEnded:(id)a0 wasCancelled:(BOOL)a1;
- (id)clickPresentationInteraction:(id)a0 previewForHighlightingAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)layoutSubviews;
- (void)didTap:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)removeFromSuperview;
- (void)didSelectSegment:(id)a0;

@end
