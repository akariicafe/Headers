@interface MagnifierSupport.MFInformationLabel : MagnifierSupport.MFInsetLabel {
    void /* unknown type, empty encoding */ constraintAboveCard;
    void /* unknown type, empty encoding */ constraintBelowCard;
    void /* unknown type, empty encoding */ centerConstraintX;
    void /* unknown type, empty encoding */ centerConstraintY;
}

- (void)setNeedsLayout;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void).cxx_destruct;

@end
