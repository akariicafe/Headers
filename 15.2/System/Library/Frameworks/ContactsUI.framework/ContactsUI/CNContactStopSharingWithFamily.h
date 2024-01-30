@interface CNContactStopSharingWithFamily : CNContactAction

- (BOOL)isDestructive;
- (BOOL)canPerformAction;
- (id)title;
- (void)performActionWithSender:(id)a0;
- (BOOL)familySharedContainerExists;
- (BOOL)wrapTitle;

@end
