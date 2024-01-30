@class NSString, NRDevice;

@interface HDWatchRemoteFeatureAvailabilityDataSource : NSObject <HKRemoteFeatureAvailabilityDataSource> {
    NRDevice *_device;
}

@property (copy, nonatomic) NSString *onboardingCountryCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)watchRegion;
- (id)initWithDevice:(id)a0;
- (struct { long long x0; long long x1; long long x2; })watchOSVersion;
- (id)watchProductType;
- (id)watchCompanionDevicePlatform;
- (struct { long long x0; long long x1; long long x2; })watchElectrocardiogramVersion;
- (id)watchBuildType;
- (void).cxx_destruct;
- (struct { long long x0; long long x1; long long x2; })iOSVersion;
- (struct { long long x0; long long x1; long long x2; })watchAtrialFibrillationDetectionVersion;
- (id)watchModelNumber;
- (id)watchOSBuildVersion;
- (id)iOSBuildVersion;

@end
