@class VNImageBuffer;

@interface VNTargetedImageRequest : VNImageBasedRequest {
    VNImageBuffer *_targetedImageBuffer;
}

- (id)sequencedRequestPreviousObservationsKey;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)initWithTargetedCIImage:(id)a0 options:(id)a1;
- (id)initWithTargetedCVPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 options:(id)a2;
- (id)initWithTargetedImageURL:(id)a0 options:(id)a1;
- (BOOL)allowsCachingOfResults;
- (id)newDefaultRequestInstance;
- (id)initWithTargetedImageBuffer:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithTargetedCVPixelBuffer:(struct __CVBuffer { } *)a0 options:(id)a1;
- (id)initWithTargetedCVPixelBuffer:(struct __CVBuffer { } *)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithTargetedCVPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithTargetedCGImage:(struct CGImage { } *)a0 options:(id)a1;
- (id)initWithTargetedCGImage:(struct CGImage { } *)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithTargetedCGImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1 options:(id)a2;
- (id)initWithTargetedCGImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithTargetedCIImage:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithTargetedCIImage:(id)a0 orientation:(unsigned int)a1 options:(id)a2;
- (id)initWithTargetedCIImage:(id)a0 orientation:(unsigned int)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithTargetedImageURL:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithTargetedImageURL:(id)a0 orientation:(unsigned int)a1 options:(id)a2;
- (id)initWithTargetedImageURL:(id)a0 orientation:(unsigned int)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithTargetedImageData:(id)a0 options:(id)a1;
- (id)initWithTargetedImageData:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithTargetedImageData:(id)a0 orientation:(unsigned int)a1 options:(id)a2;
- (id)initWithTargetedImageData:(id)a0 orientation:(unsigned int)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithTargetedCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 options:(id)a1;
- (id)initWithTargetedCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithTargetedCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 orientation:(unsigned int)a1 options:(id)a2;
- (id)initWithTargetedCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 orientation:(unsigned int)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)targetedImageBuffer;
- (id)requiredTargetedImageBufferReturningError:(id *)a0;

@end
