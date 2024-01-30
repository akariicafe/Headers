@class NSObject;
@protocol OS_xpc_object;

@interface CSActivationXPCClient : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;

- (void)connect;
- (void)_sendMessage:(id)a0 connection:(id)a1 completion:(id /* block */)a2;
- (id)_decodeError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)notifyActivationEvent:(id)a0 completion:(id /* block */)a1;
- (void)_handleListenerError:(id)a0;
- (void)_handleListenerEvent:(id)a0;
- (void)dealloc;

@end
