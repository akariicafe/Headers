@class NSArray, AVOutputDeviceDiscoverySession, AVOutputDeviceDiscoverySessionAvailableOutputDevices;

@interface MPAVOutputDeviceDiscoverySessionController : NSObject {
    AVOutputDeviceDiscoverySession *_outputDeviceDiscoverySession;
    AVOutputDeviceDiscoverySessionAvailableOutputDevices *_cachedAvailableOutputDevices;
    BOOL _cachedExternalOutputDeviceAvailable;
    long long _startDetailedDiscoveryCount;
}

@property (retain) NSArray *filteredDevices;
@property (nonatomic) BOOL needsUpdate;
@property (readonly, getter=isExternalOutputDeviceAvailable) BOOL externalOutputDeviceAvailable;

- (void)_updateOutputDevicesImmediately;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDeviceFeatures:(unsigned long long)a0;
- (void)_availableOutputDevicesChangedNotification:(id)a0;
- (void)startDetailedDiscovery;
- (void)stopDetailedDiscovery;
- (void)_updateOutputDevicesForAvailableOutputDevices:(id)a0;
- (id)availableOutputDevices;
- (void)_updateOutputDevicesIfNeeded;
- (id)_filterAndSortOutputDevices:(id)a0;

@end
