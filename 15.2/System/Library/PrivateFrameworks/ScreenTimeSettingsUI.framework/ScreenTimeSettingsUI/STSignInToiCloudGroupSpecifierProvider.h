@class NSString, PSSpecifier;

@interface STSignInToiCloudGroupSpecifierProvider : STRootGroupSpecifierProvider <AAUISignInControllerDelegate, MCProfileConnectionObserver>

@property (retain, nonatomic) PSSpecifier *signInSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)signInController:(id)a0 didCompleteWithSuccess:(BOOL)a1 error:(id)a2;
- (void)setCoordinator:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)signInControllerDidCancel:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)_updateEnabledValue;
- (void)presentAppleAccountSignInController:(id)a0;

@end
