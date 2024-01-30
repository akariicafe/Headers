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

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 callbackURLScheme:(id)a1 usingEphemeralSession:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)initWithURL:(id)a0 callbackURLScheme:(id)a1 completionHandler:(id /* block */)a2;
- (void)_invalidate;
- (BOOL)start;
- (BOOL)_startDryRun:(BOOL)a0;

@end
