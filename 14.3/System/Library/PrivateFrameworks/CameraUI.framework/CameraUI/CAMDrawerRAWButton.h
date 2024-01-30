@interface CAMDrawerRAWButton : CAMControlDrawerMenuButton

@property (nonatomic, setter=setRAWMode:) long long rawMode;

- (id)imageNameForCurrentState;
- (long long)controlType;
- (BOOL)shouldUseSlash;
- (BOOL)shouldShowSlashForCurrentState;
- (void)setRAWMode:(long long)a0 animated:(BOOL)a1;
- (void)didSelectMenuItem:(id)a0;
- (BOOL)isMenuItemSelected:(id)a0;
- (id)loadMenuItems;

@end
