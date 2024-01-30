@interface NEIKEv2AuthenticationProtocol : NSObject <NSCopying> {
    unsigned long long _method;
    unsigned long long _digitalSignatureAlgorithm;
}

@property (readonly, nonatomic) unsigned long long method;
@property (readonly, nonatomic) BOOL isCertificate;
@property (readonly, nonatomic) BOOL isDigitalSignature;
@property (readonly, nonatomic) unsigned long long digitalSignatureAlgorithm;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithMethod:(unsigned long long)a0;
- (id)initWithDigitalSignature:(unsigned long long)a0;

@end
