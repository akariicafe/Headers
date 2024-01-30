@interface CNContactStopSharingWithFamily : CNContactAction

- (BOOL)isDestructive;
- (BOOL)wrapTitle;
- (BOOL)canPerformAction;
- (void)performActionWithSender:(id)a0;
- (BOOL)familySharedContainerExists;
- (id)title;

@end
