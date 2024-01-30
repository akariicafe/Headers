@class NSDictionary, NSString;

@interface HDHRCardioFitnessPairedDeviceSupportedRegionProvider : NSObject <HDHRCardioFitnessPairedDeviceSupportedRegionProviding> {
    NSDictionary *_localSupportedRegions;
    NSString *_deviceProperty;
}

- (void).cxx_destruct;
- (id)initWithLocalSupportedRegions:(id)a0;
- (id)watchSupportedRegionsOnDevice:(id)a0;
- (id)phoneSupportedRegionsOnDevice:(id)a0;
- (id)localSupportedRegions;

@end
