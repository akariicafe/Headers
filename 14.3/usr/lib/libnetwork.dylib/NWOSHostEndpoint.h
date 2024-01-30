@class NSObject;
@protocol OS_nw_txt_record;

@interface NWOSHostEndpoint : NWConcrete_nw_endpoint {
    char *hostname;
    unsigned short port;
    unsigned short priority;
    unsigned short weight;
    NSObject<OS_nw_txt_record> *txt_record;
}

- (id)copyDictionary;
- (const char *)hostname;
- (unsigned short)port;
- (void)setPriority:(unsigned short)a0;
- (void)setWeight:(unsigned short)a0;
- (void).cxx_destruct;
- (unsigned long long)getHash;
- (void)dealloc;
- (const char *)domainForPolicy;
- (unsigned short)priority;
- (void)setTxtRecord:(id)a0;
- (id)txtRecord;
- (unsigned int)type;
- (BOOL)isEqualToEndpoint:(id)a0 matchInterface:(BOOL)a1 matchParent:(BOOL)a2;
- (char *)createDescription:(BOOL)a0;
- (unsigned short)weight;
- (id)copyEndpoint;

@end
