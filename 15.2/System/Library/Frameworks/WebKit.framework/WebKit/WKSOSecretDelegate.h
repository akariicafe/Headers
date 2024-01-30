@class NSString;

@interface WKSOSecretDelegate : NSObject <WKNavigationDelegate, WKUIDelegate> {
    struct WeakPtr<WebKit::PopUpSOAuthorizationSession, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> { void *m_ptr; } m_impl; } _session;
    BOOL _isFirstNavigation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webViewDidClose:(id)a0;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (id)initWithSession:(void *)a0;
- (void).cxx_destruct;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (id).cxx_construct;

@end
