@class CKNavbarCanvasViewController;

@interface CKBusinessChatController : CKChatController

@property (retain, nonatomic) CKNavbarCanvasViewController *navbarCanvasViewController;

- (long long)preferredStatusBarStyle;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)_updateNavigationUI;
- (BOOL)shouldListParticipantsInTitle;
- (void)setupBizNavBarIfNecessary;
- (void)cleanUpBizNavBarIfNecessary;
- (void)_handleAddressBookChangedNotification:(id)a0;

@end
