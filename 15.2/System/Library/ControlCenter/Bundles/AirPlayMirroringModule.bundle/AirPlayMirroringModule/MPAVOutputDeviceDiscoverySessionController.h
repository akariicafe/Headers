@class NSArray, AVOutputDeviceDiscoverySession, AVOutputDeviceDiscoverySessionAvailableOutputDevices;

@interface MPAVOutputDeviceDiscoverySessionController : NSObject {
    AVOutputDeviceDiscoverySession *_outputDeviceDiscoverySession;
    AVOutputDeviceDiscoverySessionAvailableOutputDevices *_cachedAvailableOutputDevices;
    BOOL _cachedExternalOutputDeviceAvailable;
    long long _startDetailedDiscoveryCount;
}

@property (retain, nonatomic) NSArray *filteredDevices;
@property (nonatomic) BOOL needsUpdate;
@property (readonly, nonatomic, getter=isExternalOutputDeviceAvailable) BOOL externalOutputDeviceAvailable;

- (id)availableOutputDevices;
- (void)stopDetailedDiscovery;
- (id)_filterAndSortOutputDevices:(id)a0;
- (void).cxx_destruct;
- (id)initWithDeviceFeatures:(unsigned long long)a0;
- (id)init;
- (void)_availableOutputDevicesChangedNotification:(id)a0;
- (void)_updateOutputDevicesImmediately;
- (void)_updateOutputDevicesIfNeeded;
- (void)dealloc;
- (void)_updateOutputDevicesForAvailableOutputDevices:(id)a0;
- (void)startDetailedDiscovery;

@end
