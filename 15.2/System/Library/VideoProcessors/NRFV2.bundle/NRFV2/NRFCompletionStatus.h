@class FigMetalExecutionStatus;
@protocol MTLCommandBuffer;

@interface NRFCompletionStatus : NSObject

@property (retain, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (retain, nonatomic) FigMetalExecutionStatus *metalExecutionStatus;

- (void)waitForCompletion;
- (void).cxx_destruct;
- (id)init;

@end
