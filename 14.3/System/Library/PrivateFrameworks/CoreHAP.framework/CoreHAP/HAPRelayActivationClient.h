@protocol HAPRelayActivationClientDelegate;

@interface HAPRelayActivationClient : HMFObject

@property (weak) id<HAPRelayActivationClientDelegate> delegate;

- (void)close;
- (void).cxx_destruct;
- (void)open;
- (void)requestChallenge;
- (void)requestCertificateWithPublicKey:(id)a0 challengeCertificate:(id)a1 challengeResponse:(id)a2;

@end
