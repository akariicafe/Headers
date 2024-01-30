@class NSString, KeychainSyncPhoneSettingsFragment, UILabel;

@interface KeychainSyncPhoneNumberController : PSKeychainSyncViewController <KeychainSyncPhoneSettingsFragmentDelegate, UIAlertViewDelegate, KeychainSyncViewController> {
    KeychainSyncPhoneSettingsFragment *_phoneSettingsFragment;
    UILabel *_footerLabel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)phoneSettingsFragment:(id)a0 didChangePhoneNumber:(id)a1 countryInfo:(id)a2;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)reloadSpecifiers;
- (void)loadView;
- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)controllerDone;
- (void)nextPressed;

@end
