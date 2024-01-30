@class NSString, KeychainSyncPhoneSettingsFragment, UILabel;

@interface KeychainSyncPhoneNumberController : PSKeychainSyncViewController <KeychainSyncPhoneSettingsFragmentDelegate, UIAlertViewDelegate, KeychainSyncViewController> {
    KeychainSyncPhoneSettingsFragment *_phoneSettingsFragment;
    UILabel *_footerLabel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)nextPressed;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)controllerDone;
- (void)reloadSpecifiers;
- (void)viewDidAppear:(BOOL)a0;
- (void)phoneSettingsFragment:(id)a0 didChangePhoneNumber:(id)a1 countryInfo:(id)a2;

@end
