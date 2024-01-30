@class IMServiceImpl, FTRegConnectionHandler;

@interface CNFInternalAccountListViewController : PSListController {
    FTRegConnectionHandler *_connectionHandler;
}

@property (retain, nonatomic) IMServiceImpl *service;

- (id)initWithServiceType:(long long)a0;
- (void)_stopListeningForNotifications;
- (void)viewWillDisappear:(BOOL)a0;
- (id)specifiers;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_handleDaemonConnected:(id)a0;
- (void)_handleDaemonDisconnected:(id)a0;
- (void)_startListeningForNotifications;
- (void)_handleAccountNotification:(id)a0;
- (id)accountNameForSpecifier:(id)a0;
- (void)accountTappedWithSpecifier:(id)a0;

@end
