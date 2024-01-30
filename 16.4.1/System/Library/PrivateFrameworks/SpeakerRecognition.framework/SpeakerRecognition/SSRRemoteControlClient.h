@class CSDispatchGroup, OS_remote_device, OS_xpc_remote_connection, NSObject;
@protocol OS_dispatch_queue;

@interface SSRRemoteControlClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    OS_xpc_remote_connection *_connection;
    CSDispatchGroup *_deviceWaitingGroup;
    OS_remote_device *_device;
}

- (BOOL)isConnected;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_handleServerError:(id)a0;
- (void)_handleServerEvent:(id)a0;
- (void)didDeviceConnect:(id)a0;
- (void)didDeviceDisconnect:(id)a0;
- (BOOL)waitingForConnection:(double)a0 error:(id *)a1;
- (BOOL)_isImplicitTrainingRequiredForVoiceProfileId:(id)a0 locale:(id)a1 error:(id *)a2;
- (void)addImplicitTrainingUtteranceToRemoteFilePath:(id)a0 forVoiceProfileId:(id)a1 withVoiceTriggerCtxt:(id)a2 locale:(id)a3 withOtherCtxt:(id)a4 completion:(id /* block */)a5;
- (id)initWithRemoteDeviceUUID:(id)a0;

@end
