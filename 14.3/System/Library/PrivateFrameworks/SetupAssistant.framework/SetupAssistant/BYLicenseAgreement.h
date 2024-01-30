@interface BYLicenseAgreement : NSObject

+ (unsigned long long)versionOfAcceptedAgreement;
+ (void)recordUserAcceptedAgreementVersion:(unsigned long long)a0;
+ (unsigned long long)versionOfOnDiskAgreement;
+ (void)_clearAcceptedLicenseVersion;
+ (BOOL)needsToAcceptNewAgreement;

@end
