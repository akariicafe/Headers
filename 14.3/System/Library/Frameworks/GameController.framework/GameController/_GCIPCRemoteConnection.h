@class NSArray, NSXPCConnection;

@interface _GCIPCRemoteConnection : NSObject <_GCIPCConnection> {
    _Atomic BOOL _invalid;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy) NSArray *interruptionHandlers;
@property (copy) NSArray *invalidationHandlers;
@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;

- (id)addInterruptionHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)addInvalidationHandler:(id /* block */)a0;
- (unsigned long long)hash;
- (id)initWithConnection:(id)a0;
- (id)description;
- (void)scheduleSendBarrierBlock:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (void)resume;
- (id)debugDescription;
- (void)suspend;
- (void)invalidate;
- (id)remoteProxy;
- (id)remoteProxyWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)isEqualToConnection:(id)a0;

@end
