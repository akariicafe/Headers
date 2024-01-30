@class UIColor;

@interface SeymourUI.RoundedButton : UIButton {
    void /* unknown type, empty encoding */ currentState;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ indefiniteSpinner;
    void /* unknown type, empty encoding */ defaults;
    void /* unknown type, empty encoding */ highlightTimer;
    void /* unknown type, empty encoding */ lastFont;
    void /* unknown type, empty encoding */ lastSymbolScale;
    void /* unknown type, empty encoding */ shouldShowHighlight;
    void /* unknown type, empty encoding */ undimmedBackgroundColor;
    void /* unknown type, empty encoding */ defaultContentInsets;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) BOOL highlighted;

- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (BOOL)isHighlighted;
- (void)setAttributedTitle:(id)a0 forState:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)handleTouchUp:(id)a0;
- (void)handleTimer:(id)a0;
- (void)handleTouchDown:(id)a0;
- (void)textSizeChanged:(id)a0;

@end
