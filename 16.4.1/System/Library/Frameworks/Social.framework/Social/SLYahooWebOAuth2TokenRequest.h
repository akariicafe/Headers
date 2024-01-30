@class NSString;

@interface SLYahooWebOAuth2TokenRequest : NSObject <SLWebOAuth2TokenRequest>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_urlRequestForParams:(id)a0 clientID:(id)a1 secret:(id)a2 tokenURL:(id)a3;
+ (id)urlRequestForClientID:(id)a0 secret:(id)a1 redirectURI:(id)a2 authCode:(id)a3 tokenURL:(id)a4;
+ (id)urlRequestForClientID:(id)a0 secret:(id)a1 redirectURI:(id)a2 authCode:(id)a3 tokenURL:(id)a4 codeVerifier:(id)a5;
+ (id)urlRequestForClientID:(id)a0 secret:(id)a1 refreshToken:(id)a2 tokenURL:(id)a3;


@end
