@class NRDevice, NSString, IDSDevice, SCLSettingsSyncCoordinator, SCLTransportService, NRPairedDeviceRegistry, IDSService;
@protocol SCLTransportControllerDelegate;

@interface SCLTransportController : NSObject <SCLSettingsSyncTransport>

@property (readonly, nonatomic) NRDevice *NRDevice;
@property (readonly, nonatomic) NRPairedDeviceRegistry *deviceRegistry;
@property (readonly, nonatomic) IDSService *service;
@property (readonly, nonatomic) NSString *IDSDeviceIdentifier;
@property (readonly, nonatomic) IDSDevice *device;
@property (weak, nonatomic) SCLTransportService *transportService;
@property (weak, nonatomic) id<SCLTransportControllerDelegate> delegate;
@property (weak, nonatomic) SCLSettingsSyncCoordinator *settingsSyncCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)device;
- (void)service:(id)a0 incomingProtobuf:(id)a1 fromID:(id)a2 context:(id)a3;
- (void)service:(id)a0 identifier:(id)a1 didSendWithSuccess:(BOOL)a2 error:(id)a3;
- (void)service:(id)a0 didDeliverMessageWithIdentifier:(id)a1;
- (void)applySchedule:(id)a0;
- (void)handleIncomingSchedule:(id)a0 forType:(int)a1;
- (void)handleIncomingHistoryItem:(id)a0;
- (void)handleRemoteScheduleSettingsRequest;
- (BOOL)sendSchedule:(id)a0 identifier:(id *)a1 error:(id *)a2;
- (id)initWithNRDevice:(id)a0 deviceRegistry:(id)a1 service:(id)a2 deviceIdentifier:(id)a3;
- (void)addUnlockHistoryItem:(id)a0;
- (void)requestRemoteSettings;

@end
