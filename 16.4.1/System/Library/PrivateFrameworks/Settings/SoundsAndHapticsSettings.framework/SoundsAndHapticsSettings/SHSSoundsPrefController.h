@class NSString, CoreTelephonyClient, PSSpecifier, NSNumberFormatter, SHSAudioPlayback, SHSRingerControl, ADASManager, PSCloudSyncButton, NSNumber;

@interface SHSSoundsPrefController : PSListController <SHSRingerControlDelegate, CoreTelephonyClientCarrierBundleDelegate, PSCloudSyncDelegate, PSListControllerTestableSpecifiers> {
    BOOL _hasTelephony;
    BOOL _volumeHUDsuppressed;
}

@property (retain, nonatomic) ADASManager *audioSettingsManager;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (retain, nonatomic) SHSAudioPlayback *_audioPlayback;
@property (nonatomic, getter=_isVolumeSliderVisible) BOOL _volumeSliderVisible;
@property (retain, nonatomic) SHSRingerControl *_ringerControl;
@property (retain, nonatomic) CoreTelephonyClient *_client;
@property (retain, nonatomic) PSSpecifier *_voiceMailSpecifier;
@property (nonatomic) long long _voiceMailSpecifierIndex;
@property (retain, nonatomic) NSNumber *_cachedShouldHideValue;
@property (readonly, nonatomic) BOOL _isKeyHapticsSupported;
@property (retain, nonatomic) PSCloudSyncButton *cloudSyncButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)booleanCapabilitiesToTest;

- (void)carrierBundleChange:(id)a0;
- (void)willBecomeActive;
- (void)willResignActive;
- (int)_deviceType;
- (void)updateVolume;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (id)specifiers;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)setCloudSyncEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)didLock;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (void)endInterruption;
- (BOOL)hasMergeConflict;
- (void)isCloudSyncEnabled:(id /* block */)a0;
- (void)resolveMergeConflict:(unsigned long long)a0;
- (id)detailTextForToneWithSpecifier:(id)a0;
- (void)refreshShouldHideAllVoicemailUI;
- (void)setPlayKeyboardSound:(id)a0 specifier:(id)a1;
- (id)volume:(id)a0;
- (id)_keyboardClicksTitle:(id)a0;
- (id)_keyboardFeedbackSpecifier;
- (id)_volumeSliderCell;
- (id)canChangeRingtoneWithButtons:(id)a0;
- (void)didBackground;
- (id)getHeadphoneLevelLimitSetting;
- (void)ringerControl:(id)a0 volumeValueDidChange:(float)a1;
- (void)ringerControlDidObserveEffectiveSystemVolumeChange:(id)a0;
- (void)setCanChangeRingtoneWithButtons:(id)a0 specifier:(id)a1;
- (void)setPlayLockSound:(id)a0 specifier:(id)a1;
- (void)setSoundEffects:(id)a0 specifier:(id)a1;
- (void)setSystemHapticsEnabled:(id)a0 specifier:(id)a1;
- (void)setVibrateWithRingMode:(id)a0 specifier:(id)a1;
- (void)setVibrateWithSilentMode:(id)a0 specifier:(id)a1;
- (void)setVolume:(id)a0 specifier:(id)a1;
- (void)setVolumeHUDsuppression:(BOOL)a0;
- (id)soundEffects:(id)a0;
- (void)startRingtonePreview;
- (id)systemHapticsEnabled:(id)a0;
- (void)updateVoiceMailVisibility;
- (BOOL)vibrateWithRingMode;
- (BOOL)vibrateWithSilentMode;
- (void)willForeground;
- (void)willHideSlider;
- (void)willShowSlider;

@end
