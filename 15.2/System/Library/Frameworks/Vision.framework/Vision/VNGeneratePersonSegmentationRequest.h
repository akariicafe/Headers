@class NSArray, VNPixelBufferObservation;

@interface VNGeneratePersonSegmentationRequest : VNStatefulRequest {
    VNPixelBufferObservation *_previousObservation;
    unsigned long long _previousImageWidth;
    unsigned long long _previousImageHeight;
}

@property (nonatomic) unsigned long long qualityLevel;
@property (nonatomic) unsigned int outputPixelFormat;
@property (readonly, copy) NSArray *results;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)new;
+ (Class)configurationClass;

- (id)initWithCompletionHandler:(id /* block */)a0;
- (long long)dependencyProcessingOrdinality;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (void)applyConfigurationOfRequest:(id)a0;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)newDefaultDetectorOptionsForSession:(id)a0;

@end
