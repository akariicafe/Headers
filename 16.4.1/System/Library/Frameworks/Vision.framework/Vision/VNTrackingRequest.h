@class VNDetectedObjectObservation;

@interface VNTrackingRequest : VNImageBasedRequest

@property (retain, nonatomic) VNDetectedObjectObservation *inputObservation;
@property (nonatomic) unsigned long long trackingLevel;
@property (nonatomic, getter=isLastFrame) BOOL lastFrame;

+ (unsigned int)frameCVPixelBufferFormatForRequestRevision:(unsigned long long)a0;
+ (id)trackerTypeForRequestRevision:(unsigned long long)a0 error:(id *)a1;

- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (id)sequencedRequestPreviousObservationsKey;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (void)applyConfigurationOfRequest:(id)a0;
- (void).cxx_destruct;
- (id)initWithDetectedObjectObservation:(id)a0;
- (id)_resetTrackerIfNeeded:(id)a0 session:(id)a1 options:(id)a2 error:(id *)a3;
- (id)_trackingLevelOptionFromTrackingLevelEnum;
- (BOOL)allowsCachingOfResults;
- (id)initWithDetectedObjectObservation:(id)a0 completionHandler:(id /* block */)a1;
- (id)newDefaultRequestInstance;
- (void)populateDetectorProcessingOptions:(id)a0 session:(id)a1;

@end
