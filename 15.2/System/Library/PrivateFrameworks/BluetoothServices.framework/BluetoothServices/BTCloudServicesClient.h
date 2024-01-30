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

- (void)modifyDeviceSupportInformationRecord:(id)a0 completion:(id /* block */)a1;
- (void)magicSettingsRecordsWithCompletion:(id /* block */)a0;
- (void)cloudPairingIdentifierForPeripheral:(id)a0 completion:(id /* block */)a1;
- (void)deleteDeviceSupportInformationRecord:(id)a0 completion:(id /* block */)a1;
- (void)createDeviceRecord:(id)a0 completion:(id /* block */)a1;
- (void)deleteDeviceRecord:(id)a0 completion:(id /* block */)a1;
- (void)createDeviceSupportInformationRecord:(id)a0 completion:(id /* block */)a1;
- (BOOL)_ensureXPCStarted;
- (void)magicSettingsRecord:(id)a0 completion:(id /* block */)a1;
- (void)modifyDeviceRecord:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)deviceSupportInformationRecord:(id)a0 completion:(id /* block */)a1;
- (void)modifyMagicSettingsRecord:(id)a0 completion:(id /* block */)a1;
- (void)deleteMagicSettingsRecord:(id)a0 completion:(id /* block */)a1;
- (void)invalidate;
- (void)deviceSupportInformationRecordsWithCompletion:(id /* block */)a0;
- (void)_interrupted;
- (void)_invalidated;
- (void)accountInfoWithCompletion:(id /* block */)a0;
- (void)createMagicSettingsRecord:(id)a0 completion:(id /* block */)a1;
- (void)deviceRecord:(id)a0 completion:(id /* block */)a1;
- (void)deviceRecordsWithCompletion:(id /* block */)a0;

@end
