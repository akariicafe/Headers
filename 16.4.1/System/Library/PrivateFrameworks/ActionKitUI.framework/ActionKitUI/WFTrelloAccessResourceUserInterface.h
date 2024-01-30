@class NSString;

@interface WFTrelloAccessResourceUserInterface : WFActionUserInterface <WFTrelloAccessResourceUserInterfaceProtocol, ASWebAuthenticationPresentationContextProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)presentationAnchorForWebAuthenticationSession:(id)a0;
- (void)authorizeWithCompletionHandler:(id /* block */)a0;
- (id)authorizationURLWithCallbackURL:(id)a0;

@end
