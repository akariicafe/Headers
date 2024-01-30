@class NSArray, AVOutputDeviceDiscoverySession;
@protocol MRUMirroringDiscoverySessionControllerDelegate;

@interface MRUMirroringDiscoverySessionController : NSObject

@property (retain, nonatomic) AVOutputDeviceDiscoverySession *outputDeviceDiscoverySession;
@property (retain, nonatomic) NSArray *cachedAvailableOutputDevices;
@property (retain, nonatomic) NSArray *availableOutputDevices;
@property (nonatomic) BOOL needsUpdate;
@property (nonatomic) BOOL detailedDiscovery;
@property (weak, nonatomic) id<MRUMirroringDiscoverySessionControllerDelegate> delegate;
@property (readonly, nonatomic, getter=isExternalOutputDeviceAvailable) BOOL externalOutputDeviceAvailable;

- (void)updateOutputDevicesImmediately;
- (void)updateDiscoveryMode;
- (void)stopDetailedDiscovery;
- (void)startDetailedDiscovery;
- (void)updateOutputDevicesForAvailableOutputDevices:(id)a0;
- (id)initWithDeviceFeatures:(unsigned long long)a0;
- (void)availableOutputDevicesChangedNotification:(id)a0;
- (void)dealloc;
- (void)updateOutputDevicesIfNeeded;
- (id)init;
- (BOOL)sortDeviceToTop:(id)a0;
- (id)filterAndSortOutputDevices:(id)a0;
- (void).cxx_destruct;

@end
