@interface NEIKEv2AuthenticationProtocol : NSObject <NSCopying>

@property (nonatomic) unsigned long long method;
@property (nonatomic) unsigned long long digitalSignatureAlgorithm;
@property (readonly, nonatomic) BOOL isCertificate;
@property (readonly, nonatomic) BOOL isDigitalSignature;

- (id)initWithMethod:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDigitalSignature:(unsigned long long)a0;
- (id)initWithDigitalSignathure:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
