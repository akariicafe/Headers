@class NSString, NSNumberFormatter, SHSRingerControl, ADASManager, SHSAudioPlayback, PSSpecifier;

@interface SHSSoundsPrefController : PSListController <SHSRingerControlDelegate, PSListControllerTestableSpecifiers> {
    BOOL _hasTelephony;
    BOOL _volumeHUDsuppressed;
    PSSpecifier *_voiceMailSpecifier;
    long long _voiceMailSpecifierIndex;
}

@property (retain, nonatomic) ADASManager *audioSettingsManager;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (retain, nonatomic) SHSAudioPlayback *_audioPlayback;
@property (nonatomic, getter=_isVolumeSliderVisible) BOOL _volumeSliderVisible;
@property (retain, nonatomic) SHSRingerControl *_ringerControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)booleanCapabilitiesToTest;

- (void)willResignActive;
- (void)didLock;
- (id)init;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)updateVolume;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)willBecomeActive;
- (void)endInterruption;
- (id)volume:(id)a0;
- (int)_deviceType;
- (void)updateVoiceMailVisibility;
- (void)didBackground;
- (void)willForeground;
- (void)setVolumeHUDsuppression:(BOOL)a0;
- (void)willHideSlider;
- (void)willShowSlider;
- (void)setSystemHapticsEnabled:(id)a0 specifier:(id)a1;
- (id)systemHapticsEnabled:(id)a0;
- (void)startRingtonePreview;
- (id)_volumeSliderCell;
- (void)ringerControlDidObserveEffectiveSystemVolumeChange:(id)a0;
- (void)ringerControl:(id)a0 volumeValueDidChange:(float)a1;
- (void)setSoundEffects:(id)a0 specifier:(id)a1;
- (id)soundEffects:(id)a0;
- (void)setVolume:(id)a0 specifier:(id)a1;
- (id)detailTextForToneWithSpecifier:(id)a0;
- (id)shouldPlayCalendarSound:(id)a0;
- (void)setPlayKeyboardSound:(id)a0 specifier:(id)a1;
- (id)canChangeRingtoneWithButtons:(id)a0;
- (void)setCanChangeRingtoneWithButtons:(id)a0 specifier:(id)a1;
- (id)getHeadphoneLevelLimitSetting;

@end
