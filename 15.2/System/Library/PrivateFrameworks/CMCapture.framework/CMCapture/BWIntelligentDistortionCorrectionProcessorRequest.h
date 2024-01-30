@class BWIntelligentDistortionCorrectionProcessorInput;
@protocol BWStillImageProcessorControllerDelegate;

@interface BWIntelligentDistortionCorrectionProcessorRequest : NSObject

@property (readonly, nonatomic) BWIntelligentDistortionCorrectionProcessorInput *input;
@property (readonly, nonatomic) id<BWStillImageProcessorControllerDelegate> delegate;
@property (nonatomic) int err;

- (id)description;
- (void)dealloc;
- (id)initWithInput:(id)a0 delegate:(id)a1;

@end
