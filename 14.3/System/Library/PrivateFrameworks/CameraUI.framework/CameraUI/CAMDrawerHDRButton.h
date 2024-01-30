@interface CAMDrawerHDRButton : CAMControlDrawerMenuButton

@property (nonatomic) BOOL allowAutoHDR;
@property (nonatomic) BOOL allowHDROn;
@property (nonatomic, setter=setHDRMode:) long long hdrMode;

- (id)imageNameForCurrentState;
- (long long)controlType;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseSlash;
- (BOOL)shouldShowSlashForCurrentState;
- (void)setHDRMode:(long long)a0 animated:(BOOL)a1;
- (void)didSelectMenuItem:(id)a0;
- (BOOL)isMenuItemSelected:(id)a0;
- (id)loadMenuItems;

@end
