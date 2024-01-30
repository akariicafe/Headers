@interface NWOSApplicationServiceEndpoint : NWConcrete_nw_endpoint {
    char *apple_id;
    char *application_service;
    unsigned char service_identifier[16];
}

- (id)copyDictionary;
- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (unsigned int)type;
- (char *)createDescription:(BOOL)a0;
- (void)dealloc;
- (id)copyEndpoint;

@end
