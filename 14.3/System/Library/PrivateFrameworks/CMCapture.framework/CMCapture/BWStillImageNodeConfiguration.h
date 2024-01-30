@class BWInferenceScheduler;
@protocol MTLCommandQueue;

@interface BWStillImageNodeConfiguration : NSObject

@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (nonatomic) int depthDataType;
@property (retain, nonatomic) BWInferenceScheduler *inferenceScheduler;

- (void)dealloc;

@end
