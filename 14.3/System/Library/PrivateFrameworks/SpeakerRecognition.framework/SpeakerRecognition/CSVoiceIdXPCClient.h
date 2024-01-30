@class NSObject;
@protocol OS_xpc_object;

@interface CSVoiceIdXPCClient : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;

- (void)connect;
- (void)disconnect;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_decodeError:(id)a0;
- (void)_sendMessage:(id)a0 connection:(id)a1 completion:(id /* block */)a2;
- (void)_handleListenerEvent:(id)a0;
- (void)_handleListenerError:(id)a0;
- (void)notifyImplicitUtterance:(id)a0 audioDeviceType:(id)a1 audioRecordType:(id)a2 voiceTriggerEventInfo:(id)a3 otherCtxt:(id)a4 completion:(id /* block */)a5;

@end
