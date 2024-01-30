@interface BYLicenseAgreement : NSObject

+ (unsigned long long)versionOfOnDiskAgreement;
+ (void)_clearAcceptedLicenseVersion;
+ (BOOL)needsToAcceptNewAgreement;
+ (unsigned long long)versionOfAcceptedAgreement;
+ (void)recordUserAcceptedAgreementVersion:(unsigned long long)a0;

@end
