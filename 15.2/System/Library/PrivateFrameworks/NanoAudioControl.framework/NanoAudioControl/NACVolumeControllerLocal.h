@class NACEventThrottler, NSString, NSOrderedSet, MPAVRoute, MediaControlsVolumeController, NSCountedSet, NSObject, MPVolumeController, MPAVRoutingController;
@protocol OS_dispatch_queue, NACVolumeControllerDelegate;

@interface NACVolumeControllerLocal : NSObject <MPVolumeControllerDelegate, MPAVRoutingControllerDelegate, MediaControlsVolumeControllerObserver, NACVolumeController> {
    long long _target;
    NSString *_audioCategory;
    MPAVRoute *_route;
    MPVolumeController *_volumeController;
    MPAVRoutingController *_routingController;
    NSCountedSet *_volumeSetHistory;
    NACEventThrottler *_volumeThrottler;
    NACEventThrottler *_hapticThrottler;
    BOOL _validCachedMutedValue;
    BOOL _muted;
    BOOL _shouldIgnoreHaptics;
    BOOL _monitoringHaptics;
    long long _cachedHapticState;
    NSObject<OS_dispatch_queue> *_serialQueue;
    MediaControlsVolumeController *_mediaControlsVolumeController;
    NSOrderedSet *_lastNotifiedAvailableListeningModes;
    NSString *_lastNotifiedCurrentListeningMode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NACVolumeControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable;
@property (readonly, nonatomic, getter=isVolumeWarningEnabled) BOOL volumeWarningEnabled;
@property (readonly, nonatomic) long long volumeWarningState;
@property (readonly, nonatomic, getter=isMuted) BOOL muted;
@property (readonly, nonatomic) float volumeValue;
@property (readonly, nonatomic) float EUVolumeLimit;
@property (nonatomic, getter=isSystemMuted) BOOL systemMuted;
@property (nonatomic) long long hapticState;
@property (readonly, nonatomic) NSOrderedSet *availableListeningModes;
@property (retain, nonatomic) NSString *currentListeningMode;
@property (nonatomic) float hapticIntensity;
@property (nonatomic, getter=isProminentHapticEnabled) BOOL prominentHapticEnabled;

- (void)setMuted:(BOOL)a0;
- (void)volumeController:(id)a0 volumeControlAvailableDidChange:(BOOL)a1;
- (void)allowUserToExceedEUVolumeLimit;
- (void)routingControllerAvailableRoutesDidChange:(id)a0;
- (id)_volumeController;
- (void)volumeController:(id)a0 mutedStateDidChange:(BOOL)a1;
- (id)initWithAudioCategory:(id)a0;
- (void).cxx_destruct;
- (void)volumeController:(id)a0 volumeWarningStateDidChange:(long long)a1;
- (id)init;
- (id)initWithRoute:(id)a0;
- (id)_init;
- (void)setVolumeValue:(float)a0;
- (void)volumeController:(id)a0 EUVolumeLimitDidChange:(float)a1;
- (void)volumeController:(id)a0 volumeValueDidChange:(float)a1;
- (void)mediaControlsVolumeController:(id)a0 didUpdateSplitRoute:(BOOL)a1;
- (void)playDefaultHapticPreview;
- (void)playProminentHapticPreview;
- (void)beginObservingHapticState;
- (void)beginObservingListeningModes;
- (void)endObservingListeningModes;
- (void)_setVolumeValue:(id)a0;
- (void)_setHapticIntensity:(id)a0;
- (void)endObservingVolume;
- (void)beginObservingVolume;
- (void)beginObservingHaptics;
- (void)endObservingHaptics;
- (void)_ignoreHapticObservation;
- (void)setVolumeValue:(float)a0 muted:(BOOL)a1 overrideEULimit:(BOOL)a2;
- (void)_updateMutedStateFromVolumeController:(id)a0;
- (void)_updateVolumeState;
- (void)updateCachedHapticState;
- (void)endObservingHapticState;
- (id)_mediaControlsVolumeController;
- (void)playPreview;
- (id)initWithTarget:(long long)a0 category:(id)a1;

@end
