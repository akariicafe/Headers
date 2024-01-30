@class NSArray;
@protocol MTLCommandQueue;

@interface BWLearnedNRInferenceConfiguration : BWTiledEspressoInferenceConfiguration

@property (readonly, retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (readonly, retain, nonatomic) NSArray *sensorConfigurations;

- (void)dealloc;
- (id)initWithMetalCommandQueue:(id)a0 sensorConfigurations:(id)a1;

@end
