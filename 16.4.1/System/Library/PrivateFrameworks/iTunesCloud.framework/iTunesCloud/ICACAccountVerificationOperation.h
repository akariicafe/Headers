@class NSString;

@interface ICACAccountVerificationOperation : ICUserVerificationOperation <AMSAuthenticateTaskDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)execute;
- (void)finishWithError:(id)a0;
- (void)authenticateTask:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;

@end
