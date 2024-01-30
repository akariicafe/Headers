@class CKNavbarCanvasViewController;

@interface CKBusinessChatController : CKChatController

@property (retain, nonatomic) CKNavbarCanvasViewController *navbarCanvasViewController;

- (long long)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)setupBizNavBarIfNecessary;
- (void)cleanUpBizNavBarIfNecessary;
- (BOOL)shouldListParticipantsInTitle;
- (void)_updateNavigationUI;
- (BOOL)canShowBusinessOnboarding;
- (void).cxx_destruct;
- (void)_handleAddressBookChangedNotification:(id)a0;

@end
