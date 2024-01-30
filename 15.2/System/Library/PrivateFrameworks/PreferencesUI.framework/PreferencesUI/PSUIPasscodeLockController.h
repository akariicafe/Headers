@class NSArray, NSString, HMHomeManager, PSSpecifier, SFAutoUnlockManager;

@interface PSUIPasscodeLockController : PSListController <HMHomeManagerDelegate, SFAutoUnlockManagerDelegate, DevicePINControllerDelegate> {
    int _policyDictatedMaxFailedAttempts;
    PSSpecifier *_voiceDialSpecifier;
    PSSpecifier *_voiceDialGroupSpecifier;
}

@property (nonatomic) BOOL canUnlockWatch;
@property (retain, nonatomic) HMHomeManager *homeManager;
@property (retain, nonatomic) SFAutoUnlockManager *autoUnlockManager;
@property (retain, nonatomic) NSArray *autoUnlockSpecifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)passcodeGracePeriod;

- (id)specifiers;
- (BOOL)canBeShownFromSuspendedState;
- (void)showPINSheet:(id)a0;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (BOOL)isWalletRestricted;
- (BOOL)isPasscodeSet;
- (void)profileNotification:(id)a0;
- (void)manager:(id)a0 failedToEnableDevice:(id)a1 error:(id)a2;
- (void)manager:(id)a0 enablingLockedDevice:(id)a1;
- (void)manager:(id)a0 didEnableDevice:(id)a1;
- (void).cxx_destruct;
- (void)devicePINController:(id)a0 didAcceptSetPIN:(id)a1;
- (void)devicePINController:(id)a0 didAcceptChangedPIN:(id)a1;
- (void)didAcceptRemovePIN;
- (void)devicePINController:(id)a0 shouldAcceptPIN:(id)a1 withCompletion:(id /* block */)a2;
- (void)showWeakWarningAlertForController:(id)a0 offerUseAnyway:(BOOL)a1 withCompletion:(id /* block */)a2;
- (id)init;
- (void)homeManager:(id)a0 didUpdateAccessAllowedWhenLocked:(BOOL)a1;
- (void)suspend;
- (id)autoUnlockEnabled:(id)a0;
- (void)dealloc;
- (id)wallet:(id)a0;
- (BOOL)showReplyWithMessage;
- (void)updateGracePeriodSpecifier;
- (void)updatePhoneAutounlockSection:(BOOL)a0;
- (long long)fingerprintCount;
- (void)_showDeleteSavedFingerprintsAlert;
- (void)presentAppleIDAuthenticationController;
- (void)_updateGracePeriodForSpecifier:(id)a0;
- (void)_localizeGracePeriodTitlesForSpecifier:(id)a0;
- (BOOL)shouldShowVoiceDial;
- (BOOL)isVoiceDialRestricted;
- (void)updateVoiceDialGroup;
- (void)_setWipeEnabled:(BOOL)a0;
- (void)_didUpdatePasscode:(id)a0;
- (void)showKeychainAlert;
- (void)setEnabledInLockScreen:(id)a0 specifier:(id)a1;
- (id)enabledInLockScreen:(id)a0;
- (void)setEnabledInLockScreenForUSB:(id)a0 specifier:(id)a1;
- (id)enabledInLockScreenForUSB:(id)a0;
- (BOOL)isAssistantRestricted;
- (id)_makeWipeDeviceGroupFooter;
- (void)disablePasscodeRequiredSpecifiers:(id)a0;
- (void)updateAutoUnlockSpecifiers;
- (BOOL)isEnrolledInFaceID;
- (void)setAutoUnlockEnabled:(id)a0 specifier:(id)a1;
- (void)showAlertForPhoneAutoUnlockEnablementOfDevice:(id)a0 ofSpecifier:(id)a1;
- (void)enableAutoUnlockForDevice:(id)a0 ofSpecifier:(id)a1;
- (unsigned long long)errorActionWithAutoUnlockError:(id)a0;
- (void)updateAutoUnlockDevicewithDevice:(id)a0;
- (void)presentAutoUnlockEnableFailureAlertWithDevice:(id)a0 withError:(id)a1;
- (void)togglePasscode:(id)a0;
- (id)graceValue:(id)a0;
- (void)setGraceValue:(id)a0 specifier:(id)a1;
- (id)voiceDial:(id)a0;
- (void)setVoiceDial:(id)a0 specifier:(id)a1;
- (id)assistantUnderLockEnabled:(id)a0;
- (void)setAssistantUnderLockEnabled:(id)a0 forSpecifier:(id)a1;
- (id)homeControlAccessAllowedWhenLocked:(id)a0;
- (void)setHomeControlAccessAllowedWhenLocked:(id)a0 specifier:(id)a1;
- (void)setWallet:(id)a0 specifier:(id)a1;
- (id)wipeEnabled:(id)a0;
- (void)setWipeEnabled:(id)a0 specifier:(id)a1;
- (BOOL)useAlternateFooterTextForPAU;

@end
