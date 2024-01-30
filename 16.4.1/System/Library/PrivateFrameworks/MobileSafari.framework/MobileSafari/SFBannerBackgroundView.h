@interface SFBannerBackgroundView : UIVisualEffectView

@property (nonatomic) long long bannerStyle;

- (void)_updateStyle;
- (id)initWithEffect:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateVibrancy;

@end
