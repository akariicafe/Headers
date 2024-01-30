@interface CNContactShareWithFamilyAction : CNContactAction

- (BOOL)isDestructive;
- (BOOL)canPerformAction;
- (void)performActionWithSender:(id)a0;
- (BOOL)familySharedContainerExists;
- (id)title;

@end
