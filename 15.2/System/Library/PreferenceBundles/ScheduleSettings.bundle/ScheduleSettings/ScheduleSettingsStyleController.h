@class NSString, NSArray, NSMutableSet, ACAccount;

@interface ScheduleSettingsStyleController : PSListItemsController {
    ACAccount *_account;
    NSString *_mailAccountUniqueId;
    NSArray *_mailboxInfos;
    NSMutableSet *_monitored;
    BOOL _supportsUserPushedMailboxes;
    BOOL _isExchangeAccount;
    BOOL _ignoringNotifications;
}

- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)listItemSelected:(id)a0;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_accountsChanged;
- (id)notAvailableText;
- (BOOL)shouldShowMailboxes;
- (void)reloadFolders;
- (void)_reloadFoldersAndSpecifiersForced:(BOOL)a0;
- (void)_reloadFoldersAndSpecifiers;
- (void)setPushStateForMailbox:(id)a0 state:(BOOL)a1;

@end
