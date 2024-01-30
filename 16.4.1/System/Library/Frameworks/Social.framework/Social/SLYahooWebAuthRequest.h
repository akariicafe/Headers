@class NSString;

@interface SLYahooWebAuthRequest : NSObject <SLWebAuthRequest_Internal, SLWebAuthRequest>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)_parametersForClientID:(id)a0 redirectURI:(id)a1 scope:(id)a2 username:(id)a3;
+ (id)authCodeFromURLRequest:(id)a0;
+ (void)clearCookiesFromStorage:(id)a0 authRequestURL:(id)a1;
+ (id)requestForURL:(id)a0;
+ (id)urlForClientID:(id)a0 redirectURI:(id)a1 scope:(id)a2 username:(id)a3 authRequestURL:(id)a4;
+ (id)urlForClientID:(id)a0 redirectURI:(id)a1 scope:(id)a2 username:(id)a3 authRequestURL:(id)a4 codeChallenge:(id)a5;
+ (BOOL)urlPageWillContainAuthorizationCode:(id)a0;
+ (id)urlRequestForClientID:(id)a0 redirectURI:(id)a1 scope:(id)a2 username:(id)a3 authRequestURL:(id)a4;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
