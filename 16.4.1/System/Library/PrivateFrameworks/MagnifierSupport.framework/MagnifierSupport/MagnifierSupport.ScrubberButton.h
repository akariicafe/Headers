@class NSString;

@interface MagnifierSupport.ScrubberButton : UIView <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_internalButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrubber;
    void /* unknown type, empty encoding */ control;
    void /* unknown type, empty encoding */ isExpanded;
    void /* unknown type, empty encoding */ isGlowing;
    void /* unknown type, empty encoding */ isDimmed;
    void /* unknown type, empty encoding */ glowSubscription;
    void /* unknown type, empty encoding */ freezeFrameReviewSubscription;
}

@property (nonatomic) BOOL isAccessibilityElement;
@property (nonatomic, copy) NSString *accessibilityIdentifier;

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)didTap:(id)a0;
- (void)removeFromSuperview;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
