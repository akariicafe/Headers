@class NSString;

@interface WKASCAuthorizationPresenterDelegate : NSObject <ASCAuthorizationPresenterDelegate> {
    struct WeakPtr<WebKit::AuthenticatorPresenterCoordinator, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> { void *m_ptr; } m_impl; } _coordinator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoordinator:(void *)a0;
- (void)dispatchCoordinatorCallback:(void *)a0;
- (void)authorizationPresenter:(id)a0 credentialRequestedForLoginChoice:(id)a1 authenticatedContext:(id)a2 completionHandler:(id /* block */)a3;
- (void)authorizationPresenter:(id)a0 validateUserEnteredPIN:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
