@interface _GCIPCRemoteOutgoingConnection : _GCIPCRemoteConnection <_GCIPCOutgoingConnection>

@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;

+ (id)sharedConnectionWorkloop;

- (id)redactedDescription;
- (id)initWithConnection:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)remoteProxy;
- (id)remoteProxyWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteProxyWithErrorHandler:(id /* block */)a0;

@end
