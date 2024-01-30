@class WFOAuth2SessionManager, NSString, ASWebAuthenticationSession, WFWebAuthenticationSessionPresentationContext, NSURL;

@interface WFOAuth2WebAuthorizationSession : NSObject <WFOAuth2AuthorizationSession>

@property (readonly, nonatomic) WFOAuth2SessionManager *sessionManager;
@property (readonly, copy, nonatomic) NSString *responseType;
@property (readonly, nonatomic) NSString *state;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) ASWebAuthenticationSession *authenticationSession;
@property (retain, nonatomic) WFWebAuthenticationSessionPresentationContext *presentationContext;
@property (readonly, nonatomic) NSString *responseKey;
@property (readonly, copy, nonatomic) NSURL *authorizationURL;
@property (readonly, copy, nonatomic) NSURL *redirectURI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)authenticationSessionWithPresentationAnchor:(id)a0;
- (BOOL)resumeSessionWithURL:(id)a0;
- (id)initWithSessionManager:(id)a0 authorizationURL:(id)a1 responseType:(id)a2 redirectURI:(id)a3 specifyRedirectURI:(BOOL)a4 completionHandler:(id /* block */)a5;
- (BOOL)resumeSessionWithResponseObject:(id)a0;

@end
