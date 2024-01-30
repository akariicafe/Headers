@class BWRedEyeReductionControllerInput;
@protocol BWStillImageProcessorControllerDelegate;

@interface BWRedEyeReductionRequest : NSObject

@property (readonly, nonatomic) BWRedEyeReductionControllerInput *input;
@property (readonly, nonatomic) id<BWStillImageProcessorControllerDelegate> delegate;
@property (nonatomic) int mode;

- (id)description;
- (void)dealloc;
- (id)initWithInput:(id)a0 delegate:(id)a1;

@end
