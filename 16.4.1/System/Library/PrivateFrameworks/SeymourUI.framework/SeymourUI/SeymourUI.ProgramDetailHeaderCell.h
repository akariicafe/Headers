@interface SeymourUI.ProgramDetailHeaderCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isMinFontPreferred;
    void /* unknown type, empty encoding */ itemInfo;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ contentLayoutGuide;
    void /* unknown type, empty encoding */ vibrantShadowView;
    void /* unknown type, empty encoding */ textContainer;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ previewButtonPlatter;
    void /* unknown type, empty encoding */ previewButton;
    void /* unknown type, empty encoding */ contentLayoutGuideLeftConstraint;
    void /* unknown type, empty encoding */ contentLayoutGuideWidthConstraint;
    void /* unknown type, empty encoding */ currentContainerSize;
    void /* unknown type, empty encoding */ currentLayout;
    void /* unknown type, empty encoding */ oldWidth;
    void /* unknown type, empty encoding */ previewButtonRightConstraint;
    void /* unknown type, empty encoding */ previewButtonWidthConstraint;
}

- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)playButtonTapped:(id)a0;

@end
