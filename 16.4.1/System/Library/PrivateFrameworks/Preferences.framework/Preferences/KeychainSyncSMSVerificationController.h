@class NSString, PSKeychainSyncManager, UIButton;

@interface KeychainSyncSMSVerificationController : PSKeychainSyncTextEntryController <UIAlertViewDelegate> {
    UIButton *_footerButton;
}

@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *dialingPrefix;
@property (retain, nonatomic) NSString *countryCode;
@property (weak, nonatomic) PSKeychainSyncManager *keychainSyncManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)dismissAlerts;
- (void)showSupportVerification;

@end
