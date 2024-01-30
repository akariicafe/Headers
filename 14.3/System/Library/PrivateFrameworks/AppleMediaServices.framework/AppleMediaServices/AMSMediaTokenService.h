@class AMSURLSession, NSString, AMSMediaTokenServiceStore, AMSBagKeySet, ACAccount, AMSMediaTokenServiceThrottler, AMSMediaToken, NSObject, AMSProcessInfo;
@protocol OS_dispatch_queue, AMSBagProtocol;

@interface AMSMediaTokenService : NSObject <AMSBagConsumer_Project, AMSBagConsumer, AMSMediaTokenServiceProtocol>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (retain, nonatomic) AMSMediaToken *cachedMediaToken;
@property (readonly, nonatomic) AMSMediaTokenServiceThrottler *throttler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *tokenFetchQueue;
@property (readonly, nonatomic) AMSMediaTokenServiceStore *tokenStore;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) double refreshPercentage;
@property (nonatomic) double refreshTime;
@property (nonatomic) BOOL URLKnownToBeTrusted;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSString *keychainAccessGroup;
@property (weak, nonatomic) AMSURLSession *session;
@property (readonly, nonatomic) NSString *clientVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addRequiredBagKeysToAggregator:(id)a0;
+ (id)createBagForSubProfile;

- (BOOL)_shouldRefreshMediaToken:(id)a0;
- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)a0 bag:(id)a1;
- (id)_fetchToken;
- (id)initWithClientIdentifier:(id)a0 keychainAccessGroup:(id)a1 bag:(id)a2;
- (id)initWithClientIdentifier:(id)a0 clientVersion:(id)a1 bag:(id)a2;
- (id)fetchMediaToken;
- (void)_refreshMediaTokenIfNeeded:(id)a0;
- (id)_fetchBagProperties;
- (void)invalidateMediaToken;
- (id)_tokenRequestWithError:(id *)a0;
- (BOOL)_shouldReturnMediaToken:(id)a0;

@end
