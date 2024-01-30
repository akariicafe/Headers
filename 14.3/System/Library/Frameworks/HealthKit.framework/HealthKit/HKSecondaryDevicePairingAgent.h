@class NSString, HKHealthStore, HKTaskServerProxyProvider, NSUUID;

@interface HKSecondaryDevicePairingAgent : NSObject <_HKXPCExportable> {
    HKHealthStore *_healthStore;
    HKTaskServerProxyProvider *_proxyProvider;
    NSUUID *_identifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serverInterface;

- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)fetchSharingStatusWithPairedGuardianWithCompletion:(id /* block */)a0;
- (void)tearDownHealthSharingWithPairedGuardianWithCompletion:(id /* block */)a0;
- (void)requestTinkerSharingOptInWithGuardianDisplayName:(id)a0 NRDeviceUUID:(id)a1 completion:(id /* block */)a2;
- (void)setupHealthSharingForSecondaryPairedDeviceWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)performEndToEndCloudSyncWithNRDeviceUUID:(id)a0 syncParticipantFirst:(BOOL)a1 completion:(id /* block */)a2;
- (void)tearDownHealthSharingWithTinkerDeviceWithNRUUID:(id)a0 completion:(id /* block */)a1;
- (void)fetchSharingStatusForCurrentAppleIDWithOwnerEmailAddress:(id)a0 completion:(id /* block */)a1;
- (id)remoteInterface;
- (id)exportedInterface;
- (id)initWithHealthStore:(id)a0;

@end
