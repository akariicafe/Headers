@class NSURLSession, NSString, NSArray, NSObject;
@protocol OS_nw_resolver;

@interface NSPPrivacyTokenManager : NSObject {
    Class _authenticationClass;
    NSString *_tokenFetchURL;
    NSString *_accessTokenURL;
    NSArray *_accessTokenTypes;
    NSURLSession *_tokenFetchURLSession;
    unsigned long long _totalRequestedTokenCount;
    unsigned long long _totalUnactivatedTokenCount;
    unsigned long long _totalActivatedTokenCount;
    NSString *_trueClientIPAddress;
    NSObject<OS_nw_resolver> *_tokenEndpointResolver;
}

+ (id)sharedTokenManager;

- (void)copyTokenInfo:(id)a0;
- (BOOL)updateTokenFetchURL:(id)a0 accessTokenURL:(id)a1 accessTokenTypes:(id)a2 authenticationType:(int)a3 ignoreInvalidCerts:(BOOL)a4;
- (void)getTokenServerIPWithInterface:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchPrivacyTokensOnInterface:(id)a0 tierType:(id)a1 proxyURL:(id)a2 tokenVendor:(id)a3 tokenIssuancePublicKey:(id)a4 tokenCount:(unsigned long long)a5 accessToken:(id)a6 retryAttempt:(unsigned long long)a7 completionHandler:(id /* block */)a8;
- (id)tokenFetchURL;
- (void)dealloc;
- (void)fetchPrivateAccessTokenForChallenge:(id)a0 tokenKey:(id)a1 originNameKey:(id)a2 selectedOrigin:(id)a3 auditToken:(id)a4 bundleID:(id)a5 allowTools:(BOOL)a6 accessToken:(id)a7 completionHandler:(id /* block */)a8;
- (id)description;
- (void).cxx_destruct;

@end
