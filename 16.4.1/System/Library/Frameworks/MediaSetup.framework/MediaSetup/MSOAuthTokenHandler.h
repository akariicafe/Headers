@class CMSNetworkActivity, CMSAuthenticationCredential, NSURLSessionConfiguration, CMSAuthenticationConfiguration;

@interface MSOAuthTokenHandler : NSObject

@property (readonly, nonatomic) CMSNetworkActivity *parentNetworkActivity;
@property (retain, nonatomic) CMSNetworkActivity *networkActivity;
@property (readonly) CMSAuthenticationConfiguration *authorizationConfiguration;
@property (readonly) CMSAuthenticationCredential *authorizationCredential;
@property (readonly) NSURLSessionConfiguration *URLSessionConfiguration;

+ (id)tokenHandlerWithConfiguration:(id)a0 existingCredential:(id)a1 URLSessionConfiguration:(id)a2 parentNetworkActivity:(id)a3;

- (void).cxx_destruct;
- (void)fetchTokens:(id /* block */)a0;
- (id)initWithConfiguration:(id)a0 existingCredential:(id)a1 URLSessionConfiguration:(id)a2 parentNetworkActivity:(id)a3;
- (void)performTokenFetchTaskWithSession:(id)a0 bodyString:(id)a1 completionHandler:(id /* block */)a2;
- (void)performTokenGrantRequestWithSession:(id)a0 completionHandler:(id /* block */)a1;
- (void)performTokenRefreshWithSession:(id)a0 completionHandler:(id /* block */)a1;

@end
