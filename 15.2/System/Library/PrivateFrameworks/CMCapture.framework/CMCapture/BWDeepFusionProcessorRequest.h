@class BWDeepFusionProcessorInput;
@protocol BWDeepFusionProcessorControllerDelegate, IBPDeepFusionOutput;

@interface BWDeepFusionProcessorRequest : NSObject

@property (nonatomic) int err;
@property (nonatomic) int demosaicedRawErr;
@property (readonly, nonatomic) BWDeepFusionProcessorInput *input;
@property (readonly, nonatomic) id<IBPDeepFusionOutput> output;
@property (readonly, nonatomic) id<BWDeepFusionProcessorControllerDelegate> delegate;

- (id)description;
- (void)dealloc;
- (BOOL)receivedAllBuffers;
- (id)initWithInput:(id)a0 output:(id)a1 delegate:(id)a2;
- (BOOL)receivedAllInferences;

@end
