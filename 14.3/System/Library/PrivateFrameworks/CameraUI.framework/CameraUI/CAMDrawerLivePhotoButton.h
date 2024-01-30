@interface CAMDrawerLivePhotoButton : CAMControlDrawerMenuButton

@property (nonatomic) long long livePhotoMode;

- (id)imageNameForCurrentState;
- (long long)controlType;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseSlash;
- (BOOL)shouldShowSlashForCurrentState;
- (void)setLivePhotoMode:(long long)a0 animated:(BOOL)a1;
- (void)didSelectMenuItem:(id)a0;
- (BOOL)isMenuItemSelected:(id)a0;
- (id)loadMenuItems;

@end
