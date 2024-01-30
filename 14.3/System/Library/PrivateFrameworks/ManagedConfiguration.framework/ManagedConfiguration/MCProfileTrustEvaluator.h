@interface MCProfileTrustEvaluator : NSObject

- (BOOL)sanitizedProfileSignerCertificateChainIsAllowedToInstallSupervisedRestrictionsOnUnsupervisedDevices:(id)a0;
- (BOOL)sanitizedProfileSignerCertificateChainIsAllowedToWriteDefaults:(id)a0;
- (BOOL)sanitizedProfileSignerCertificateChainIsAllowedToInstallUnsupportedPayload:(id)a0;

@end
