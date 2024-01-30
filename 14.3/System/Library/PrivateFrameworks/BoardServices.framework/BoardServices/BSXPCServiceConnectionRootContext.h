@class NSString;

@interface BSXPCServiceConnectionRootContext : BSXPCServiceConnectionContext {
    unsigned long long _unique;
    _Atomic unsigned long long __uniqueChildCounter;
    NSString *_eDesc;
}

- (id)endpointDescription;
- (BOOL)isRoot;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;

@end
