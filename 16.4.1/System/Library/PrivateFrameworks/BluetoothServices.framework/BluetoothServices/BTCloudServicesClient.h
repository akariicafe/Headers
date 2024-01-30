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

- (void)deleteMagicSettingsRecord:(id)a0 completion:(id /* block */)a1;
- (void)createDeviceSupportInformationRecord:(id)a0 completion:(id /* block */)a1;
- (BOOL)_ensureXPCStarted;
- (void)deviceRecord:(id)a0 completion:(id /* block */)a1;
- (void)modifySoundProfileRecord:(id)a0 completion:(id /* block */)a1;
- (void)createDeviceRecord:(id)a0 completion:(id /* block */)a1;
- (void)deleteDeviceRecord:(id)a0 completion:(id /* block */)a1;
- (void)magicSettingsRecordsWithCompletion:(id /* block */)a0;
- (void)createMagicSettingsRecord:(id)a0 completion:(id /* block */)a1;
- (void)_interrupted;
- (void)deleteDeviceSupportInformationRecord:(id)a0 completion:(id /* block */)a1;
- (void)deviceSupportInformationRecord:(id)a0 completion:(id /* block */)a1;
- (void)fetchSoundProfileRecordWithCompletion:(id /* block */)a0;
- (void)modifyMagicSettingsRecord:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)modifyDeviceRecord:(id)a0 completion:(id /* block */)a1;
- (void)cloudPairingIdentifierForPeripheral:(id)a0 completion:(id /* block */)a1;
- (void)magicSettingsRecord:(id)a0 completion:(id /* block */)a1;
- (void)deviceSupportInformationRecordsWithCompletion:(id /* block */)a0;
- (void)forceCloudPairingForIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)invalidate;
- (void)modifyDeviceSupportInformationRecord:(id)a0 completion:(id /* block */)a1;
- (void)deleteSoundProfileRecordWithCompletion:(id /* block */)a0;
- (void)deviceRecordsWithCompletion:(id /* block */)a0;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)createSoundProfileRecord:(id)a0 completion:(id /* block */)a1;
- (void)accountInfoWithCompletion:(id /* block */)a0;

@end
