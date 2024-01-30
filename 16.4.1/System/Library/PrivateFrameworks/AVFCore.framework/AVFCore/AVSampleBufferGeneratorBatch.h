@class AVSampleBufferGenerator;

@interface AVSampleBufferGeneratorBatch : NSObject {
    AVSampleBufferGenerator *_sampleGenerator;
    struct OpaqueFigSampleGeneratorBatch { } *_sampleGeneratorBatch;
    BOOL _openToRequests;
    struct OpaqueFigSimpleMutex { } *_stateMutex;
    id /* block */ _completionHandler;
}

@property (readonly, nonatomic) AVSampleBufferGenerator *_generator;

+ (void)initialize;

- (void)cancel;
- (void)dealloc;
- (id /* block */)_completionHandler;
- (id)init;
- (id)initWithGenerator:(id)a0;
- (struct opaqueCMSampleBuffer { } *)createAndAddSampleBufferForRequest:(id)a0 error:(id *)a1;
- (BOOL)isOpenToRequests;
- (void)makeDataReadyWithCompletionHandler:(id /* block */)a0;

@end
