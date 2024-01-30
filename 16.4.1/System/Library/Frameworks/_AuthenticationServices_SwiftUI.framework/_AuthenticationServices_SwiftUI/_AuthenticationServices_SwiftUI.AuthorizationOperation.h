@interface _AuthenticationServices_SwiftUI.AuthorizationOperation : NSOperation <ASAuthorizationControllerPresentationContextProviding, ASAuthorizationControllerDelegate> {
    void /* unknown type, empty encoding */ authorizationCompletionHandler;
    void /* unknown type, empty encoding */ presentationAnchorProvider;
    void /* unknown type, empty encoding */ requestContext;
    void /* unknown type, empty encoding */ stateStorage;
    void /* unknown type, empty encoding */ authorizationController;
    void /* unknown type, empty encoding */ presentationContextProvider;
}

@property (nonatomic, readonly) BOOL asynchronous;
@property (nonatomic, readonly) BOOL executing;
@property (nonatomic, readonly) BOOL finished;

- (id)presentationAnchorForAuthorizationController:(id)a0;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)cancel;
- (BOOL)isAsynchronous;
- (id)init;
- (void)start;
- (void).cxx_destruct;
- (void)authorizationController:(id)a0 didCompleteWithAuthorization:(id)a1;
- (void)authorizationController:(id)a0 didCompleteWithError:(id)a1;

@end
