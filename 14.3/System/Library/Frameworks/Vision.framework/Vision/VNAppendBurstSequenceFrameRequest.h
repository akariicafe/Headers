@class NSString, NSDictionary;

@interface VNAppendBurstSequenceFrameRequest : VNTargetedImageRequest

@property (copy, nonatomic) NSString *burstFrameIdentifier;
@property (copy, nonatomic) NSDictionary *imageProperties;

+ (BOOL)warmUpSession:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (void)applyConfigurationOfRequest:(id)a0;
- (id)initWithTargetedCVPixelBuffer:(struct __CVBuffer { } *)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithTargetedCVPixelBuffer:(struct __CVBuffer { } *)a0 options:(id)a1;
- (id)initWithTargetedCGImage:(struct CGImage { } *)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithTargetedCGImage:(struct CGImage { } *)a0 options:(id)a1;
- (id)initWithTargetedCIImage:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithTargetedImageURL:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)allowsCachingOfResults;
- (id)initWithTargetedImageData:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithTargetedImageData:(id)a0 options:(id)a1;
- (BOOL)internalPerformInContext:(id)a0 error:(id *)a1;
- (id)initWithTargetedCIImage:(id)a0 options:(id)a1;
- (id)initWithTargetedImageURL:(id)a0 options:(id)a1;
- (id)sequencedRequestPreviousObservationsKey;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
