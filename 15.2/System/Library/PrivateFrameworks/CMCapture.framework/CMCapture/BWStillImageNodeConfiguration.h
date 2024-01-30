@class BWInferenceScheduler;
@protocol MTLCommandQueue;

@interface BWStillImageNodeConfiguration : NSObject

@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (nonatomic) int depthDataType;
@property (nonatomic) int pearlModuleType;
@property (retain, nonatomic) BWInferenceScheduler *inferenceScheduler;
@property (nonatomic) int maxLossyCompressionLevel;

- (void)dealloc;

@end
