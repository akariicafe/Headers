@interface NWOSAppleServiceEndpoint : NWConcrete_nw_endpoint {
    char *apple_id;
    char *service;
}

- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (id)copyDictionary;
- (char *)createDescription:(BOOL)a0;
- (id)copyEndpoint;
- (unsigned int)type;
- (void)dealloc;

@end
