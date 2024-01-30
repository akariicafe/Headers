@interface CAMDrawerTimerButton : CAMControlDrawerMenuButton

@property (nonatomic) long long timerDuration;

- (long long)controlType;
- (id)imageNameForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (void)didSelectMenuItem:(id)a0;
- (BOOL)isMenuItemSelected:(id)a0;
- (id)loadMenuItems;

@end
