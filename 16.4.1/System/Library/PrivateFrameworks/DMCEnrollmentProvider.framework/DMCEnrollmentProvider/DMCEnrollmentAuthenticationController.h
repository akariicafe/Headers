@interface DMCEnrollmentAuthenticationController : NSObject

- (void)authenticateWithAuthenticationResults:(id)a0 ephemeral:(BOOL)a1 requireAppleMAID:(BOOL)a2 presentingViewController:(id)a3 completionHandler:(id /* block */)a4;
- (void)authenticateWithUsername:(id)a0 password:(id)a1 ephemeral:(BOOL)a2 requireAppleMAID:(BOOL)a3 presentingViewController:(id)a4 completionHandler:(id /* block */)a5;
- (void)fetchAuthenticationModeForUsername:(id)a0 requireAppleMAID:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
