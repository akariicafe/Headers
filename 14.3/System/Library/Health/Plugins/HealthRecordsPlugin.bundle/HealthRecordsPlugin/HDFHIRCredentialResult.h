@class HDFHIRAuthResponse, _HDWrappedFHIRCredential, NSError, HDFHIRCredential;

@interface HDFHIRCredentialResult : NSObject

@property (readonly, nonatomic) _HDWrappedFHIRCredential *wrappedCredential;
@property (readonly, copy, nonatomic) HDFHIRCredential *credential;
@property (readonly, copy, nonatomic) HDFHIRAuthResponse *authResponse;
@property (readonly, copy, nonatomic) NSError *refreshError;
@property (readonly) BOOL shouldRefresh;

- (void).cxx_destruct;
- (void)invalidate;
- (id)_initWithCredential:(id)a0 authResponse:(id)a1;
- (id)_resultWithAuthResponse:(id)a0;
- (id)_resultWithRefreshError:(id)a0;
- (id)_initWithWrappedCredential:(id)a0 authResponse:(id)a1 refreshError:(id)a2;
- (void)didRefreshCredential:(id)a0;

@end
