@class NSString;

@interface WKASCAuthorizationPresenterDelegate : NSObject <ASCAuthorizationPresenterDelegate> {
    struct WeakPtr<WebKit::AuthenticatorPresenterCoordinator, WTF::DefaultWeakPtrImpl> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _coordinator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoordinator:(void *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)authorizationPresenter:(id)a0 credentialRequestedForLoginChoice:(id)a1 authenticatedContext:(id)a2 completionHandler:(id /* block */)a3;
- (void)authorizationPresenter:(id)a0 validateUserEnteredPIN:(id)a1 completionHandler:(id /* block */)a2;
- (void)dispatchCoordinatorCallback:(void *)a0;

@end
