@interface GameCenterUI.SectionBackgroundView : GameCenterUI.BaseCollectionReusableView {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ topSeparator;
    void /* unknown type, empty encoding */ bottomSeparator;
}

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;

@end
