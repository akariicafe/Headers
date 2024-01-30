@class NSArray, VNHomographyTrackerState;

@interface VNTrackHomographyRequest : VNStatefulRequest {
    VNHomographyTrackerState *_state;
}

@property (readonly, copy) NSArray *results;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (Class)configurationClass;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)allowsCachingOfResults;
- (id)initWithFrameAnalysisSpacing:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completionHandler:(id /* block */)a1;

@end
