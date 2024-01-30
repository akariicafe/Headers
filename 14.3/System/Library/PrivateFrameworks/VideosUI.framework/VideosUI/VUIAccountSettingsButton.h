@class AAUIProfilePictureStore;

@interface VUIAccountSettingsButton : VUIButton

@property (retain, nonatomic) AAUIProfilePictureStore *profilePictureStore;

- (void)_accountStoreDidChange:(id)a0;
- (void)_setup;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithType:(unsigned long long)a0 interfaceStyle:(long long)a1;
- (void)configureWithLayoutProperties;
- (void)_setupAccountImageView;
- (void)_updateAccountImage;
- (void)_updateAccountButtonVisibility:(BOOL)a0;
- (void)_updateAccessibilityFrame;

@end
