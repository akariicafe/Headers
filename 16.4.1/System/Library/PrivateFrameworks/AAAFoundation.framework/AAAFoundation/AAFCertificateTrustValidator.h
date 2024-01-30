@interface AAFCertificateTrustValidator : NSObject

- (long long)validateCertificateTrustWithChallenge:(id)a0 type:(unsigned long long)a1;
- (BOOL)_trySSLPinning:(id)a0;
- (BOOL)_checkPinningPolicy:(id)a0 type:(unsigned long long)a1;
- (struct __SecPolicy { } *)_policyForType:(unsigned long long)a0 host:(id)a1;

@end
