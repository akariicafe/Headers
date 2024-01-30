@class DSXPCServer, NSMutableDictionary, DSMotionSession, NSObject, DSKappaSession;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface DSXPCConnection : NSObject {
    BOOL _isEntitledForKappa;
    BOOL _isEntitledForMotion;
    NSMutableDictionary *_deviceDictionary;
}

@property (retain, nonatomic) DSXPCServer *xpcDaemonServer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;
@property (retain, nonatomic) DSKappaSession *kappaSession;
@property (retain, nonatomic) DSMotionSession *motionSession;
@property (nonatomic) int pid;

- (void)activate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_handleXPCMessage:(id)a0;
- (void)_activateKappaSessionMessage:(id)a0;
- (void)_activateMotionSessionMessage:(id)a0;
- (void)_checkEntitlement:(const char *)a0 error:(id *)a1;
- (void)_deviceChangedHandler:(id)a0;
- (void)_deviceFoundHandler:(id)a0;
- (void)_deviceLostHandler:(id)a0;
- (void)_printCohortMessage:(id)a0;
- (void)_updateCoordinationStatusMessage:(id)a0;
- (void)_updateVehicleStateMessage:(id)a0;
- (void)_xpcCohortDeviceMessage:(id)a0 type:(const char *)a1;
- (void)_xpcConnectionSendEvent:(id)a0;
- (void)_xpcEventHandler:(id)a0;
- (void)_xpcSendReplyForMessage:(id)a0 error:(id)a1;

@end
