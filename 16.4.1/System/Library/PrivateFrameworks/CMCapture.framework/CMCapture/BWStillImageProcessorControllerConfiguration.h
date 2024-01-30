@class NSDictionary, BWInferenceScheduler;
@protocol MTLCommandQueue;

@interface BWStillImageProcessorControllerConfiguration : NSObject

@property (retain, nonatomic) NSDictionary *sensorConfigurationsByPortType;
@property (nonatomic) BOOL deferredProcessingEnabled;
@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (retain, nonatomic) BWInferenceScheduler *inferenceScheduler;
@property (nonatomic) unsigned int figThreadPriority;

- (void)dealloc;

@end
