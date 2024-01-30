@interface CAMDrawerTimerButton : CAMControlDrawerMenuButton

@property (nonatomic) long long timerDuration;

- (id)imageNameForCurrentState;
- (long long)controlType;
- (void)didSelectMenuItem:(id)a0;
- (BOOL)isMenuItemSelected:(id)a0;
- (id)loadMenuItems;
- (BOOL)shouldUseActiveTintForCurrentState;

@end
