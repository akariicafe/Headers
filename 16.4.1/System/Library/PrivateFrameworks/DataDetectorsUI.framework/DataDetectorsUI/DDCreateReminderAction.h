@interface DDCreateReminderAction : DDAction

+ (BOOL)isAvailable;

- (int)interactionType;
- (id)localizedName;
- (id)iconName;
- (BOOL)canBePerformedByOpeningURL;
- (void)prepareViewControllerForActionController:(id)a0;

@end
