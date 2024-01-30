@class NSDictionary, NSString;

@interface HDHRCardioFitnessPairedDeviceSupportedRegionProvider : NSObject <HDHRCardioFitnessPairedDeviceSupportedRegionProviding> {
    NSDictionary *_localSupportedRegions;
    NSString *_deviceProperty;
}

- (id)initWithLocalSupportedRegions:(id)a0;
- (void).cxx_destruct;
- (id)watchSupportedRegionsOnDevice:(id)a0;
- (id)phoneSupportedRegionsOnDevice:(id)a0;
- (id)localSupportedRegions;

@end
