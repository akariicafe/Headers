@class NSDictionary;

@interface BWInferenceConfiguration : NSObject

@property (readonly, nonatomic) int inferenceType;
@property (nonatomic) unsigned int priority;
@property (nonatomic) float maximumFramesPerSecond;
@property (nonatomic) BOOL propagatesFrameRatePrevention;
@property (copy, nonatomic) NSDictionary *tuningParameters;

- (void)dealloc;
- (id)initWithInferenceType:(int)a0;

@end
