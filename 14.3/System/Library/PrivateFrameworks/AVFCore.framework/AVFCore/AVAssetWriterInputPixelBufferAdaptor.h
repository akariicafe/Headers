@class AVAssetWriterInput, NSDictionary, NSString, AVAssetWriterInputPixelBufferAdaptorInternal;

@interface AVAssetWriterInputPixelBufferAdaptor : NSObject <AVWeakObservable, AVKeyPathDependencyHost> {
    AVAssetWriterInputPixelBufferAdaptorInternal *_internal;
}

@property (readonly, nonatomic) AVAssetWriterInput *assetWriterInput;
@property (readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (readonly, nonatomic) struct __CVPixelBufferPool { } *pixelBufferPool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assetWriterInputPixelBufferAdaptorWithAssetWriterInput:(id)a0 sourcePixelBufferAttributes:(id)a1;

- (id)init;
- (void)addCallbackToCancelDuringDeallocation:(id)a0;
- (void)dealloc;
- (void)declareKeyPathDependenciesWithRegistry:(id)a0;
- (id)initWithAssetWriterInput:(id)a0 sourcePixelBufferAttributes:(id)a1;
- (BOOL)appendPixelBuffer:(struct __CVBuffer { } *)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
