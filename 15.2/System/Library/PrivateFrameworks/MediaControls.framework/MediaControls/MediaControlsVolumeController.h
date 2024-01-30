@class MPAVOutputDeviceRoute, NSString, MPAVEndpointRoute, NSHashTable, MPVolumeController;

@interface MediaControlsVolumeController : NSObject <MPVolumeControllerDelegate>

@property (retain, nonatomic) MPAVEndpointRoute *systemRoute;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) MPVolumeController *systemVolumeController;
@property (retain, nonatomic) MPVolumeController *primaryVolumeController;
@property (retain, nonatomic) MPVolumeController *secondaryVolumeController;
@property (retain, nonatomic) MPAVOutputDeviceRoute *primaryOutputDeviceRoute;
@property (retain, nonatomic) MPAVOutputDeviceRoute *secondaryOutputDeviceRoute;
@property (nonatomic) BOOL primaryInteractionEnabled;
@property (nonatomic) BOOL secondaryInteractionEnabled;
@property (readonly, nonatomic) BOOL isSplitRoute;
@property (readonly, nonatomic) BOOL supportsHeadTrackedSpatialAudio;
@property (readonly, nonatomic, getter=isHeadTrackedSpatialAudioActive) BOOL headTrackedSpatialAudioActive;
@property (copy, nonatomic) NSString *volumeAudioCategory;
@property (readonly, nonatomic) MPAVOutputDeviceRoute *systemOutputDeviceRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isDefaultPackage:(id)a0;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)volumeController:(id)a0 volumeControlAvailableDidChange:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)volumeController:(id)a0 volumeValueDidChange:(float)a1;
- (id)outputeDeviceForRouteType:(long long)a0;
- (id)routeNameForRouteType:(long long)a0;
- (id)packageNameForRouteType:(long long)a0 isRTL:(BOOL)a1 isSlider:(BOOL)a2;
- (id)glyphStateForVolumeLevel:(double)a0 packageName:(id)a1;
- (id)currentBluetoothListeningModeForRouteType:(long long)a0;
- (id)setCurrentBluetoothListeningModeForRouteType:(long long)a0 bluetoothListeningMode:(id)a1;
- (id)availableBluetoothListeningModeForRouteType:(long long)a0;
- (void)logFailedSetBluetoothListeningMode:(id)a0 forRouteType:(long long)a1;
- (id)headTrackedSpatialAudioModeForRouteType:(long long)a0;
- (void)setHeadTrackedSpatialAudioMode:(id)a0 forRouteType:(long long)a1;
- (float)volumeForRouteType:(long long)a0;
- (BOOL)volumeControlAvailableForRouteType:(long long)a0;
- (void)setVolume:(float)a0 forRouteType:(long long)a1;
- (BOOL)userInteractionEnabledForRouteType:(long long)a0;
- (void)setUserInteractionEnabled:(BOOL)a0 forRouteType:(long long)a1;
- (void)routeDidChangeNotification;
- (void)_notifyVolumeChangedForVolumeController:(id)a0 volumeControlAvailable:(BOOL)a1 effectiveVolume:(float)a2;
- (void)_notifyUserInteractionEnabledChanged:(BOOL)a0 routeType:(long long)a1;
- (long long)_routeForVolumeController:(id)a0;
- (BOOL)_setupOutputDevicesAndVolumeControllersIfNeeded;
- (id)_packageNameForRoute:(id)a0 isRTL:(BOOL)a1 isSlider:(BOOL)a2;
- (id)_volumePackageNameForRTL:(BOOL)a0;
- (id)_volumePackageNameForClusterRoute:(id)a0 isRTL:(BOOL)a1;
- (id)outputContextDescription;

@end
