@class FigCaptureDeferredPhotoProcessorRequest, BWDeferredProcessingContainer, NSString;
@protocol FigCaptureDeferredProcessingJobDelegate;

@interface FigCaptureDeferredProcessingJob : NSObject {
    id<FigCaptureDeferredProcessingJobDelegate> _delegate;
}

@property (readonly, nonatomic) FigCaptureDeferredPhotoProcessorRequest *processorRequest;
@property (readonly, nonatomic) BWDeferredProcessingContainer *container;
@property (nonatomic) long long startNS;
@property (nonatomic) long long durationNS;
@property (readonly, nonatomic) NSString *masterPortType;

- (id)initWithProcessorRequest:(id)a0 delegate:(id)a1 error:(int *)a2;
- (void)completedWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)failedWithError:(int)a0;
- (void)dealloc;
- (void)start;

@end
