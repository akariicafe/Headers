@class VSAccountProviderResponse, NSString, NSData, NSDate;

@interface VSAccountMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountProviderIdentifier;
@property (copy, nonatomic) NSDate *authenticationExpirationDate;
@property (copy, nonatomic) NSData *verificationData;
@property (retain, nonatomic) VSAccountProviderResponse *accountProviderResponse;
@property (readonly, copy, nonatomic) NSString *SAMLAttributeQueryResponse;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
