@class UIStackView, UIView, VibrantLabelView, UIImageView, UIButton, _SFSiteIconView, NSLayoutConstraint, WBSForYouLinkRecommendation;
@protocol SiriSuggestionsCollectionViewCellDelegate;

@interface SiriSuggestionsCollectionViewCell : UICollectionViewCell {
    VibrantLabelView *_titleLabel;
    VibrantLabelView *_addressLabel;
    VibrantLabelView *_footnoteLabel;
    UIImageView *_contactImageView;
    UIView *_labelContainerView;
    UIStackView *_contentStackView;
    WBSForYouLinkRecommendation *_linkRecommendation;
    NSLayoutConstraint *_buttonWidthConstraint;
    UIButton *_actionButton;
    UIImageView *_badgeView;
    NSLayoutConstraint *_actionButtonTrailingConstraint;
    BOOL _usesVibrantEffect;
    BOOL _isEditing;
    _SFSiteIconView *_iconView;
    UIView *_cardView;
    id<SiriSuggestionsCollectionViewCellDelegate> _delegate;
}

- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_didSelectActionButton:(id)a0;

@end
