@class NSObject;
@protocol OS_nw_txt_record;

@interface NWOSBonjourEndpoint : NWConcrete_nw_endpoint {
    char *service_name;
    char *service_type;
    char *service_domain;
    char *service_composite;
    NSObject<OS_nw_txt_record> *txt_record;
}

- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (id)copyDictionary;
- (const char *)domainForPolicy;
- (unsigned long long)getHash;
- (void).cxx_destruct;
- (char *)createDescription:(BOOL)a0;
- (id)copyEndpoint;
- (unsigned int)type;
- (id)txtRecord;
- (void)dealloc;
- (void)setTxtRecord:(id)a0;

@end
