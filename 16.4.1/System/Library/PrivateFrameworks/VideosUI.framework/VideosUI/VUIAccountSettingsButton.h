@interface VUIAccountSettingsButton : VUIButton

@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) BOOL hideAndDisable;
@property (nonatomic) struct CGSize { double width; double height; } preferedContentSize;

- (void)_accountStoreDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setTintColor:(id)a0;
- (void)_setup;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)vui_traitCollectionDidChange:(id)a0;
- (void)hideAndDisable:(BOOL)a0;
- (void)_profileImageDidChange:(id)a0;
- (void)_setupAccountImageView;
- (void)_updateAccessibilityFrame;
- (void)_updateAccountButtonVisibility;
- (void)_updateAccountImage;
- (void)_updateImageViewFrame;
- (double)accountSettingsButtonDimension;
- (struct CGSize { double x0; double x1; })calculateContentSize;
- (void)configureWithLayoutProperties;
- (id)initWithType:(unsigned long long)a0 interfaceStyle:(unsigned long long)a1;
- (void)setiPhoneSize:(BOOL)a0;

@end
