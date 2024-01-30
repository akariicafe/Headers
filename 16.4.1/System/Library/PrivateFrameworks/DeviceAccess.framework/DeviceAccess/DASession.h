@class NSString, DAAppContext, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface DASession : NSObject <CUXPCCodable> {
    DAAppContext *_appContext;
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_xpc_object> *_xpcEndpoint;
    NSObject<OS_xpc_object> *_xpcListener;
}

@property (nonatomic) unsigned int clientID;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcCnx;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcListenerEndpoint;
@property (readonly, nonatomic) DAAppContext *appContext;
@property (copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ eventHandler;

+ (BOOL)setPartialIPsForAppBundleID:(id)a0 partialIPs:(id)a1 error:(id *)a2;
+ (id)diagnosticShow:(id)a0 endpoint:(id)a1 error:(id *)a2;
+ (id)diagnosticShow:(id)a0 error:(id *)a1;
+ (id)getPartialIPsWithAppBundleID:(id)a0 error:(id *)a1;
+ (id)getPartialIPsWithAuditToken:(struct { unsigned int x0[8]; })a0 error:(id *)a1;
+ (BOOL)networkingAllowedWithUUID:(id)a0 error:(id *)a1;
+ (BOOL)processAllowedWithAuditToken:(struct { unsigned int x0[8]; })a0 error:(id *)a1;
+ (BOOL)setPartialIPsWithAuditToken:(struct { unsigned int x0[8]; })a0 partialIPs:(id)a1 error:(id *)a2;
+ (BOOL)setState:(long long)a0 device:(id)a1 session:(id)a2 error:(id *)a3;
+ (BOOL)setState:(long long)a0 device:(id)a1 session:(id)a2 simulateApp:(BOOL)a3 error:(id *)a4;

- (void)_activateXPCCompleted:(id)a0;
- (void)_xpcReceivedMessage:(id)a0;
- (id)_ensureXPCStarted;
- (void)encodeWithXPCObject:(id)a0;
- (void)xpcReceivedMessage:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)_xpcListenerEvent:(id)a0;
- (void)_interrupted;
- (id)descriptionWithLevel:(int)a0;
- (void)_xpcConnectionAccept:(id)a0;
- (id)init;
- (void)activate;
- (id)description;
- (void)invalidate;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)getAuthorizedDevices:(id /* block */)a0;
- (void)setState:(long long)a0 device:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)appIsUsingDeviceAccess;
- (void)_activateStart:(BOOL)a0;
- (void)_getAuthorizedDevicesCompleted:(id)a0 completionHandler:(id /* block */)a1;
- (void)_getBluetoothAccessInfoCompleted:(id)a0 completionHandler:(id /* block */)a1;
- (void)_getPartialIPsCompleted:(id)a0 completionHandler:(id /* block */)a1;
- (void)_reportEvent:(id)a0;
- (void)_reportEventType:(long long)a0;
- (void)_xpcReceivedDAEvent:(id)a0;
- (id)bluetoothAccessInfoAndReturnError:(id *)a0;
- (void)diagnosticShow:(id)a0 completionHandler:(id /* block */)a1;
- (void)getBluetoothAccessInfoWithCompletionHandler:(id /* block */)a0;
- (void)getPartialIPsWithAppBundleID:(id)a0 completionHandler:(id /* block */)a1;
- (void)getPartialIPsWithAuditToken:(struct { unsigned int x0[8]; })a0 completionHandler:(id /* block */)a1;
- (void)setPartialIPsForAppBundleID:(id)a0 partialIPs:(id)a1 completionHandler:(id /* block */)a2;
- (void)setPartialIPsWithAuditToken:(struct { unsigned int x0[8]; })a0 partialIPs:(id)a1 completionHandler:(id /* block */)a2;
- (void)setState:(long long)a0 device:(id)a1 simulateApp:(BOOL)a2 completionHandler:(id /* block */)a3;

@end
