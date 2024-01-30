@class NSString;

@interface SOAuthorizationResultClientImpl : NSObject <SOAuthorizationCoreDelegate>

@property (copy) id /* block */ authorizationHandleResponseCompletion;
@property (copy) id /* block */ authorizationHandleCredentialCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)authorization:(id)a0 didCompleteWithError:(id)a1;
- (void)authorization:(id)a0 didCompleteWithHTTPAuthorizationHeaders:(id)a1;
- (void)authorization:(id)a0 didCompleteWithHTTPResponse:(id)a1 httpBody:(id)a2;
- (void)authorizationDidCancel:(id)a0;
- (void)authorizationDidComplete:(id)a0;
- (void)authorizationDidNotHandle:(id)a0;

@end
