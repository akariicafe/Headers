@class NSObject;
@protocol OS_dispatch_data;

@interface NWOSHostEndpoint : NWConcrete_nw_endpoint {
    char *hostname;
    unsigned short port;
    unsigned short priority;
    unsigned short weight;
    NSObject<OS_dispatch_data> *ech_config;
}

- (unsigned short)weight;
- (const char *)hostname;
- (id)copyDictionary;
- (unsigned short)port;
- (void)setPriority:(unsigned short)a0;
- (unsigned short)priority;
- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (unsigned int)type;
- (const char *)domainForPolicy;
- (char *)createDescription:(BOOL)a0;
- (void)setEchConfig:(id)a0;
- (void)dealloc;
- (unsigned long long)getHash;
- (void)setWeight:(unsigned short)a0;
- (id)echConfig;
- (void).cxx_destruct;
- (id)copyEndpoint;

@end
