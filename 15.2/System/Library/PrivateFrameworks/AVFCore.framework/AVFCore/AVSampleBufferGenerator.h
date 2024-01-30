@class AVSampleBufferGeneratorInternal;

@interface AVSampleBufferGenerator : NSObject {
    AVSampleBufferGeneratorInternal *_generator;
}

+ (void)initialize;
+ (void)notifyOfDataReadyForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 completionHandler:(id /* block */)a1;

- (id)initWithAsset:(id)a0 timebase:(struct OpaqueCMTimebase { } *)a1;
- (struct opaqueCMSampleBuffer { } *)createSampleBufferForRequest:(id)a0;
- (void)generateSampleBuffersForRequests:(id)a0 sampleHandler:(id /* block */)a1;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
