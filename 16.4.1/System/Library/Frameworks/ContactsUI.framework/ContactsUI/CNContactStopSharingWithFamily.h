@interface CNContactStopSharingWithFamily : CNContactAction

- (BOOL)isDestructive;
- (id)title;
- (BOOL)canPerformAction;
- (BOOL)familySharedContainerExists;
- (void)performActionWithSender:(id)a0;
- (BOOL)wrapTitle;

@end
