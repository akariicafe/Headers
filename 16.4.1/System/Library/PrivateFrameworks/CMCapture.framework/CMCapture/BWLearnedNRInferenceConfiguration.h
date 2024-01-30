@class NSDictionary, NSString;

@interface BWLearnedNRInferenceConfiguration : BWTiledEspressoInferenceConfiguration

@property (readonly, nonatomic) NSDictionary *sensorConfigurationsByPortType;
@property (readonly, nonatomic) NSString *outputMediaKey;

+ (id)outputMediaKeyForInferenceType:(int)a0;

- (void)dealloc;
- (id)initWithMetalCommandQueue:(id)a0 sensorConfigurationsByPortType:(id)a1 inferenceType:(int)a2;

@end
