@class BSXPCServiceConnectionRootContext;

@interface BSXPCServiceConnectionChildContext : BSXPCServiceConnectionContext {
    BSXPCServiceConnectionRootContext *_parent;
    BOOL _remote;
    unsigned long long _identifier;
}

- (id)endpointDescription;
- (BOOL)isServer;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isChild;
- (BOOL)isClient;
- (unsigned long long)hash;
- (id)debugDescription;

@end
