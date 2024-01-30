@interface NWOSSRVEndpoint : NWConcrete_nw_endpoint {
    char *name;
}

- (id)copyDictionary;
- (unsigned long long)getHash;
- (void)dealloc;
- (const char *)domainForPolicy;
- (unsigned int)type;
- (BOOL)isEqualToEndpoint:(id)a0 matchInterface:(BOOL)a1 matchParent:(BOOL)a2;
- (char *)createDescription:(BOOL)a0;
- (id)copyEndpoint;

@end
