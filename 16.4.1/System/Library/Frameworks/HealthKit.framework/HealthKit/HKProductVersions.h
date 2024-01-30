@interface HKProductVersions : NSObject

+ (id)watchElectrocardiogramRecordingVersionTwoUniqueDeviceIdentifier;
+ (id)_assembleUniqueDeviceIdentifierForDeviceType:(long long)a0 majorVersion:(id)a1 deviceIdentifier:(id)a2;
+ (id)_deviceIdentifierForProductName:(id)a0 key:(id)a1 error:(id *)a2;
+ (id)_infoDictionaryForProductWithName:(id)a0 error:(id *)a1;
+ (id)_productBuildVersion;
+ (id)activePairedDeviceSystemBuildVersion;
+ (id)featureAttributesForProductWithName:(id)a0 error:(id *)a1;
+ (id)majorVersionForProductWithName:(id)a0 error:(id *)a1;
+ (id)phoneElectrocardiogramRecordingUniqueDeviceIdentifier;
+ (id)productBuildVersionForDeviceType:(long long)a0;
+ (struct { long long x0; long long x1; long long x2; })semanticVersionForProductWithName:(id)a0 error:(id *)a1;
+ (id)uniqueDeviceIdentifierForProductWithName:(id)a0 error:(id *)a1;
+ (id)updateVersionForMajorVersion:(id)a0 productBuildVersion:(id)a1;
+ (id)versionForProductWithName:(id)a0 deviceType:(long long)a1 error:(id *)a2;
+ (id)versionForProductWithName:(id)a0 error:(id *)a1;
+ (id)watchElectrocardiogramRecordingUniqueDeviceIdentifier;
+ (id)yearOfReleaseForProductWithName:(id)a0 error:(id *)a1;

@end
