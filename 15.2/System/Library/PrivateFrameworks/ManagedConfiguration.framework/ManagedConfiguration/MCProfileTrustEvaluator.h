@interface MCProfileTrustEvaluator : NSObject

- (BOOL)_verifyCerts:(id)a0 policy:(struct __SecPolicy { } *)a1;
- (BOOL)sanitizedProfileSignerCertificateChainIsAllowedToWriteDefaults:(id)a0;
- (BOOL)sanitizedProfileSignerCertificateChainIsAllowedToInstallUnsupportedPayload:(id)a0;
- (BOOL)sanitizedProfileSignerCertificateChainIsAllowedToInstallSupervisedRestrictionsOnUnsupervisedDevices:(id)a0;

@end
