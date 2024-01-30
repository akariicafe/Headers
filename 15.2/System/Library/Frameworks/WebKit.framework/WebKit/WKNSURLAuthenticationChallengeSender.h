@class NSString;

@interface WKNSURLAuthenticationChallengeSender : NSObject <NSURLAuthenticationChallengeSender>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)a0;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)a0;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)a0;
- (void)useCredential:(id)a0 forAuthenticationChallenge:(id)a1;
- (void)cancelAuthenticationChallenge:(id)a0;

@end
