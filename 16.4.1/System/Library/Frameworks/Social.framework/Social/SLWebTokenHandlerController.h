@class NSObject;
@protocol SLWebClient, OS_dispatch_queue;

@interface SLWebTokenHandlerController : NSObject {
    NSObject<OS_dispatch_queue> *_webClientQueue;
}

@property (readonly) id<SLWebClient> webClient;

+ (id)emailAddressFromIdToken:(id)a0;

- (void).cxx_destruct;
- (void)_exchangeAuthCode:(id)a0 usingRedirect:(id)a1 codeVerifier:(id)a2 forTokensWithCompletion:(id /* block */)a3;
- (void)_fetchNamesForToken:(id)a0 idToken:(id)a1 completion:(id /* block */)a2;
- (void)_fetchNamesForToken:(id)a0 usingFallbackURL:(id)a1 completion:(id /* block */)a2;
- (void)exchangeAuthCode:(id)a0 usingRedirect:(id)a1 codeVerifier:(id)a2 forTokensAndUsernameWithCompletion:(id /* block */)a3;
- (id)initWithWebClient:(id)a0;

@end
