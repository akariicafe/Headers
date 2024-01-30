@class AMSURLSession, NSString, AMSMediaTokenServiceStore, AMSBagKeySet, ACAccount, AMSMediaTokenServiceThrottler, AMSMediaToken, NSObject, AMSProcessInfo;
@protocol OS_dispatch_queue, AMSBagProtocol;

@interface AMSMediaTokenService : NSObject <AMSBagConsumer, AMSMediaTokenServiceProtocol>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

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
@property (nonatomic) long long clientType;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSString *keychainAccessGroup;
@property (weak, nonatomic) AMSURLSession *session;
@property (readonly, nonatomic) NSString *clientVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (id)fetchMediaToken;
- (BOOL)_shouldReturnMediaToken:(id)a0;
- (void)invalidateMediaToken;
- (id)_fetchBagProperties;
- (id)initWithClientIdentifier:(id)a0 bag:(id)a1;
- (id)initWithClientIdentifier:(id)a0 tokenStore:(id)a1 bag:(id)a2;
- (id)_tokenRequestWithError:(id *)a0;
- (id)initWithClientIdentifier:(id)a0 clientVersion:(id)a1 bag:(id)a2;
- (BOOL)_shouldRefreshMediaToken:(id)a0;
- (void).cxx_destruct;
- (id)_fetchToken;
- (void)_refreshMediaTokenIfNeeded:(id)a0;
- (id)initWithClientIdentifier:(id)a0 keychainAccessGroup:(id)a1 bag:(id)a2;

@end
