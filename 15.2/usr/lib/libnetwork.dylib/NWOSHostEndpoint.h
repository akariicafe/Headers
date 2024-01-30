@class NSObject;
@protocol OS_dispatch_data, OS_nw_txt_record;

@interface NWOSHostEndpoint : NWConcrete_nw_endpoint {
    char *hostname;
    unsigned short port;
    unsigned short priority;
    unsigned short weight;
    NSObject<OS_nw_txt_record> *txt_record;
    NSObject<OS_dispatch_data> *ech_config;
}

- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (const char *)hostname;
- (id)echConfig;
- (unsigned short)weight;
- (id)copyDictionary;
- (void)setPriority:(unsigned short)a0;
- (void)setWeight:(unsigned short)a0;
- (const char *)domainForPolicy;
- (unsigned long long)getHash;
- (void).cxx_destruct;
- (unsigned short)priority;
- (void)setEchConfig:(id)a0;
- (char *)createDescription:(BOOL)a0;
- (id)copyEndpoint;
- (unsigned int)type;
- (id)txtRecord;
- (unsigned short)port;
- (void)dealloc;
- (void)setTxtRecord:(id)a0;

@end
