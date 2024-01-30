@class NSObject;
@protocol OS_nw_txt_record;

@interface NWOSBonjourEndpoint : NWConcrete_nw_endpoint {
    char *service_name;
    char *service_type;
    char *service_domain;
    char *service_composite;
    NSObject<OS_nw_txt_record> *txt_record;
}

- (id)copyDictionary;
- (void).cxx_destruct;
- (unsigned long long)getHash;
- (void)dealloc;
- (const char *)domainForPolicy;
- (void)setTxtRecord:(id)a0;
- (id)txtRecord;
- (unsigned int)type;
- (BOOL)isEqualToEndpoint:(id)a0 matchInterface:(BOOL)a1 matchParent:(BOOL)a2;
- (char *)createDescription:(BOOL)a0;
- (id)copyEndpoint;

@end
