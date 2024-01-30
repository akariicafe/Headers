@class NSString, AVSystemController;
@protocol MPVolumeControllerDataSourceDelegate;

@interface MPVolumeControllerSystemDataSource : NSObject <MPVolumeControllerDataSource> {
    BOOL _debugVolumeWarning;
    BOOL _volumeInitialized;
    BOOL _volumeControlCapabilitiesInitialized;
    AVSystemController *_avSystemController;
}

@property (copy, nonatomic) NSString *volumeAudioCategory;
@property (weak, nonatomic) id<MPVolumeControllerDataSourceDelegate> delegate;
@property (readonly, nonatomic) BOOL applicationShouldOverrideHardwareVolumeBehavior;
@property (readonly, copy, nonatomic) NSString *volumeControlLabel;
@property (readonly, nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable;
@property (nonatomic) float volume;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (readonly, nonatomic) BOOL volumeWarningEnabled;
@property (readonly, nonatomic) long long volumeWarningState;
@property (readonly, nonatomic) float EUVolumeLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_routeDidChangeNotification:(id)a0;
- (void)_tearDown;
- (void)reload;
- (void)_setup;
- (id)_reloadQueue;
- (void)_updateRouteLabelForRoute:(id)a0;
- (void)_reloadEUVolumeLimits;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reloadWarning;
- (void)updateVolume:(float)a0;
- (void)_systemMuteDidChange:(id)a0;
- (void)_EUVolumeLimitDidChange:(id)a0;
- (void)updateVolumeControlCapabilities:(unsigned int)a0;
- (void)_systemVolumeDidChange:(id)a0;
- (void)adjustVolumeValue:(float)a0;
- (void)getVolumeValueWithCompletion:(id /* block */)a0;
- (void)initializeVolume;
- (void)_mediaServerDiedNotification:(id)a0;
- (float)_volumeApplyingEUVolumePolicyToVolume:(float)a0;
- (void)_volumeDidChangeNotification:(id)a0;
- (void)_EUVolumeLimitEnforcedDidChange:(id)a0;
- (void)_volumeControlCapabilitiesDidChangeNotification:(id)a0;
- (id)_mediaPlaybackVolumeAudioCategory;

@end
