@class NSString;
@protocol MTLEvent;

@interface BWVideoDepthInferenceConfiguration : BWInferenceConfiguration

@property (readonly, nonatomic) int videoDepthAlgorithm;
@property (readonly, nonatomic) struct { int width; int height; } outputDimensions;
@property (readonly, nonatomic) struct { int width; int height; } inputDimensions;
@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) unsigned long long concurrencyWidth;
@property (readonly, nonatomic) unsigned int temporalDepthInputPixelFormat;
@property (readonly, nonatomic) id<MTLEvent> backpressureEvent;

- (void)dealloc;
- (id)initWithInferenceType:(int)a0 videoDepthAlgorithm:(int)a1 outputDimensions:(struct { int x0; int x1; })a2 inputDimensions:(struct { int x0; int x1; })a3 temporalDepthInputPixelFormat:(unsigned int)a4 portType:(id)a5 concurrencyWidth:(unsigned long long)a6 backpressureEvent:(id)a7;

@end
