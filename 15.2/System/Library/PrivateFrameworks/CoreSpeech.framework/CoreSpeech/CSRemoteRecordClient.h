@class OS_remote_device_browser, NSString, OS_remote_device, CSDispatchGroup, NSObject, OS_xpc_remote_connection;
@protocol CSRemoteRecordClientDelegate, OS_dispatch_queue;

@interface CSRemoteRecordClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    OS_xpc_remote_connection *_connection;
    OS_remote_device_browser *_deviceBrowser;
    CSDispatchGroup *_deviceWaitingGroup;
    BOOL _isRemoteRecording;
}

@property (retain, nonatomic) OS_remote_device *device;
@property (weak, nonatomic) id<CSRemoteRecordClientDelegate> delegate;
@property (readonly, nonatomic) unsigned long long audioStreamHandleId;
@property (readonly, nonatomic) NSString *deviceId;

- (BOOL)stopRecording:(id *)a0;
- (BOOL)isRecording;
- (id)voiceTriggerEventInfo;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isConnected;
- (void)dealloc;
- (void)didDeviceConnect:(id)a0;
- (void)didDeviceDisconnect:(id)a0;
- (id)initWithDeviceId:(id)a0 audioStreamHandleId:(unsigned long long)a1;
- (void)_handleServerEvent:(id)a0;
- (void)_handleServerError:(id)a0;
- (void)_handleServerMessage:(id)a0;
- (void)_handleDidStartRecordingMessage:(id)a0;
- (void)_handleTwoShotDetectedMessage:(id)a0;
- (BOOL)isRemoteDeviceGibraltar;
- (BOOL)waitingForConnection:(double)a0 error:(id *)a1;
- (BOOL)startRecordingWithOptions:(id)a0 error:(id *)a1;
- (BOOL)didPlayEndpointBeep;
- (BOOL)hasPendingTwoShotBeep;

@end
