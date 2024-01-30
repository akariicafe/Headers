@interface CAMDrawerRAWButton : CAMControlDrawerMenuButton

@property (nonatomic, setter=setRAWMode:) long long rawMode;

- (long long)controlType;
- (id)imageNameForCurrentState;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseSlash;
- (id)imageNameForAXHUD;
- (void)setRAWMode:(long long)a0 animated:(BOOL)a1;
- (void)didSelectMenuItem:(id)a0;
- (BOOL)isMenuItemSelected:(id)a0;
- (id)loadMenuItems;

@end
