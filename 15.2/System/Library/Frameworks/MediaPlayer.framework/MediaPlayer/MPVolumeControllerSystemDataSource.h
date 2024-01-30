@class NSString, AVSystemController, NSObject;
@protocol MPVolumeControllerDataSourceDelegate, OS_dispatch_queue;

@interface MPVolumeControllerSystemDataSource : NSObject <MPVolumeControllerDataSource> {
    BOOL _debugVolumeWarning;
    BOOL _volumeInitialized;
    BOOL _volumeControlCapabilitiesInitialized;
    NSObject<OS_dispatch_queue> *_avscQueue;
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

- (void)_tearDown;
- (void)reload;
- (void)_routeDidChangeNotification:(id)a0;
- (void)_setup;
- (void)updateVolume:(float)a0;
- (void)adjustVolumeValue:(float)a0;
- (void)updateVolumeControlCapabilities:(unsigned int)a0;
- (void)_EUVolumeLimitEnforcedDidChange:(id)a0;
- (void)initializeVolume;
- (void)_EUVolumeLimitDidChange:(id)a0;
- (id)_reloadQueue;
- (float)_volumeApplyingEUVolumePolicyToVolume:(float)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_volumeControlCapabilitiesDidChangeNotification:(id)a0;
- (void)reloadWarning;
- (void)_systemVolumeDidChange:(id)a0;
- (void)_mediaServerDiedNotification:(id)a0;
- (void)_volumeDidChangeNotification:(id)a0;
- (void)getVolumeValueWithCompletion:(id /* block */)a0;
- (void)_reloadEUVolumeLimits;
- (void)dealloc;
- (void)_updateRouteLabelForRoute:(id)a0;
- (void)_systemMuteDidChange:(id)a0;
- (id)_mediaPlaybackVolumeAudioCategory;

@end
