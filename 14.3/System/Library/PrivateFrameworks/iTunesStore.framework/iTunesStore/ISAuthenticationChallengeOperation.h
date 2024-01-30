@class ISAuthenticationChallenge, NSURLCredential;

@interface ISAuthenticationChallengeOperation : ISDialogOperation

@property (retain) NSURLCredential *credential;
@property (retain) ISAuthenticationChallenge *challenge;

+ (id)operationWithChallenge:(id)a0;

- (void)run;
- (void)dealloc;
- (void)handleButtonSelected:(long long)a0 withResponseDictionary:(id)a1;
- (id)_copyCredentialForSignInResponseDictionary:(id)a0;

@end
