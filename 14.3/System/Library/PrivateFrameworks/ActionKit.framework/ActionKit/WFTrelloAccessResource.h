@class WFWebAuthenticationSessionPresentationContext;

@interface WFTrelloAccessResource : WFAccountAccessResource

@property (retain, nonatomic) WFWebAuthenticationSessionPresentationContext *presentationContext;

- (Class)accountClass;
- (void).cxx_destruct;
- (id)associatedAppIdentifier;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)authorizationURLWithCallbackURL:(id)a0;

@end
