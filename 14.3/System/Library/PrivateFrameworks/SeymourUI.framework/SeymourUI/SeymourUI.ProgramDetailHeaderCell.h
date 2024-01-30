@interface SeymourUI.ProgramDetailHeaderCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ itemInfo;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ vibrantShadowView;
    void /* unknown type, empty encoding */ textContainer;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ previewButtonPlatter;
    void /* unknown type, empty encoding */ previewButton;
    void /* unknown type, empty encoding */ leadingConstraints;
    void /* unknown type, empty encoding */ trailingConstraints;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)playButtonTapped:(id)a0;

@end
