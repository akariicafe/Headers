@interface CAMDrawerFlashButton : CAMControlDrawerMenuButton

@property (nonatomic, getter=isFlashUnavailable) BOOL flashUnavailable;
@property (nonatomic) long long flashMode;

- (BOOL)isExpandable;
- (long long)controlType;
- (id)imageNameForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseSlash;
- (id)imageNameForAXHUD;
- (void)setFlashMode:(long long)a0 animated:(BOOL)a1;
- (void)didSelectMenuItem:(id)a0;
- (BOOL)isMenuItemSelected:(id)a0;
- (id)loadMenuItems;

@end
