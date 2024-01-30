@class NSArray, NSXPCConnection;

@interface _GCIPCRemoteConnection : NSObject <_GCIPCConnection> {
    _Atomic BOOL _invalid;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy) NSArray *interruptionHandlers;
@property (copy) NSArray *invalidationHandlers;
@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;

- (id)addInvalidationHandler:(id /* block */)a0;
- (id)initWithConnection:(id)a0;
- (id)description;
- (id)addInterruptionHandler:(id /* block */)a0;
- (void)scheduleSendBarrierBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)suspend;
- (void)invalidate;
- (void)resume;
- (id)redactedDescription;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)remoteProxy;
- (id)remoteProxyWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteProxyWithErrorHandler:(id /* block */)a0;
- (BOOL)isEqualToConnection:(id)a0;

@end
