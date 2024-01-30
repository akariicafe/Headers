@interface BYLicenseAgreement : NSObject

+ (void)recordUserAcceptedAgreementVersion:(unsigned long long)a0;
+ (BOOL)needsToAcceptNewAgreement;
+ (void)_clearAcceptedLicenseVersion;
+ (unsigned long long)versionOfOnDiskAgreement;
+ (unsigned long long)versionOfAcceptedAgreement;

@end
