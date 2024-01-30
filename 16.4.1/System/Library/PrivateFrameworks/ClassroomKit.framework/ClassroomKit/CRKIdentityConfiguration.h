@class NSString, NSData;

@interface CRKIdentityConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) long long defaultKeySizeInBits;
@property (class, readonly) unsigned int defaultHashingAlgorithm;
@property (class, readonly) BOOL defaultCreatesCertificateAuthority;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *commonName;
@property (readonly, copy, nonatomic) NSData *dataRepresentation;
@property (nonatomic) long long keySizeInBits;
@property (nonatomic) BOOL createsCertificateAuthority;
@property (nonatomic) unsigned int hashingAlgorithm;
@property (nonatomic) BOOL addsClientAuthAndServerAuthEKUs;
@property (copy, nonatomic) NSString *emailAddress;

+ (id)configurationWithData:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCommonName:(id)a0;

@end
