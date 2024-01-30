@interface CAMDrawerFlashButton : CAMControlDrawerMenuButton

@property (nonatomic, getter=isFlashUnavailable) BOOL flashUnavailable;
@property (nonatomic) long long flashMode;

- (BOOL)isExpandable;
- (id)imageNameForCurrentState;
- (long long)controlType;
- (void)didSelectMenuItem:(id)a0;
- (id)imageNameForAXHUD;
- (BOOL)isMenuItemSelected:(id)a0;
- (id)loadMenuItems;
- (void)setFlashMode:(long long)a0 animated:(BOOL)a1;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseSlash;

@end
