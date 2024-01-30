@interface NWOSBonjourEndpoint : NWConcrete_nw_endpoint {
    char *service_name;
    char *service_type;
    char *service_domain;
    char *service_composite;
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
