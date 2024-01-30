@class NSString, CoreTelephonyClient, PSSpecifier, NSNumberFormatter, SHSAudioPlayback, SHSRingerControl, ADASManager, NSNumber;

@interface SHSSoundsPrefController : PSListController <SHSRingerControlDelegate, CoreTelephonyClientCarrierBundleDelegate, PSListControllerTestableSpecifiers> {
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)booleanCapabilitiesToTest;

- (void)carrierBundleChange:(id)a0;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)willResignActive;
- (void)didLock;
- (void)viewWillAppear:(BOOL)a0;
- (void)updateVolume;
- (void)viewWillDisappear:(BOOL)a0;
- (void)endInterruption;
- (void)willBecomeActive;
- (void).cxx_destruct;
- (id)init;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (int)_deviceType;
- (void)dealloc;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (void)didBackground;
- (void)willForeground;
- (void)setVolumeHUDsuppression:(BOOL)a0;
- (void)willHideSlider;
- (void)willShowSlider;
- (void)refreshShouldHideAllVoicemailUI;
- (void)setSystemHapticsEnabled:(id)a0 specifier:(id)a1;
- (id)systemHapticsEnabled:(id)a0;
- (void)startRingtonePreview;
- (id)_volumeSliderCell;
- (void)ringerControlDidObserveEffectiveSystemVolumeChange:(id)a0;
- (void)ringerControl:(id)a0 volumeValueDidChange:(float)a1;
- (void)updateVoiceMailVisibility;
- (void)setSoundEffects:(id)a0 specifier:(id)a1;
- (id)soundEffects:(id)a0;
- (id)volume:(id)a0;
- (void)setVolume:(id)a0 specifier:(id)a1;
- (id)detailTextForToneWithSpecifier:(id)a0;
- (void)setPlayKeyboardSound:(id)a0 specifier:(id)a1;
- (id)canChangeRingtoneWithButtons:(id)a0;
- (void)setCanChangeRingtoneWithButtons:(id)a0 specifier:(id)a1;
- (id)getHeadphoneLevelLimitSetting;

@end
