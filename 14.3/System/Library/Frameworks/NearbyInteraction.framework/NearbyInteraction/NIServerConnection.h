@class NSUUID, NSXPCConnection, NSObject, RBSAssertion;
@protocol OS_dispatch_queue;

@interface NIServerConnection : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    RBSAssertion *_assertion;
}

@property (copy) id /* block */ interruptionHandler;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) NSUUID *sessionID;
@property (retain) id exportedObject;

- (void).cxx_destruct;
- (void)dealloc;
- (id)remoteObjectProxy;
- (void)resume;
- (void)invalidate;
- (id)synchronousRemoteObjectProxy;
- (id)initWithSessionID:(id)a0 queue:(id)a1 exportedObject:(id)a2;
- (BOOL)isSandboxExtensionRequired;
- (struct { unsigned int x0[8]; })auditTokenForConnection;
- (id)allowTasksToFinishWhileInBackground;
- (void)stopAllowingTasksToFinishWhileInBackground;

@end
