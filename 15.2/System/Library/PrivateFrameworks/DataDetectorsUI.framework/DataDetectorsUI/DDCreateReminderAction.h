@interface DDCreateReminderAction : DDAction

- (id)localizedName;
- (int)interactionType;
- (id)iconName;
- (void)prepareViewControllerForActionController:(id)a0;
- (BOOL)canBePerformedByOpeningURL;

@end
