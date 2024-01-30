@interface DAEASOAuthRequest : NSObject

+ (id)requestForURL:(id)a0;
+ (BOOL)urlPageWillContainAuthorizationCode:(id)a0;
+ (id)authCodeFromRequest:(id)a0;
+ (id)errorDescriptionFromRequest:(id)a0;
+ (id)errorDomainFromRequest:(id)a0;
+ (id)stateFromRequest:(id)a0;
+ (id)urlForOAuthURI:(id)a0 clientID:(id)a1 redirectURI:(id)a2 scope:(id)a3 username:(id)a4 state:(id)a5 codeChallenge:(id)a6 codeChallengeMethod:(long long)a7;

@end
