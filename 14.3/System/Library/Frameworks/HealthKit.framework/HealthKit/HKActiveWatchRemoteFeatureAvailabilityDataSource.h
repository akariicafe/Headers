@class NSString, NRPairedDeviceRegistry;

@interface HKActiveWatchRemoteFeatureAvailabilityDataSource : NSObject <HKRemoteFeatureAvailabilityDataSource>

@property (retain, nonatomic) NRPairedDeviceRegistry *pairedDeviceRegistry;
@property (copy, nonatomic) NSString *electrocardiogramOnboardingCountryCode;
@property (copy, nonatomic) NSString *atrialFibrillationDetectionOnboardingCountryCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_activeWatch;
- (id)watchBuildType;
- (id)watchModelNumber;
- (struct { long long x0; long long x1; long long x2; })_operatingSystemVersionForWatchOSVersion:(unsigned int)a0;
- (id)watchCompanionDevicePlatform;
- (id)watchProductType;
- (struct { long long x0; long long x1; long long x2; })watchElectrocardiogramVersion;
- (id)watchOSBuildVersion;
- (struct { long long x0; long long x1; long long x2; })watchOSVersion;
- (struct { long long x0; long long x1; long long x2; })watchAtrialFibrillationDetectionVersion;
- (id)watchRegion;

@end
