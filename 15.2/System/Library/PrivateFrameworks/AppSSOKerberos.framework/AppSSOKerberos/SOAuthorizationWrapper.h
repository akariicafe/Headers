@class NSString, SOAuthorizationCore;

@interface SOAuthorizationWrapper : NSObject <SOAuthorizationCoreDelegate> {
    SOAuthorizationCore *_authorization;
}

@property (copy) id /* block */ authorizationCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)authorizationDidComplete:(id)a0;
- (void)authorizationDidNotHandle:(id)a0;
- (void)authorization:(id)a0 didCompleteWithHTTPResponse:(id)a1 httpBody:(id)a2;
- (void)authorization:(id)a0 didCompleteWithError:(id)a1;
- (void)authorization:(id)a0 didCompleteWithHTTPAuthorizationHeaders:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)authorizationDidCancel:(id)a0;
- (BOOL)canPerformAuthorizationWithURL:(id)a0 responseCode:(long long)a1;
- (void)beginAuthorizationWithOperation:(id)a0 url:(id)a1 httpHeaders:(id)a2 httpBody:(id)a3 andCompletion:(id /* block */)a4;

@end
