@class BSXPCServiceConnectionRootContext;

@interface BSXPCServiceConnectionChildContext : BSXPCServiceConnectionContext {
    BSXPCServiceConnectionRootContext *_parent;
    BOOL _remote;
    unsigned long long _identifier;
}

- (BOOL)isChild;
- (BOOL)isServer;
- (id)endpointDescription;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isClient;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;

@end
