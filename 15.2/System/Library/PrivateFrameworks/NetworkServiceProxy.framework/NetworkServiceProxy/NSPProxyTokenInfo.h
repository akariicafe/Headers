@class NSPPrivacyProxyTokenRegistration, NSUUID, NWPath, NSDate, NSString, NSPPrivacyProxyProxyInfo, NSMutableArray, NSObject;
@protocol OS_dispatch_source, NSPProxyTokenDelegate;

@interface NSPProxyTokenInfo : NSObject <NSSecureCoding, NSCopying, NSPPrivacyProxyTokenRegistrationDelegate>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) id<NSPProxyTokenDelegate> delegate;
@property (retain, nonatomic) NSPPrivacyProxyProxyInfo *proxyInfo;
@property (retain, nonatomic) NSMutableArray *tokenInfoList;
@property (nonatomic) unsigned long long tokenCount;
@property (retain, nonatomic) NSPPrivacyProxyTokenRegistration *tokenRegistration;
@property (retain, nonatomic) NSUUID *tokenAgentUUID;
@property (retain, nonatomic) NWPath *tokenPath;
@property (nonatomic) BOOL tokenRequestPending;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *tokenFetchRetryTimer;
@property (nonatomic) unsigned long long tokenFetchRetryAttempt;
@property (nonatomic) BOOL tokenFetchRetryOnKeyOrNetworkChange;
@property (retain, nonatomic) NSDate *tokenFetchRetryDate;
@property (nonatomic) BOOL useDefaultInterface;
@property (nonatomic) BOOL subscriber;
@property (nonatomic) BOOL reportTokenFetchOutage;
@property (nonatomic) unsigned long long tokenFetchSuccessCount;
@property (nonatomic) unsigned long long tokenConsumedCount;
@property (nonatomic) unsigned long long tokenExpiredCount;
@property (nonatomic) unsigned long long tokenFetchFailedCount;
@property (nonatomic) unsigned long long agentLowWaterMarkHitCount;
@property (nonatomic) unsigned long long cacheLowWaterMarkHitCount;
@property (nonatomic) unsigned long long badTokenCount;
@property (nonatomic) unsigned long long missingTokenCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeExpiredTokens;
- (id)tierType;
- (void)handlePathChange:(id)a0;
- (void)addTokensToAgent;
- (void)cacheTokens:(id)a0 expirationTime:(id)a1;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)tokenLowWaterMarkReached;
- (void)encodeWithCoder:(id)a0;
- (void)handleTierChange:(BOOL)a0;
- (void)setup;
- (void)handleProxyKeyChanged;
- (void)setTokenFetchRetryInterval:(unsigned long long)a0;
- (unsigned long long)tokensFromKeychain;
- (void)removeFromKeychain;
- (void).cxx_destruct;
- (void)refreshTokenPool:(id /* block */)a0;
- (id)init;
- (double)retryIntervalFromHTTPResponse:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)reportErrorForTokenRegistration:(id)a0 error:(int)a1 withOptions:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)networkInterface;
- (BOOL)tokenFetchActive;
- (void)tokenFetchFailureWithHttpStatusCode:(long long)a0 error:(id)a1;
- (void)flushProxyTokens;
- (void)dealloc;
- (void)resetPendingFetches;
- (void)retryTokenFetchOnNetworkOrTokenKeyChangeFetch;
- (id)initWithDelegate:(id)a0 proxyInfo:(id)a1 path:(id)a2 subscriber:(BOOL)a3 useDefaultInterface:(BOOL)a4;
- (void)checkCachedTokenCount;
- (void)saveToKeychain;
- (void)requestTokensWithAccessToken:(id)a0 completionHandler:(id /* block */)a1;

@end
