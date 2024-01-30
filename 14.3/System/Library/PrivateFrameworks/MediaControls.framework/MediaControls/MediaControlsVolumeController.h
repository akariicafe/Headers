@class MPAVOutputDeviceRoute, NSString, MPAVEndpointRoute, NSHashTable, MPVolumeController, MPRequestResponseController;

@interface MediaControlsVolumeController : NSObject <MPVolumeControllerDelegate, MPRequestResponseControllerDelegate>

@property (retain, nonatomic) MPAVEndpointRoute *systemRoute;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) MPVolumeController *systemVolumeController;
@property (retain, nonatomic) MPVolumeController *primaryVolumeController;
@property (retain, nonatomic) MPVolumeController *secondaryVolumeController;
@property (retain, nonatomic) MPAVOutputDeviceRoute *systemOutputDeviceRoute;
@property (retain, nonatomic) MPAVOutputDeviceRoute *primaryOutputDeviceRoute;
@property (retain, nonatomic) MPAVOutputDeviceRoute *secondaryOutputDeviceRoute;
@property (retain, nonatomic) MPRequestResponseController *requestController;
@property (nonatomic) BOOL primaryInteractionEnabled;
@property (nonatomic) BOOL secondaryInteractionEnabled;
@property (nonatomic) int headTrackedSpatialAudioNotificationToken;
@property (readonly, nonatomic) BOOL isSplitRoute;
@property (readonly, nonatomic) BOOL supportsHeadTrackedSpatialAudio;
@property (nonatomic, getter=isHeadTrackedSpatialAudioEnabled) BOOL headTrackedSpatialAudioEnabled;
@property (readonly, nonatomic, getter=isHeadTrackedSpatialAudioActive) BOOL headTrackedSpatialAudioActive;
@property (copy, nonatomic) NSString *volumeAudioCategory;
@property (nonatomic, getter=isAutomaticResponseLoading) BOOL automaticResponseLoading;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isDefaultPackage:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)volumeController:(id)a0 volumeValueDidChange:(float)a1;
- (void)controller:(id)a0 defersResponseReplacement:(id /* block */)a1;
- (void)volumeController:(id)a0 volumeControlAvailableDidChange:(BOOL)a1;
- (void)beginObservingHeadTrackedSpatialAudioEnabledNotification;
- (void)setUserInteractionEnabled:(BOOL)a0 forRouteType:(long long)a1;
- (void)endObservingHeadTrackedSpatialAudioEnabledNotification;
- (id)glyphStateForVolumeLevel:(double)a0 packageName:(id)a1;
- (id)outputContextDescription;
- (void)logFailedSetBluetoothListeningMode:(id)a0 forRouteType:(long long)a1;
- (id)packageNameForRouteType:(long long)a0 isRTL:(BOOL)a1 isSlider:(BOOL)a2;
- (float)volumeForRouteType:(long long)a0;
- (id)routeNameForRouteType:(long long)a0;
- (id)availableBluetoothListeningModeForRouteType:(long long)a0;
- (id)currentBluetoothListeningModeForRouteType:(long long)a0;
- (id)setCurrentBluetoothListeningModeForRouteType:(long long)a0 bluetoothListeningMode:(id)a1;
- (void)routeDidChangeNotification;
- (BOOL)_setupOutputDevicesAndVolumeControllersIfNeeded;
- (id)_packageNameForRoute:(id)a0 isRTL:(BOOL)a1 isSlider:(BOOL)a2;
- (void)_notifyUserInteractionEnabledChanged:(BOOL)a0 routeType:(long long)a1;
- (void)_updateHeadTrackedSpatialAudioEnabled;
- (void)_notifyVolumeChangedForVolumeController:(id)a0 volumeControlAvailable:(BOOL)a1 effectiveVolume:(float)a2;
- (long long)_routeForVolumeController:(id)a0;
- (id)_volumePackageNameForClusterRoute:(id)a0 isRTL:(BOOL)a1;
- (id)_volumePackageNameForRTL:(BOOL)a0;
- (BOOL)volumeControlAvailableForRouteType:(long long)a0;
- (void)setVolume:(float)a0 forRouteType:(long long)a1;
- (BOOL)userInteractionEnabledForRouteType:(long long)a0;

@end
