@class NSArray, BWInferenceScheduler;
@protocol MTLCommandQueue;

@interface BWStillImageProcessorConfiguration : NSObject

@property (retain, nonatomic) NSArray *sensorConfigurations;
@property (nonatomic) BOOL deferredProcessingEnabled;
@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (retain, nonatomic) BWInferenceScheduler *inferenceScheduler;
@property (nonatomic) unsigned int figThreadPriority;

- (void)dealloc;

@end
