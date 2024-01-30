@class NSLayoutConstraint, IKListItemLockupElement, NSArray, MPUContentSizeLayoutConstraint, UIView, UILabel, VideosExtrasConstrainedArtworkContainerView;

@interface VideosExtrasTableViewCell : UITableViewCell {
    UIView *_textContainerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSLayoutConstraint *_minimumHeightConstraint;
    NSArray *_topConstraints;
    NSArray *_bottomConstraints;
    NSLayoutConstraint *_leadingViewConstraint;
    NSLayoutConstraint *_artworkSpacerHeightConstraint;
    NSLayoutConstraint *_textSpacerHeightConstraint;
    NSLayoutConstraint *_artworkWidthConstraint;
    NSLayoutConstraint *_artworkHeightConstraint;
    NSLayoutConstraint *_textLeadingConstraint;
    NSLayoutConstraint *_textTrailingConstraint;
    NSLayoutConstraint *_topLabelConstraint;
    MPUContentSizeLayoutConstraint *_subtitleBaselineConstraint;
    NSLayoutConstraint *_bottomLabelConstraint;
}

@property (nonatomic) IKListItemLockupElement *element;
@property (readonly, nonatomic) VideosExtrasConstrainedArtworkContainerView *artworkContainerView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)configureForListItemLockupElement:(id)a0 wide:(BOOL)a1;

@end
