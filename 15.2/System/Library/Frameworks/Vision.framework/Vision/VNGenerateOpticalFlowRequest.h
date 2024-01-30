@class NSArray;

@interface VNGenerateOpticalFlowRequest : VNTargetedImageRequest {
    unsigned long long _computationAccuracy;
}

@property (nonatomic) unsigned long long generateLevel;
@property (nonatomic) unsigned long long levelCount;
@property (nonatomic) unsigned long long warpCount;
@property (nonatomic) BOOL enableFiltering;
@property (nonatomic) unsigned long long filterSize;
@property (nonatomic) unsigned long long filterSamplingDensity;
@property (nonatomic) float filterLumaWeight;
@property (nonatomic) float filterChromaWeight;
@property (nonatomic) float filterOcclusionWeight;
@property (nonatomic) unsigned long long computationAccuracy;
@property (nonatomic) unsigned int outputPixelFormat;
@property (readonly, copy) NSArray *results;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (BOOL)wantsSequencedRequestObservationsRecording;
- (BOOL)allowsCachingOfResults;
- (id)initWithTargetedImageBuffer:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 previousObservation:(id)a2 error:(id *)a3;
- (id)_createGeneratorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1 images:(id)a2 previousTargetImageIsCurrentRefImage:(BOOL)a3 previousObservation:(id)a4;

@end
