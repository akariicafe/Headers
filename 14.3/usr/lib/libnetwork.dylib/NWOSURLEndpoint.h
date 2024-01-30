@interface NWOSURLEndpoint : NWConcrete_nw_endpoint {
    struct __CFURL { } *url_ref;
    unsigned short port;
    char *url;
    char *scheme;
    char *hostname;
    char *path;
    char *sanitized_url;
    char url_hash[9];
}

- (id)copyDictionary;
- (const char *)hostname;
- (unsigned short)port;
- (unsigned long long)getHash;
- (void)dealloc;
- (const char *)domainForPolicy;
- (unsigned int)type;
- (BOOL)isEqualToEndpoint:(id)a0 matchInterface:(BOOL)a1 matchParent:(BOOL)a2;
- (char *)createDescription:(BOOL)a0;
- (id)copyEndpoint;

@end
