@class NSObject, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface BTCloudServicesClient : NSObject {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (BOOL)_ensureXPCStarted;
- (void)deviceRecordsWithCompletion:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)deviceSupportInformationRecordsWithCompletion:(id /* block */)a0;
- (void)accountInfoWithCompletion:(id /* block */)a0;
- (void)modifyDeviceSupportInformationRecord:(id)a0 completion:(id /* block */)a1;
- (void)modifyDeviceRecord:(id)a0 completion:(id /* block */)a1;
- (void)deleteDeviceRecord:(id)a0 completion:(id /* block */)a1;
- (void)_invalidated;
- (void)magicSettingsRecord:(id)a0 completion:(id /* block */)a1;
- (void)createMagicSettingsRecord:(id)a0 completion:(id /* block */)a1;
- (void)createDeviceRecord:(id)a0 completion:(id /* block */)a1;
- (void)deviceSupportInformationRecord:(id)a0 completion:(id /* block */)a1;
- (void)deviceRecord:(id)a0 completion:(id /* block */)a1;
- (void)cloudPairingIdentifierForPeripheral:(id)a0 completion:(id /* block */)a1;
- (void)deleteMagicSettingsRecord:(id)a0 completion:(id /* block */)a1;
- (void)magicSettingsRecordsWithCompletion:(id /* block */)a0;
- (void)modifyMagicSettingsRecord:(id)a0 completion:(id /* block */)a1;
- (void)_interrupted;
- (void)createDeviceSupportInformationRecord:(id)a0 completion:(id /* block */)a1;
- (void)deleteDeviceSupportInformationRecord:(id)a0 completion:(id /* block */)a1;
- (void)invalidate;

@end
