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

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)listItemSelected:(id)a0;
- (void)_accountsChanged;
- (void)_reloadFoldersAndSpecifiers;
- (void)_reloadFoldersAndSpecifiersForced:(BOOL)a0;
- (id)notAvailableText;
- (void)reloadFolders;
- (void)setPushStateForMailbox:(id)a0 state:(BOOL)a1;
- (BOOL)shouldShowMailboxes;

@end
