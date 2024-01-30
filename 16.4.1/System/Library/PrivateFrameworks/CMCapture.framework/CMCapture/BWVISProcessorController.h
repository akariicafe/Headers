@class NSString, BWVISProcessorControllerConfiguration;
@protocol BWVISProcessorDelegate, VISProcessor, VISConfiguration;

@interface BWVISProcessorController : NSObject <VISProcessorDelegate> {
    id<VISProcessor> _visProcessor;
    id<VISConfiguration> _visConfiguration;
    BOOL _buffersEnqueued;
}

@property (nonatomic) BOOL longPressModeEnabled;
@property (nonatomic) BOOL flipHorizontalOrientationEnabled;
@property (retain, nonatomic) BWVISProcessorControllerConfiguration *configuration;
@property (weak, nonatomic) id<BWVISProcessorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)didCompleteProcessingOfBuffer:(struct opaqueCMSampleBuffer { } *)a0 withStatus:(int)a1;
- (int)enqueueBufferForProcessing:(struct opaqueCMSampleBuffer { } *)a0;
- (int)prepareToProcess;
- (void).cxx_destruct;
- (int)finishPendingProcessing;

@end
