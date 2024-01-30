@class NSArray;

@interface VNDetectObjectAtPointRequest : VNImageBasedRequest

@property (nonatomic) struct CGPoint { double x0; double x1; } inputPoint;
@property (readonly, copy) NSArray *results;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (Class)configurationClass;

- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (long long)dependencyProcessingOrdinality;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (void)applyConfigurationOfRequest:(id)a0;
- (id)initWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithPoint:(struct CGPoint { double x0; double x1; })a0 completionHandler:(id /* block */)a1;

@end
