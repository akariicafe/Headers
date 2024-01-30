@interface SeymourUI.ProgramBrickContentView : UIView {
    void /* unknown type, empty encoding */ supportsScrolling;
    void /* unknown type, empty encoding */ isMinFontPreferred;
    void /* unknown type, empty encoding */ bottomStackView;
    void /* unknown type, empty encoding */ bottomTextStackView;
    void /* unknown type, empty encoding */ footnoteLabel;
    void /* unknown type, empty encoding */ modalitiesStackView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ recencyIconView;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ contentLayoutGuide;
    void /* unknown type, empty encoding */ styleProvider;
    void /* unknown type, empty encoding */ currentActivityTypes;
    void /* unknown type, empty encoding */ currentLayout;
    void /* unknown type, empty encoding */ currentContainerSize;
    void /* unknown type, empty encoding */ contentLayoutGuideConstraints;
    void /* unknown type, empty encoding */ oldBounds;
    void /* unknown type, empty encoding */ titleLabelWidthConstraint;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
