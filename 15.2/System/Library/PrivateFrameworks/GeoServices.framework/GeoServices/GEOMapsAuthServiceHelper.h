@class NSString, geo_isolater;

@interface GEOMapsAuthServiceHelper : NSObject <GEOConfigChangeListenerDelegate, GEOResourceManifestTileGroupObserver> {
    struct atomic_flag { _Atomic BOOL _Value; } _isRenewing;
    NSString *_currentToken;
    geo_isolater *_currentEnvironmentStateIsolater;
    unsigned long long _currentEnvironmentState;
}

@property (class, readonly, nonatomic) GEOMapsAuthServiceHelper *sharedAuthHelper;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)valueChangedForGEOConfigKey:(struct { unsigned int x0; void *x1; })a0;
- (void)addMapsAuthDidFinishObserver:(id)a0 forRequestType:(id)a1;
- (void)doEnvironmentSwitchCheck:(id)a0 authProxyURL:(id)a1 suppressNotification:(BOOL)a2;
- (id)dictionaryForAuthTokenState;
- (void)requestFeatureFlagsWithURL:(id)a0 suppressNotification:(BOOL)a1;
- (BOOL)updateAuthenticatedFeatureFlagStatesWithDict:(id)a0;
- (void)renewMapsAuthProxyToken:(unsigned long long)a0 fromToken:(id)a1 authProxyURL:(id)a2 suppressNotification:(BOOL)a3;
- (void)handleSecureProxyChallenge:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)autoUpdateClientFeatureFlags;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;
- (void)checkNetworkError:(id)a0 sendingGeoDErrorIfApplicable:(long long)a1;
- (BOOL)isCurrentEnvironmentSecure;
- (void)addMapsAuthDidFinishObserver:(id)a0;
- (void)removeMapsAuthDidFinishObserver:(id)a0;
- (void)setConnectionProxyDictionary:(id)a0 url:(id)a1 proxyURL:(id)a2;
- (void)addProxyAuthHeaderOrReAuth:(id)a0 authProxyURL:(id)a1;
- (void)sendProxyAuthNotification:(long long)a0;
- (void)invalidateTokens;
- (void)removeMapsAuthDidFinishObserver:(id)a0 forRequestType:(id)a1;

@end
