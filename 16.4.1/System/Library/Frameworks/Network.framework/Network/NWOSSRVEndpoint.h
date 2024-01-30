@interface NWOSSRVEndpoint : NWConcrete_nw_endpoint {
    char *name;
}

- (id)copyDictionary;
- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (unsigned int)type;
- (const char *)domainForPolicy;
- (char *)createDescription:(BOOL)a0;
- (void)dealloc;
- (unsigned long long)getHash;
- (id)copyEndpoint;

@end
