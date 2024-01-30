@class SFAuthenticationSession;
@protocol ASWebAuthenticationPresentationContextProviding;

@interface ASWebAuthenticationSession : NSObject {
    SFAuthenticationSession *_authenticationSession;
    id /* block */ _originalCompletionHandler;
    ASWebAuthenticationSession *_referenceToSelf;
}

@property (weak, nonatomic) id<ASWebAuthenticationPresentationContextProviding> presentationContextProvider;
@property (nonatomic) BOOL prefersEphemeralWebBrowserSession;
@property (readonly, nonatomic) BOOL canStart;

- (void)_invalidate;
- (BOOL)start;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithURL:(id)a0 callbackURLScheme:(id)a1 usingEphemeralSession:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)initWithURL:(id)a0 callbackURLScheme:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_startDryRun:(BOOL)a0;

@end
