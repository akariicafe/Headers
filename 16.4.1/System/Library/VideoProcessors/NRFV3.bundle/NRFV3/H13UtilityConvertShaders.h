@protocol MTLComputePipelineState;

@interface H13UtilityConvertShaders : NSObject

@property (readonly, nonatomic) id<MTLComputePipelineState> convert;
@property (readonly, nonatomic) int inputTexIndex;
@property (readonly, nonatomic) int outputTexIndex;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0 inputPixelFormat:(int)a1 outputPixelFormat:(int)a2;

@end
