@class NSString, PSSpecifier, FLFollowUpActionHandler, MBManager, PSGResetPrefChildViewController;

@interface PSGTransferOrResetController : PSListController <MBManagerDelegate, SBSHardwareButtonEventConsuming, CoreTelephonyClientCarrierBundleDelegate> {
    BOOL _shouldEraseCellularPlans;
    NSString *_passcode;
    MBManager *_backupManager;
    PSGResetPrefChildViewController *_resetPrefListController;
    PSSpecifier *_preBuddyGroupSpecifier;
}

@property (retain) FLFollowUpActionHandler *prebuddyActionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (void)didAcceptEnteredPIN:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (id)init;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)presentExitBuddyWithUpsellTradeIn:(BOOL)a0;
- (void)deviceFullErase:(id)a0;
- (void)beginPrebuddy:(id)a0;

@end
