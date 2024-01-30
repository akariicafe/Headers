@class NSString, NSArray;

@interface VSAccountMetadataRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *channelIdentifier;
@property (copy, nonatomic) NSArray *supportedAccountProviderIdentifiers;
@property (copy, nonatomic) NSArray *featuredAccountProviderIdentifiers;
@property (copy, nonatomic) NSString *verificationToken;
@property (nonatomic) BOOL includeAccountProviderIdentifier;
@property (nonatomic) BOOL includeAuthenticationExpirationDate;
@property (copy, nonatomic) NSString *localizedVideoTitle;
@property (nonatomic, getter=isInterruptionAllowed) BOOL interruptionAllowed;
@property (nonatomic) BOOL forceAuthentication;
@property (copy, nonatomic) NSArray *attributeNames;
@property (copy, nonatomic) NSArray *supportedAuthenticationSchemes;
@property (copy, nonatomic) NSString *accountProviderAuthenticationToken;
@property (copy, nonatomic) NSArray *applicationAccountProviders;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
