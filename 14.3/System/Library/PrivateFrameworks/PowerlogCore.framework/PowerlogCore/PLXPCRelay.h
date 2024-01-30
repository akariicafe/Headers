@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface PLXPCRelay : NSObject

@property (retain) NSObject<OS_xpc_object> *xpcConnection;
@property (retain, nonatomic) NSObject<OS_xpc_object> *relayConnection;
@property (retain) NSObject<OS_xpc_object> *xpcCrashMoverConn;
@property (retain) NSObject<OS_dispatch_queue> *crashMoverQueue;
@property BOOL relayActive;

+ (id)sharedInstance;

- (id)init;
- (void)handlePeer:(id)a0 forEvent:(id)a1;
- (BOOL)isDebugEnabled;
- (void).cxx_destruct;
- (void)resetRelayConnection;
- (void)movePowerlogs;
- (void)handleCrashMoverConnection:(id)a0;
- (void)startRelay;
- (void)stopRelay;

@end
