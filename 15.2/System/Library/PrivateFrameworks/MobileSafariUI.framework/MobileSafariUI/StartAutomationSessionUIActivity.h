@interface StartAutomationSessionUIActivity : _SFActivity

- (id)activityType;
- (id)activityImage;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;
- (id)_automationController;

@end
