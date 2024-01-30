@class NSString, NRDevice;

@interface HDWatchRemoteFeatureAvailabilityDataSource : NSObject <HKRemoteFeatureAvailabilityDataSource> {
    NRDevice *_device;
}

@property (copy, nonatomic) NSString *onboardingCountryCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(id)a0;
- (struct { long long x0; long long x1; long long x2; })watchOSVersion;
- (struct { long long x0; long long x1; long long x2; })watchElectrocardiogramVersion;
- (id)watchRegionInfo;
- (id)watchOSBuildVersion;
- (id)iOSBuildVersion;
- (id)watchCompanionDevicePlatform;
- (id)watchModelNumber;
- (id)watchProductType;
- (struct { long long x0; long long x1; long long x2; })watchAtrialFibrillationDetectionVersion;
- (struct { long long x0; long long x1; long long x2; })iOSVersion;
- (id)watchBuildType;
- (void).cxx_destruct;
- (id)watchRegion;

@end
