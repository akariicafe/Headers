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
@property (nonatomic) double AXBaselineMargin;
@property (nonatomic) double topPartAspectRatio;

- (void)setSemanticContentAttribute:(long long)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (struct CGSize { double x0; double x1; })computeSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutOfferSubviews;
- (BOOL)_shouldDisplaySeparator;
- (double)_chinHeightForSize:(struct CGSize { double x0; double x1; })a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1 withAnimationCoordinator:(id)a2;
- (void)prepareForCellReuse;

@end
