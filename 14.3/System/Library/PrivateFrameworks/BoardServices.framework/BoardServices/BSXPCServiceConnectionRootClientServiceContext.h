@interface BSXPCServiceConnectionRootClientServiceContext : BSXPCServiceConnectionRootContext {
    BOOL _privileged;
}

- (BOOL)isClient;

@end
