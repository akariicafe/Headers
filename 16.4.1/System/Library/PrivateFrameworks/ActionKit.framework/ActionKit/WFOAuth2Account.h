@class WFOAuth2Credential;

@interface WFOAuth2Account : WFAccount

@property (copy, nonatomic) WFOAuth2Credential *credential;

+ (id)clientID;
+ (id)sessionManager;
+ (id)scopes;
+ (id)migrate:(id)a0;
+ (id)responseType;
+ (id)clientSecret;
+ (id)redirectURI;
+ (id)accountWithCredential:(id)a0;

- (BOOL)isValid;
- (void).cxx_destruct;
- (void)refreshWithCompletionHandler:(id /* block */)a0;

@end
