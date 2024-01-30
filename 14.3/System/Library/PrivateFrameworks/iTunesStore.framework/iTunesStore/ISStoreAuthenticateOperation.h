@class NSString, SSAuthenticationContext, SSAuthenticateResponse, SSMutableAuthenticationContext;

@interface ISStoreAuthenticateOperation : ISOperation <SSAuthenticateRequestDelegate> {
    SSMutableAuthenticationContext *_authenticationContext;
    SSAuthenticateResponse *_authenticateResponse;
}

@property (retain) id parentViewController;
@property (readonly) SSAuthenticationContext *authenticationContext;
@property (readonly) SSAuthenticateResponse *authenticateResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_copyErrorForAuthenticateResponse:(id)a0 error:(id *)a1;

- (id)uniqueKey;
- (void)run;
- (void)dealloc;
- (id)initWithAuthenticationContext:(id)a0;
- (id)authenticatedAccountDSID;
- (void)_handleAuthenticateResponse:(id)a0;

@end
