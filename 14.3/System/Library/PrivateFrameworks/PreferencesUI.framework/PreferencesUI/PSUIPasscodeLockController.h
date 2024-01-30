@class NSString, HMHomeManager, PSSpecifier;

@interface PSUIPasscodeLockController : PSListController <HMHomeManagerDelegate, DevicePINControllerDelegate> {
    int _policyDictatedMaxFailedAttempts;
    PSSpecifier *_voiceDialSpecifier;
    PSSpecifier *_voiceDialGroupSpecifier;
}

@property (nonatomic) BOOL canUnlockWatch;
@property (retain, nonatomic) HMHomeManager *homeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)passcodeGracePeriod;

- (BOOL)isPasscodeSet;
- (id)init;
- (BOOL)canBeShownFromSuspendedState;
- (void).cxx_destruct;
- (void)homeManager:(id)a0 didUpdateAccessAllowedWhenLocked:(BOOL)a1;
- (void)dealloc;
- (void)showPINSheet:(id)a0;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (id)specifiers;
- (void)profileNotification:(id)a0;
- (void)devicePINController:(id)a0 didAcceptSetPIN:(id)a1;
- (void)devicePINController:(id)a0 didAcceptChangedPIN:(id)a1;
- (void)didAcceptRemovePIN;
- (void)devicePINController:(id)a0 shouldAcceptPIN:(id)a1 withCompletion:(id /* block */)a2;
- (void)showWeakWarningAlertForController:(id)a0 offerUseAnyway:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)suspend;
- (id)wallet:(id)a0;
- (BOOL)isWalletRestricted;
- (BOOL)showReplyWithMessage;
- (void)updateGracePeriodSpecifier;
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

@end
