@class AAUIProfilePictureStore;

@interface VUIAccountSettingsButton : VUIButton

@property (retain, nonatomic) AAUIProfilePictureStore *profilePictureStore;

- (void)layoutSubviews;
- (void)_accountStoreDidChange:(id)a0;
- (void)_setup;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 interfaceStyle:(unsigned long long)a1;
- (void)configureWithLayoutProperties;
- (void)_updateAccessibilityFrame;
- (void)_setupAccountImageView;
- (void)_updateAccountImage;
- (void)_updateAccountButtonVisibility:(BOOL)a0;

@end
