@class UIView, VUILabel, VUISeparatorView;

@interface VUIOfferView : VUIBaseView

@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (retain, nonatomic) UIView *imageView;
@property (retain, nonatomic) UIView *logoView;
@property (retain, nonatomic) UIView *appIconView;
@property (retain, nonatomic) VUILabel *channelNameLabel;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUILabel *subtitleLabel;
@property (retain, nonatomic) VUILabel *textLabel;
@property (retain, nonatomic) UIView *versionsButton;
@property (retain, nonatomic) UIView *channelImageBackgroundView;
@property (nonatomic) BOOL isEntitled;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) double topPartAspectRatio;
@property (nonatomic) double secondLineBaselineMargin;

- (void)setSemanticContentAttribute:(long long)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1 withAnimationCoordinator:(id)a2;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (double)_chinHeightForSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_shouldDisplaySeparator;
- (struct CGSize { double x0; double x1; })computeSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutOfferSubviewsWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForCellReuse;

@end
