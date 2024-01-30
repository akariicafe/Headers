@class NSString, NSURLSession;

@interface NSPPrivacyTokenManager : NSObject

@property (nonatomic) Class authenticationClass;
@property (retain, nonatomic) NSString *tokenFetchURL;
@property (retain, nonatomic) NSURLSession *tokenFetchURLSession;
@property (nonatomic) unsigned long long totalRequestedTokenCount;
@property (nonatomic) unsigned long long totalUnactivatedTokenCount;
@property (nonatomic) unsigned long long totalActivatedTokenCount;
@property (retain, nonatomic) NSString *trueClientIPAddress;

+ (id)sharedTokenManager;

- (void)copyTokenInfo:(id)a0;
- (id)generateTokensUsingTokenBlinder:(id)a0 tokenCount:(unsigned long long)a1;
- (id)generateRandomTokens:(unsigned long long)a0;
- (id)description;
- (id)activateTokens:(id)a0 unactivatedListFromServer:(id)a1;
- (void)fetchPrivacyTokensOnInterface:(id)a0 tierType:(id)a1 proxyURL:(id)a2 tokenVendor:(id)a3 tokenIssuancePublicKey:(id)a4 tokenCount:(unsigned long long)a5 accessToken:(id)a6 completionHandler:(id /* block */)a7;
- (BOOL)updateTokenFetchURL:(id)a0 authenticationType:(int)a1 ignoreInvalidCerts:(BOOL)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
