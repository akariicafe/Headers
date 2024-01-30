@class NSString, NSXPCConnection, NSXPCInterface, PKXPCForwarder;
@protocol PKXPCServiceDelegate, PKForegroundActiveArbiter, NSObject, PKInvalidatable;

@interface PKXPCService : NSObject <PKForegroundActiveArbiterObserver> {
    NSXPCInterface *_remoteObjectInterface;
    NSXPCInterface *_exportedObjectInterface;
    NSString *_className;
    NSString *_serviceResumedNotificationName;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSXPCConnection *_connection;
    PKXPCForwarder *_templateExportedProxy;
    PKXPCForwarder *_currentExportedProxy;
    BOOL _suspendCallbacks;
    BOOL _forceConnectionOnResume;
    id<PKForegroundActiveArbiter> _foregroundActiveArbiter;
    id<NSObject> _foregroundListener;
    id<NSObject> _backgroundListener;
    id<PKInvalidatable> _serviceResumedListenerInvalidater;
}

@property (readonly, nonatomic) NSString *machServiceName;
@property (readonly, nonatomic) unsigned long long options;
@property (weak, nonatomic) id<PKXPCServiceDelegate> delegate;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly, nonatomic) BOOL connectionEstablished;
@property (nonatomic) BOOL forceConnectionOnResume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setForegroundActiveArbiter:(id)a0;

- (id)remoteObjectProxyWithFailureHandler:(id /* block */)a0;
- (void)_registerForApplicationLifeCycleNotifications;
- (void)_sendResumed;
- (id)init;
- (void).cxx_destruct;
- (void)_unregisterForServiceListenerResumedNotifications;
- (id /* block */)_newErrorHandlerWithSemaphore:(id)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (id)remoteObjectProxy;
- (void)_establishServiceConnection;
- (id)initWithMachServiceName:(id)a0 remoteObjectInterface:(id)a1 exportedObjectInterface:(id)a2 exportedObject:(id)a3 serviceResumedNotificationName:(id)a4;
- (void)_sendSuspended;
- (id)existingSynchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_createConnectionIfPossible:(BOOL)a0;
- (void)foregroundActiveArbiter:(id)a0 didUpdateForegroundActiveState:(struct { BOOL x0; BOOL x1; })a1;
- (id)initWithMachServiceName:(id)a0 remoteObjectInterface:(id)a1 exportedObjectInterface:(id)a2 exportedObject:(id)a3 serviceResumedNotificationName:(id)a4 options:(unsigned long long)a5;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_unregisterForApplicationLifeCycleNotifications;
- (id)existingRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_connection;
- (id)initWithMachServiceName:(id)a0 remoteObjectInterface:(id)a1 exportedObjectInterface:(id)a2 exportedObject:(id)a3;
- (void)_registerForServiceListenerResumedNotifications;
- (id)existingRemoteObjectProxy;
- (id /* block */)_newWrappedErrorHandlerForHandler:(id /* block */)a0;
- (id)remoteObjectProxyWithSemaphore:(id)a0;
- (void)_invalidateConnectionIfPossible;

@end
