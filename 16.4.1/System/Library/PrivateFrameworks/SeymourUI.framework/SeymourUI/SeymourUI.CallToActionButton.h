@interface SeymourUI.CallToActionButton : UIButton {
    void /* unknown type, empty encoding */ currentState;
    void /* unknown type, empty encoding */ indefiniteSpinner;
    void /* unknown type, empty encoding */ defaults;
    void /* unknown type, empty encoding */ layout;
}

@property (nonatomic) BOOL highlighted;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (BOOL)isHighlighted;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;
- (void).cxx_destruct;

@end
