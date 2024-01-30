@class UIImageView, HUGridWelcomeUIBannerCellLayoutOptions, HUGridStatusBannerCellLayoutOptions;

@interface HUWelcomeUIBannerCell : HUBannerCell {
    HUGridStatusBannerCellLayoutOptions *_layoutOptions;
}

@property (retain, nonatomic) HUGridWelcomeUIBannerCellLayoutOptions *welcomeUIBannerLayoutOptions;
@property (retain, nonatomic) UIImageView *backgroundImageView;

- (id)layoutOptions;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)setLayoutOptions:(id)a0;
- (void)layoutOptionsDidChange;
- (void)setupCustomCellAppearence;
- (void)setBackgroundColor;

@end
