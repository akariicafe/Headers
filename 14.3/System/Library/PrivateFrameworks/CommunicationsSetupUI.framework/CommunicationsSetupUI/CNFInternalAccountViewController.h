@class IMAccount, FTRegConnectionHandler;

@interface CNFInternalAccountViewController : PSListController {
    FTRegConnectionHandler *_connectionHandler;
}

@property (retain, nonatomic) IMAccount *account;

- (void)_stopListeningForNotifications;
- (void).cxx_destruct;
- (id)bundle;
- (void)viewWillDisappear:(BOOL)a0;
- (id)specifiers;
- (void)_startListeningForNotifications;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithAccount:(id)a0;
- (void)_handleDaemonConnected:(id)a0;
- (void)_handleDaemonDisconnected:(id)a0;
- (id)statusForAlias:(id)a0;
- (BOOL)isConnectedToDaemon;
- (id)specifierForAlias:(id)a0;
- (void)_handleAccountNotification:(id)a0;
- (id)accountLoginStatus:(id)a0;
- (id)registrationStatus:(id)a0;
- (id)accountLogin:(id)a0;
- (id)accountType:(id)a0;
- (id)accountDisplayName:(id)a0;
- (id)registrationFailureReason:(id)a0;
- (id)accountIsActive:(id)a0;

@end
