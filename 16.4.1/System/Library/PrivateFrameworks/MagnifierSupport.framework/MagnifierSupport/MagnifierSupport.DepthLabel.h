@class NSAttributedString;

@interface MagnifierSupport.DepthLabel : UILabel {
    void /* unknown type, empty encoding */ kBottomInset;
    void /* unknown type, empty encoding */ kDigitFont;
    void /* unknown type, empty encoding */ kUnitFont;
    void /* unknown type, empty encoding */ kSpaceFont;
    void /* unknown type, empty encoding */ _textHeight;
    void /* unknown type, empty encoding */ _rightInset;
    void /* unknown type, empty encoding */ _topInset;
    void /* unknown type, empty encoding */ _bottomInset;
}

@property (nonatomic, retain) NSAttributedString *attributedText;

- (id)initWithCoder:(id)a0;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)rotateIfPossibleTo:(long long)a0;

@end
