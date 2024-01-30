@class NSString;

@interface WebCoreAuthenticationClientAsChallengeSender : NSObject <NSURLAuthenticationChallengeSender> {
    struct AuthenticationClient { void /* function */ **x0; } *m_client;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelAuthenticationChallenge:(id)a0;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)a0;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)a0;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)a0;
- (void)useCredential:(id)a0 forAuthenticationChallenge:(id)a1;
- (struct AuthenticationClient { void /* function */ **x0; } *)client;
- (void)detachClient;
- (id)initWithAuthenticationClient:(struct AuthenticationClient { void /* function */ **x0; } *)a0;

@end
