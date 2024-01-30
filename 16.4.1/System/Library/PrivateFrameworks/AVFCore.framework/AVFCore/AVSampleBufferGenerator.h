@class AVSampleBufferGeneratorInternal;

@interface AVSampleBufferGenerator : NSObject {
    AVSampleBufferGeneratorInternal *_generator;
}

+ (void)initialize;
+ (void)notifyOfDataReadyForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 completionHandler:(id /* block */)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (struct OpaqueFigSampleGenerator { } *)_figSampleGenerator;
- (struct opaqueCMSampleBuffer { } *)createSampleBufferForRequest:(id)a0;
- (struct opaqueCMSampleBuffer { } *)createSampleBufferForRequest:(id)a0 addingToBatch:(id)a1 error:(id *)a2;
- (struct opaqueCMSampleBuffer { } *)createSampleBufferForRequest:(id)a0 error:(id *)a1;
- (id)initWithAsset:(id)a0 timebase:(struct OpaqueCMTimebase { } *)a1;
- (id)makeBatch;

@end
