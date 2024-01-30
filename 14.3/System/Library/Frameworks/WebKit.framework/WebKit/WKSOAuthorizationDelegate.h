@class NSString;

@interface WKSOAuthorizationDelegate : NSObject <SOAuthorizationDelegate> {
    struct RefPtr<WebKit::SOAuthorizationSession, WTF::DumbPtrTraits<WebKit::SOAuthorizationSession> > { struct SOAuthorizationSession *m_ptr; } _session;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSession:(struct RefPtr<WebKit::SOAuthorizationSession, WTF::DumbPtrTraits<WebKit::SOAuthorizationSession> > { struct SOAuthorizationSession *x0; } *)a0;
- (void)authorization:(id)a0 didCompleteWithHTTPAuthorizationHeaders:(id)a1;
- (void).cxx_destruct;
- (void)authorization:(id)a0 didCompleteWithError:(id)a1;
- (void)authorizationDidNotHandle:(id)a0;
- (id).cxx_construct;
- (void)authorization:(id)a0 presentViewController:(id)a1 withCompletion:(id /* block */)a2;
- (void)authorizationDidCancel:(id)a0;
- (void)authorizationDidComplete:(id)a0;
- (void)authorization:(id)a0 didCompleteWithHTTPResponse:(id)a1 httpBody:(id)a2;

@end
