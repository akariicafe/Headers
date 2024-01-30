@class NSString, NUJSRAWNoiseReductionProperties;
@protocol NURAWImageProperties;

@interface NUJSRAWImageProperties : NUJSProxy <NUJSRAWImagePropertiesExport>

@property (readonly) id<NURAWImageProperties> rawImageProperties;
@property (readonly) NSString *decoderVersion;
@property (readonly) double temperature;
@property (readonly) double tint;
@property (readonly) NUJSRAWNoiseReductionProperties *noiseReductionProperties;

- (id)initWithRAWImageProperties:(id)a0 context:(id)a1;
- (id)initWithRepresentedObject:(id)a0 context:(id)a1;

@end
