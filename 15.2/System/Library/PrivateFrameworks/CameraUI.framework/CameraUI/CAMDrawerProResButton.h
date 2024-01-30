@interface CAMDrawerProResButton : CAMControlDrawerMenuButton

@property (nonatomic, setter=setProResVideoMode:) long long proResVideoMode;

- (long long)controlType;
- (id)imageNameForCurrentState;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseSlash;
- (id)imageNameForAXHUD;
- (void)setProResVideoMode:(long long)a0 animated:(BOOL)a1;
- (void)didSelectMenuItem:(id)a0;
- (BOOL)isMenuItemSelected:(id)a0;
- (id)loadMenuItems;

@end
