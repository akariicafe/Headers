@interface DDCreateReminderAction : DDAction

- (id)icon;
- (id)localizedName;
- (int)interactionType;
- (void)prepareViewControllerForActionController:(id)a0;
- (BOOL)canBePerformedByOpeningURL;

@end
