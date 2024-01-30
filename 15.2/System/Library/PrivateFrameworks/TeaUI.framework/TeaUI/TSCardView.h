@class NSString;

@interface TSCardView : UIView <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ onTap;
    void /* unknown type, empty encoding */ onCloseTap;
    void /* unknown type, empty encoding */ expandAccessibilityActionHandler;
    void /* unknown type, empty encoding */ expandAccessibilityAction;
    void /* unknown type, empty encoding */ collapseAccessibilityActionHandler;
    void /* unknown type, empty encoding */ collapseAccessibilityAction;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ clippingView;
    void /* unknown type, empty encoding */ grabberView;
    void /* unknown type, empty encoding */ contentOverlayButtonView;
    void /* unknown type, empty encoding */ barView;
    void /* unknown type, empty encoding */ titleView;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ isFullscreen;
}

@property (nonatomic, copy) NSString *accessibilityLabel;

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)expandCard:(id)a0;
- (BOOL)collapseCard:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)toggleExpansion;

@end
