@class NSString, NSArray, _NURAWCameraSpaceProperties, CIFilter;
@protocol NURAWNoiseReductionProperties;

@interface _NURAWImageProperties : NSObject <NURAWImageProperties>

@property (retain) NSString *decoderVersion;
@property (retain) NSArray *availableDecoderVersions;
@property double temperature;
@property double tint;
@property (retain) CIFilter *rawConvert;
@property (retain) id<NURAWNoiseReductionProperties> noiseReductionProperties;
@property (retain) _NURAWCameraSpaceProperties *rawCameraSpaceProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)inputNeutralXYFromRGB:(const double *)a0;

@end
