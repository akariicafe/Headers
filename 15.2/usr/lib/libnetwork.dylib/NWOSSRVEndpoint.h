@interface NWOSSRVEndpoint : NWConcrete_nw_endpoint {
    char *name;
}

- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (id)copyDictionary;
- (const char *)domainForPolicy;
- (unsigned long long)getHash;
- (char *)createDescription:(BOOL)a0;
- (id)copyEndpoint;
- (unsigned int)type;
- (void)dealloc;

@end
