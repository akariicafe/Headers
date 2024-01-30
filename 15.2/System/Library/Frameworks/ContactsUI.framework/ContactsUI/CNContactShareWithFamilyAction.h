@interface CNContactShareWithFamilyAction : CNContactAction

- (BOOL)isDestructive;
- (BOOL)canPerformAction;
- (id)title;
- (void)performActionWithSender:(id)a0;
- (BOOL)familySharedContainerExists;

@end
