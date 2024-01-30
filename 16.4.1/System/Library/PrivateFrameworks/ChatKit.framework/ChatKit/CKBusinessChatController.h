@class CKNavbarCanvasViewController;

@interface CKBusinessChatController : CKChatController

@property (retain, nonatomic) CKNavbarCanvasViewController *navbarCanvasViewController;

- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)_handleAddressBookChangedNotification:(id)a0;
- (void)_updateNavigationUI;
- (BOOL)canShowBusinessOnboarding;
- (void)cleanUpBizNavBarIfNecessary;
- (void)setupBizNavBarIfNecessary;
- (BOOL)shouldListParticipantsInTitle;

@end
