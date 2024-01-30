@class NSString;

@interface FPItemID : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isDiskIdentifier;
@property (readonly, nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *providerDomainID;
@property (readonly, nonatomic) NSString *providerID;
@property (readonly, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic) NSString *providerIdentifier;

+ (id)rootItemIDWithProviderDomainID:(id)a0;
+ (id)coreSpotlightEncodedDomainIdentifier:(id)a0;
+ (void)getDomainIdentifier:(id *)a0 andIdentifier:(id *)a1 fromCoreSpotlightIdentifier:(id)a2;
+ (id)csIdentifierFromFPIdentifier:(id)a0 domainIdentifier:(id)a1;
+ (id)fpIdentifierFromCoreSpotlightIdentifier:(id)a0 domainIdentifier:(id)a1;
+ (id)rootItemIDWithProviderIdentifier:(id)a0 domainIdentifier:(id)a1;
+ (id)stringByRemovingPrefix:(id)a0 fromIdentifier:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void)setProviderDomainID:(id)a0;
- (id)transformForMigratedCloudDocsProviderDomainIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToItemID:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProviderID:(id)a0 domainIdentifier:(id)a1 itemIdentifier:(id)a2;
- (id)coreSpotlightIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)initWithProviderDomainID:(id)a0 itemIdentifier:(id)a1;
- (id)initWithProviderID:(id)a0 domainIdentifier:(id)a1 coreSpotlightIdentifier:(id)a2;
- (unsigned long long)hash;
- (id)initWithSearchableItem:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
