@class FigMetalExecutionStatus;
@protocol MTLCommandBuffer;

@interface NRFCompletionStatus : NSObject

@property (retain, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (retain, nonatomic) FigMetalExecutionStatus *metalExecutionStatus;

- (void)waitForCompletion;
- (id)init;
- (void).cxx_destruct;

@end
