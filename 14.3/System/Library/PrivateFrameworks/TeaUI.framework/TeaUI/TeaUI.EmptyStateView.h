@class NSString, NSArray;

@interface TeaUI.EmptyStateView : UIView {
    void /* unknown type, empty encoding */ emptyPosition;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ visualEffectView;
    void /* unknown type, empty encoding */ keyboardObserver;
}

@property (nonatomic) BOOL isAccessibilityElement;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSArray *accessibilityElements;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
