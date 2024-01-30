@class AAUIProfilePictureStore;

@interface VUILegacyAccountSettingsButton : VUILegacyButton

@property (retain, nonatomic) AAUIProfilePictureStore *profilePictureStore;

- (void)_accountStoreDidChange:(id)a0;
- (void)_setup;
- (void).cxx_destruct;
- (void)_setupAccountImageView;
- (void)_updateAccountImage;
- (void)_updateAccountButtonVisibility:(BOOL)a0;
- (id)initWithButtonLayout:(id)a0 interfaceStyle:(long long)a1;

@end
