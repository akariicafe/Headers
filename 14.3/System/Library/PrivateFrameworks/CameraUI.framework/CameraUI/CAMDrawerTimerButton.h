@interface CAMDrawerTimerButton : CAMControlDrawerMenuButton

@property (nonatomic) long long timerDuration;

- (id)imageNameForCurrentState;
- (long long)controlType;
- (BOOL)shouldUseActiveTintForCurrentState;
- (void)didSelectMenuItem:(id)a0;
- (BOOL)isMenuItemSelected:(id)a0;
- (id)loadMenuItems;

@end
