@interface HKElectrocardiogramActiveAlgorithmVersion : NSObject

+ (id)_maxKnownAlgorithmVersionOnboardedWithKeyValueDomain:(id)a0;
+ (unsigned long long)onboardingVersionForKnownAlgorithmVersion:(long long)a0;
+ (id)versionWithHealthStore:(id)a0 error:(id *)a1;
+ (id)knownAlgorithmVersionFromOnboardedVersion:(id)a0 keyValueDomain:(id)a1;
+ (long long)algorithmVersionForOnboardingVersion:(long long)a0;

@end
