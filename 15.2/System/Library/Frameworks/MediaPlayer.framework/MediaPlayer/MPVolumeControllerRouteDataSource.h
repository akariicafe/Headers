@class NSString, MPAVRoute;
@protocol MPVolumeControllerDataSourceDelegate;

@interface MPVolumeControllerRouteDataSource : NSObject <MPVolumeControllerDataSource> {
    float _pendingVolume;
    BOOL _hasPendingVolume;
    BOOL _hasVolumeInFlight;
    BOOL _volumeInitialized;
    BOOL _volumeCapabilitiesInitialized;
}

@property (retain, nonatomic) MPAVRoute *groupRoute;
@property (retain, nonatomic) MPAVRoute *outputDeviceRoute;
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

- (id)initWithGroupRoute:(id)a0 outputDeviceRoute:(id)a1;
- (void)reload;
- (void)adjustVolumeValue:(float)a0;
- (void)beginIncreasingRelativeVolume;
- (void)initializeVolume;
- (void)_updateVolumeControlCapabilities:(unsigned int)a0;
- (void).cxx_destruct;
- (void)endIncreasingRelativeVolume;
- (void)_routeVolumeControlCapabilitiesDidChangeNotification:(id)a0;
- (void)endDecreasingRelativeVolume;
- (void)_setPendingVolumeIfNeeded;
- (void)getVolumeValueWithCompletion:(id /* block */)a0;
- (void)_sendVolumeButtonEventWithUsagePage:(unsigned int)a0 usage:(unsigned int)a1 down:(BOOL)a2;
- (void)dealloc;
- (void)beginDecreasingRelativeVolume;
- (void)_routeVolumeDidChangeNotification:(id)a0;

@end
