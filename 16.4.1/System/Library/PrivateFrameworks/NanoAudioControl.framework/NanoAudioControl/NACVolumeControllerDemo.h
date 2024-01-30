@class NSOrderedSet, NSString, NACEventThrottler, NSNumber;
@protocol NACVolumeControllerDelegate;

@interface NACVolumeControllerDemo : NSObject <NACVolumeController> {
    NSString *_audioCategory;
    NACEventThrottler *_defaultsThrottler;
    NSNumber *_volumeValue;
    BOOL _allowUserToExceedEUVolumeLimit;
    NSString *_currentListeningMode;
    BOOL _observingListeningModes;
}

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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setVolumeValue:(float)a0;
- (void)setMuted:(BOOL)a0;
- (void)_applicationDidBecomeActiveNotification:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)allowUserToExceedEUVolumeLimit;
- (id)initWithAudioCategory:(id)a0;
- (void)_persistVolumeValue:(id)a0;
- (void)_setNeedsVolumeReload;
- (id)_volumeDictionary;
- (void)beginObservingListeningModes;
- (void)beginObservingVolume;
- (void)endObservingListeningModes;
- (void)endObservingVolume;
- (void)setVolumeValue:(float)a0 muted:(BOOL)a1 overrideEULimit:(BOOL)a2;

@end
