@interface MagnifierSupport.MFInsetLabel : UILabel {
    void /* unknown type, empty encoding */ topInset;
    void /* unknown type, empty encoding */ leftInset;
    void /* unknown type, empty encoding */ bottomInset;
    void /* unknown type, empty encoding */ rightInset;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
