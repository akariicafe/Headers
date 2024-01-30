@class NSString;

@interface BSXPCServiceConnectionRootContext : BSXPCServiceConnectionContext {
    unsigned long long _unique;
    _Atomic unsigned long long __uniqueChildCounter;
    NSString *_eDesc;
}

- (id)endpointDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isRoot;
- (unsigned long long)hash;
- (id)debugDescription;

@end
