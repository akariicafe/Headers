@class NSMutableDictionary, _TVRCRapportDeviceManager, _TVRCExpiringStore, RPCompanionLinkClient;
@protocol TVRCRapportDeviceQueryDelegate;

@interface TVRCRapportDeviceQuery : NSObject

@property (retain, nonatomic) _TVRCExpiringStore *expiringStore;
@property (retain, nonatomic) RPCompanionLinkClient *companionLinkClient;
@property (retain, nonatomic) NSMutableDictionary *wrapperToIdentifierMapping;
@property (retain, nonatomic) _TVRCRapportDeviceManager *deviceManager;
@property (weak, nonatomic) id<TVRCRapportDeviceQueryDelegate> delegate;

- (void)dealloc;
- (void)stop;
- (id)init;
- (void)start;
- (void).cxx_destruct;
- (void)_deviceFound:(id)a0;
- (void)_deviceLost:(id)a0;
- (void)_disconnectAllDevices;
- (void)_disconnectDevice:(id)a0;
- (void)_mdmConfigChanged:(id)a0;
- (BOOL)_shouldReportDevice:(id)a0;
- (id)_wrapperForDevice:(id)a0;

@end
