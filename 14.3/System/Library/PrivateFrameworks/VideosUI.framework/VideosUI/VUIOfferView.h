@class VUISeparatorView, VUIMediaTagsView, VUILabel, UIView, VUIOfferLayout;

@interface VUIOfferView : UIView

@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (retain, nonatomic) VUIOfferLayout *layout;
@property (retain, nonatomic) UIView *imageView;
@property (retain, nonatomic) UIView *logoView;
@property (retain, nonatomic) UIView *appIconView;
@property (retain, nonatomic) VUILabel *channelNameLabel;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUILabel *subtitleLabel;
@property (retain, nonatomic) VUILabel *textLabel;
@property (retain, nonatomic) UIView *badgeView;
@property (retain, nonatomic) VUIMediaTagsView *tagsView;
@property (retain, nonatomic) UIView *versionsButton;
@property (retain, nonatomic) UIView *channelImageBackgroundView;
@property (nonatomic) BOOL isEntitled;

- (void).cxx_destruct;
- (void)setSemanticContentAttribute:(long long)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForCellReuse;
- (BOOL)_shouldDisplaySeparator;
- (double)_chinHeightForSize:(struct CGSize { double x0; double x1; })a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1 withAnimationCoordinator:(id)a2;

@end
