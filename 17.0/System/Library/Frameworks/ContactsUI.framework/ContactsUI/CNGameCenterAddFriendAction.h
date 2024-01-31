@interface CNGameCenterAddFriendAction : CNContactAction

- (id)title;
- (id)actionTitleForContact:(id)a0;
- (void)addContactAsFriend:(id)a0;
- (id /* block */)addFriendsMenuProvider;
- (id)contactPerHandleForContact:(id)a0;
- (void)createInviteFriendViewControllerForContact:(id)a0 completionHandler:(id /* block */)a1;
- (void)performActionWithSender:(id)a0;

@end
