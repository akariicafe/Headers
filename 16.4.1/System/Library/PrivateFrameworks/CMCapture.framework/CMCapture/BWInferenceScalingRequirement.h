@class NSArray;

@interface BWInferenceScalingRequirement : NSObject

@property (readonly, nonatomic) NSArray *orderedVideoRequirements;

- (id)initWithInputVideoRequirement:(id)a0 requestedOutputVideoRequirements:(id)a1 intermediatePixelBufferCompressionType:(int)a2;
- (void)dealloc;

@end
