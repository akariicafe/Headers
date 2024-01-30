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

- (void)showPINSheet:(id)a0;
- (BOOL)isPasscodeSet;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (BOOL)isWalletRestricted;
- (id)autoUnlockEnabled:(id)a0;
- (void)profileNotification:(id)a0;
- (void)suspend;
- (void)dealloc;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (void)homeManager:(id)a0 didUpdateAccessAllowedWhenLocked:(BOOL)a1;
- (BOOL)canBeShownFromSuspendedState;
- (void)devicePINController:(id)a0 didAcceptChangedPIN:(id)a1;
- (void)devicePINController:(id)a0 didAcceptSetPIN:(id)a1;
- (void)devicePINController:(id)a0 shouldAcceptPIN:(id)a1 withCompletion:(id /* block */)a2;
- (void)didAcceptRemovePIN;
- (void)showWeakWarningAlertForController:(id)a0 offerUseAnyway:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)manager:(id)a0 didEnableDevice:(id)a1;
- (void)manager:(id)a0 enablingLockedDevice:(id)a1;
- (void)manager:(id)a0 failedToEnableDevice:(id)a1 error:(id)a2;
- (BOOL)showReplyWithMessage;
- (void)togglePasscode:(id)a0;
- (void)_updateGracePeriodForSpecifier:(id)a0;
- (unsigned long long)errorActionWithAutoUnlockError:(id)a0;
- (void)setAutoUnlockEnabled:(id)a0 specifier:(id)a1;
- (id)wallet:(id)a0;
- (void)_didUpdatePasscode:(id)a0;
- (void)_localizeGracePeriodTitlesForSpecifier:(id)a0;
- (id)_makeWipeDeviceGroupFooter;
- (void)_setWipeEnabled:(BOOL)a0;
- (void)_showDeleteSavedFingerprintsAlert;
- (id)assistantUnderLockEnabled:(id)a0;
- (void)disablePasscodeRequiredSpecifiers:(id)a0;
- (void)enableAutoUnlockForDevice:(id)a0 ofSpecifier:(id)a1;
- (id)enabledInLockScreen:(id)a0;
- (id)enabledInLockScreenForUSB:(id)a0;
- (long long)fingerprintCount;
- (id)graceValue:(id)a0;
- (id)homeControlAccessAllowedWhenLocked:(id)a0;
- (BOOL)isAssistantRestricted;
- (BOOL)isEnrolledInFaceID;
- (BOOL)isVoiceDialRestricted;
- (void)presentAppleIDAuthenticationController;
- (void)presentAutoUnlockEnableFailureAlertWithDevice:(id)a0 withError:(id)a1;
- (void)setAssistantUnderLockEnabled:(id)a0 forSpecifier:(id)a1;
- (void)setEnabledInLockScreen:(id)a0 specifier:(id)a1;
- (void)setEnabledInLockScreenForUSB:(id)a0 specifier:(id)a1;
- (void)setGraceValue:(id)a0 specifier:(id)a1;
- (void)setHomeControlAccessAllowedWhenLocked:(id)a0 specifier:(id)a1;
- (void)setVoiceDial:(id)a0 specifier:(id)a1;
- (void)setWallet:(id)a0 specifier:(id)a1;
- (void)setWipeEnabled:(id)a0 specifier:(id)a1;
- (BOOL)shouldShowVoiceDial;
- (void)showAlertForPhoneAutoUnlockEnablementOfDevice:(id)a0 ofSpecifier:(id)a1;
- (void)showKeychainAlert;
- (void)updateAutoUnlockDevicewithDevice:(id)a0;
- (void)updateAutoUnlockSpecifiers;
- (void)updateGracePeriodSpecifier;
- (void)updatePhoneAutounlockSection:(BOOL)a0;
- (void)updateVoiceDialGroup;
- (BOOL)useAlternateFooterTextForPAU;
- (id)voiceDial:(id)a0;
- (id)wipeEnabled:(id)a0;

@end
