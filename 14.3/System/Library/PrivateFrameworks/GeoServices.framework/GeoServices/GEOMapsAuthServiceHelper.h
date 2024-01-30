@class NSString;

@interface GEOMapsAuthServiceHelper : NSObject <GEOConfigChangeListenerDelegate>

@property (class, readonly, nonatomic) GEOMapsAuthServiceHelper *sharedAuthHelper;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)_hasMAT;
- (BOOL)_checkACTokenResponseData:(id)a0 response:(id)a1 error:(id)a2 suppressNotification:(BOOL)a3;
- (void)valueChangedForGEOConfigKey:(struct { unsigned int x0; void *x1; })a0;
- (void)requestFeatureFlagsWithURL:(id)a0 suppressNotification:(BOOL)a1;
- (void)setConnectionProxyDictionary:(id)a0 url:(id)a1 proxyURL:(id)a2;
- (void)removeMapsAuthDidFinishObserver:(id)a0;
- (void)renewMapsAuthProxyToken:(unsigned long long)a0 fromToken:(id)a1 authProxyURL:(id)a2 suppressNotification:(BOOL)a3;
- (void)updateAuthenticatedFeatureFlagStatesWithDict:(id)a0;
- (BOOL)_successReplacingTokensFromMRTResponseData:(id)a0;
- (long long)_statusCodeFromResponse:(id)a0;
- (id)_tokenTypeString:(unsigned long long)a0;
- (BOOL)_checkMRTResponseData:(id)a0 response:(id)a1 error:(id)a2 suppressNotification:(BOOL)a3;
- (BOOL)_hasMRT;
- (void)addMapsAuthDidFinishObserver:(id)a0;
- (void)_handleFeatureFlagResponseData:(id)a0 response:(id)a1 error:(id)a2;
- (void)handleSecureProxyChallenge:(id)a0;
- (void)doEnvironmentSwitchCheck:(id)a0 authProxyURL:(id)a1 suppressNotification:(BOOL)a2;
- (void)sendProxyAuthNotification:(long long)a0;
- (void)addProxyAuthHeaderOrReAuth:(id)a0 authProxyURL:(id)a1;
- (id)dictionaryForAuthTokenState;

@end
