@class NSArray, NSMutableDictionary, NSMutableSet, DAAppContext, NSObject, DADiscoveryConfiguration;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface DADiscovery : NSObject <CUXPCCodable> {
    BOOL _activateCalled;
    NSMutableSet *_extensions;
    NSMutableDictionary *_deviceMap;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_policySessions;
}

@property (nonatomic) unsigned int clientID;
@property (retain, nonatomic) DADiscoveryConfiguration *configuration;
@property (nonatomic) BOOL direct;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcCnx;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcListenerEndpoint;
@property (retain, nonatomic) DAAppContext *appContext;
@property (readonly, copy) NSArray *discoveredDevices;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ eventHandler;

- (void)_activateXPCCompleted:(id)a0;
- (void)_xpcReceivedMessage:(id)a0;
- (id)_ensureXPCStarted;
- (void)encodeWithXPCObject:(id)a0;
- (void)_activateXPCStart:(BOOL)a0;
- (void)xpcReceivedMessage:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)_interrupted;
- (id)descriptionWithLevel:(int)a0;
- (id)init;
- (void)activate;
- (id)description;
- (void)invalidate;
- (void)_invalidated;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (void)getAuthorizedDevices:(id /* block */)a0;
- (void)setState:(long long)a0 device:(id)a1 completionHandler:(id /* block */)a2;
- (void)_activateDirect;
- (void)_getAuthorizedDevicesCompleted:(id)a0 completionHandler:(id /* block */)a1;
- (void)_reportEvent:(id)a0;
- (void)_reportEventType:(long long)a0;
- (void)_startExtensions:(id)a0;
- (void)_stopExtensons;
- (void)_updateNEPolicy:(id)a0 remove:(BOOL)a1;
- (id)_uuidFromExtension:(id)a0;
- (void)_xpcReceivedDAEvent:(id)a0;
- (void)_xpcReceivedDeviceEvent:(id)a0;
- (void)setState:(long long)a0 device:(id)a1 simulateApp:(BOOL)a2 completionHandler:(id /* block */)a3;

@end
