@interface Heart.CardioFitnessOnboardingAboutContentView : UIView {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ leadingCaption;
    void /* unknown type, empty encoding */ trailingCaption;
    void /* unknown type, empty encoding */ diagram;
    void /* unknown type, empty encoding */ footer;
    void /* unknown type, empty encoding */ attribution;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;

@end
