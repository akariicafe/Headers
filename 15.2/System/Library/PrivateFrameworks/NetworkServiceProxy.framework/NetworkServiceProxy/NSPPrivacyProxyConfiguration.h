@class NSPPrivacyProxyResolverInfo, NSString, NSPPrivacyProxyAuthenticationInfo, NSMutableArray;

@interface NSPPrivacyProxyConfiguration : PBCodable <NSCopying> {
    struct { unsigned char disableUntil : 1; unsigned char enabled : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL hasDisableUntil;
@property (nonatomic) unsigned long long disableUntil;
@property (retain, nonatomic) NSPPrivacyProxyAuthenticationInfo *authInfo;
@property (retain, nonatomic) NSMutableArray *policyTierMaps;
@property (retain, nonatomic) NSMutableArray *proxies;
@property (retain, nonatomic) NSMutableArray *pathWeights;
@property (retain, nonatomic) NSMutableArray *resolvers;
@property (nonatomic) unsigned int maxTokenNum;
@property (retain, nonatomic) NSMutableArray *fallbackPathWeights;
@property (readonly, nonatomic) BOOL hasRegionId;
@property (retain, nonatomic) NSString *regionId;
@property (readonly, nonatomic) BOOL hasBootstrapResolver;
@property (retain, nonatomic) NSPPrivacyProxyResolverInfo *bootstrapResolver;
@property (readonly, nonatomic) BOOL hasDnsProbe;
@property (retain, nonatomic) NSString *dnsProbe;

+ (Class)pathWeightsType;
+ (Class)resolversType;
+ (Class)proxiesType;
+ (Class)policyTierMapType;
+ (Class)fallbackPathWeightsType;

- (void)addProxies:(id)a0;
- (void)addFallbackPathWeights:(id)a0;
- (unsigned long long)pathWeightsCount;
- (id)proxiesAtIndex:(unsigned long long)a0;
- (unsigned long long)proxiesCount;
- (id)policyTierMapAtIndex:(unsigned long long)a0;
- (id)pathWeightsAtIndex:(unsigned long long)a0;
- (void)clearProxies;
- (unsigned long long)resolversCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addResolvers:(id)a0;
- (id)resolversAtIndex:(unsigned long long)a0;
- (void)addPathWeights:(id)a0;
- (void)clearResolvers;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addPolicyTierMap:(id)a0;
- (void)clearPathWeights;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fallbackPathWeightsAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (void)clearPolicyTierMaps;
- (unsigned long long)policyTierMapsCount;
- (unsigned long long)hash;
- (unsigned long long)fallbackPathWeightsCount;
- (void)clearFallbackPathWeights;
- (id)dictionaryRepresentation;

@end
