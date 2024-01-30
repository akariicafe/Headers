@class NSArray;

@interface BWInferenceScalingRequirement : NSObject

@property (readonly, nonatomic) NSArray *orderedVideoRequirements;

- (void)dealloc;
- (id)initWithInputVideoRequirement:(id)a0 requestedOutputVideoRequirements:(id)a1 intermediatePixelBufferCompressionType:(int)a2;
- (void)_appendIntermediateRequirementsToList:(id)a0 forSatisfyingOutputRequirement:(id)a1 intermediatePixelBufferCompressionType:(int)a2;

@end
