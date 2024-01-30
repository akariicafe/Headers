@class IKLockupElement, NSLayoutConstraint, MPUContentSizeLayoutConstraint, UILabel, UIView, VideosExtrasConstrainedArtworkContainerView;

@interface VideosExtrasGridCollectionViewCell : UICollectionViewCell {
    UIView *_spacerView;
    NSLayoutConstraint *_artworkContainerWidthConstraint;
    NSLayoutConstraint *_artworkContainerHeightConstraint;
    MPUContentSizeLayoutConstraint *_topLineHeight;
    MPUContentSizeLayoutConstraint *_subtitleLineHeight;
    NSLayoutConstraint *_spacerHeight;
    NSLayoutConstraint *_spacerTop;
}

@property (readonly, nonatomic) VideosExtrasConstrainedArtworkContainerView *artworkContainer;
@property (weak, nonatomic) IKLockupElement *lockupElement;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)configureForLockup:(id)a0 cellStyle:(id)a1 withSizing:(BOOL)a2;
- (void)configureForLockup:(id)a0 cellStyle:(id)a1;

@end
