@class WFOAuth2Credential;

@interface WFOAuth2Account : WFAccount

@property (copy, nonatomic) WFOAuth2Credential *credential;

+ (id)scopes;
+ (id)migrate:(id)a0;
+ (id)sessionManager;
+ (id)clientID;
+ (id)responseType;
+ (id)clientSecret;
+ (id)redirectURI;
+ (id)accountWithCredential:(id)a0;

- (void)refreshWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isValid;

@end
