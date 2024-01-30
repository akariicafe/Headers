@class NSString;

@interface PrivacyProxyInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *egressProxyURL;
@property (retain, nonatomic) NSString *ingressProxyURL;
@property (nonatomic) unsigned long long cachedEgressToken;
@property (nonatomic) unsigned long long cachedIngressToken;
@property (nonatomic) unsigned long long ingressAgentTokens;
@property (nonatomic) unsigned long long egressAgentTokens;
@property (nonatomic) unsigned long long ingressAgentLowWaterMark;
@property (nonatomic) unsigned long long egressAgentLowWaterMark;
@property (nonatomic) unsigned long long cacheEgressLowWaterMark;
@property (nonatomic) unsigned long long cacheIngressLowWaterMark;
@property (retain, nonatomic) NSString *egressFallbackProxyURL;
@property (retain, nonatomic) NSString *ingressFallbackProxyURL;
@property (nonatomic) unsigned long long cachedEgressFallbackToken;
@property (nonatomic) unsigned long long cachedIngressFallbackToken;
@property (nonatomic) unsigned long long ingressFallbackAgentTokens;
@property (nonatomic) unsigned long long egressFallbackAgentTokens;
@property (nonatomic) unsigned long long ingressFallbackAgentLowWaterMark;
@property (nonatomic) unsigned long long egressFallbackAgentLowWaterMark;
@property (nonatomic) unsigned long long cacheEgressFallbackLowWaterMark;
@property (nonatomic) unsigned long long cacheIngressFallbackLowWaterMark;
@property (nonatomic) unsigned long long deviceIdentityValidationCount;
@property (nonatomic) unsigned long long anisetteValidationCount;
@property (nonatomic) unsigned long long unactivatedTokenCount;
@property (nonatomic) unsigned long long activatedTokenCount;
@property (nonatomic) unsigned long long requestedTokenCount;
@property (nonatomic) unsigned long long proxyTokenFetchSuccessCount;
@property (nonatomic) unsigned long long proxyTokenFetchFailedCount;
@property (nonatomic) unsigned long long proxyTokenConsumedCount;
@property (nonatomic) unsigned long long proxyTokenExpiredCount;
@property (nonatomic) unsigned long long proxyAgentLowWaterMarkHitCount;
@property (nonatomic) unsigned long long proxyCacheLowWaterMarkHitCount;
@property (nonatomic) unsigned long long badTokenCount;
@property (nonatomic) unsigned long long missingTokenCount;
@property (nonatomic) unsigned long long networkProxiesRotated;
@property (nonatomic) unsigned long long networkFallbackProxiesRotated;
@property (nonatomic) unsigned long long proxiesRotated;
@property (nonatomic) unsigned long long configFetchedSuccessCount;
@property (nonatomic) unsigned long long configFetchedFailedCount;

- (id)diagnostics;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)serialize;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
