@class NSUUID, NSXPCConnection, NSObject, RBSAssertion;
@protocol OS_dispatch_queue;

@interface NIServerConnection : NSObject {
    NSXPCConnection *_connection;
    unsigned long long _options;
    NSObject<OS_dispatch_queue> *_queue;
    RBSAssertion *_assertion;
}

@property (copy) id /* block */ interruptionHandler;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) NSUUID *sessionID;
@property (retain) id exportedObject;

- (id)initWithSessionID:(id)a0 queue:(id)a1 exportedObject:(id)a2 options:(unsigned long long)a3;
- (id)remoteObjectProxy;
- (id)synchronousRemoteObjectProxy;
- (struct { unsigned int x0[8]; })auditTokenForConnection;
- (void)stopAllowingTasksToFinishWhileInBackground;
- (void).cxx_destruct;
- (void)invalidate;
- (void)resume;
- (void)dealloc;
- (id)allowTasksToFinishWhileInBackground;

@end
