@class MPAVOutputDeviceRoute, NSString, MPAVEndpointRoute, NSHashTable, MPVolumeController;

@interface MediaControlsVolumeController : NSObject <MPVolumeControllerDelegate>

@property (retain, nonatomic) MPAVEndpointRoute *systemRoute;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) MPVolumeController *systemVolumeController;
@property (retain, nonatomic) MPVolumeController *primaryVolumeController;
@property (retain, nonatomic) MPVolumeController *secondaryVolumeController;
@property (retain, nonatomic) MPAVOutputDeviceRoute *systemOutputDeviceRoute;
@property (retain, nonatomic) MPAVOutputDeviceRoute *primaryOutputDeviceRoute;
@property (retain, nonatomic) MPAVOutputDeviceRoute *secondaryOutputDeviceRoute;
@property (readonly, nonatomic) BOOL isSplitRoute;
@property (copy, nonatomic) NSString *volumeAudioCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)volumeController:(id)a0 volumeValueDidChange:(float)a1;
- (void)volumeController:(id)a0 volumeControlAvailableDidChange:(BOOL)a1;
- (float)volumeForRouteType:(unsigned long long)a0;
- (id)routeNameForRouteType:(unsigned long long)a0;
- (id)availableBluetoothListeningModeForRouteType:(unsigned long long)a0;
- (id)currentBluetoothListeningModeForRouteType:(unsigned long long)a0;
- (void)routeDidChangeNotification;
- (BOOL)_setupOutputDevicesAndVolumeControllersIfNeeded;
- (void)_notifyVolumeChangedForVolumeController:(id)a0 volumeControlAvailable:(BOOL)a1 effectiveVolume:(float)a2;
- (unsigned long long)_routeForVolumeController:(id)a0;
- (BOOL)volumeControlAvailableForRouteType:(unsigned long long)a0;
- (void)setVolume:(float)a0 forRouteType:(unsigned long long)a1;
- (BOOL)setCurrentBluetoothListeningModeForRouteType:(unsigned long long)a0 bluetoothListeningMode:(id)a1 error:(id *)a2;
- (id)imageForRouteType:(unsigned long long)a0;

@end
