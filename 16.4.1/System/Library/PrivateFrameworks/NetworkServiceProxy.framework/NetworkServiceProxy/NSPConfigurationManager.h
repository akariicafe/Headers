@class NSTimer, NSString, NWPath, NSURLSession, NSDate, NSDictionary, NSObject, NSPConfiguration;
@protocol OS_dispatch_source, NSPConfigurationManagerDelegate;

@interface NSPConfigurationManager : NSObject {
    BOOL _isConfigFetchRequestPending;
    BOOL _configFetchOnNetworkChange;
    BOOL _useDefaultInterface;
    unsigned long long _effectiveUserTier;
    NSObject<NSPConfigurationManagerDelegate> *_delegate;
    NSPConfiguration *_configuration;
    NSTimer *_resurrectionTimer;
    NSTimer *_enableCheckTimer;
    unsigned long long _generation;
    NWPath *_path;
    NSObject<OS_dispatch_source> *_configFetchRetryTimer;
    unsigned long long _configFetchRetryAttempt;
    NSURLSession *_configFetchSession;
    NSDate *_configFetchRetryDate;
    unsigned long long _configFetchSuccessCount;
    unsigned long long _configFetchFailedCount;
    NSString *_trueClientIPAddress;
    NSDictionary *_networkCharacteristics;
}

@property (readonly) unsigned long long effectiveUserTier;

- (void)updateConfiguration:(id)a0;
- (id)diagnostics;
- (void)setPrivateAccessTokensAllowTools:(BOOL)a0;
- (BOOL)setUserTier:(unsigned long long)a0 resetDate:(id)a1;
- (void)setGeohashSharingPreference:(BOOL)a0;
- (void)handlePathChange:(id)a0;
- (void)setup;
- (BOOL)getGeohashSharingPreference;
- (void)publishDailyConfigurationStats;
- (void)setPrivateAccessTokensEnabled:(BOOL)a0;
- (void)setConfigurationTrialVersion:(long long)a0;
- (unsigned long long)getPrivacyProxyAccountType;
- (void)dealloc;
- (void)copyProxyInfo:(id)a0;
- (id)currentConfiguration;
- (void)setGeohashOverride:(id)a0;
- (id)initWithDelegate:(id)a0 configuration:(id)a1;
- (void)setProxyTrafficState:(unsigned long long)a0 proxyTraffic:(unsigned long long)a1;
- (void)refreshConfigurationWithReason:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)configurationSubscriberPoliciesCount;
- (void)resetConfigurationManager;
- (void)configurationEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)getPrivateAccessTokensEnabled;
- (void)setPreferredPathRoutingEnabled:(BOOL)a0;
- (void)setProxyAccountType:(unsigned long long)a0;
- (id)mergeProxyTrafficStateWithCurrentPolicy;

@end
