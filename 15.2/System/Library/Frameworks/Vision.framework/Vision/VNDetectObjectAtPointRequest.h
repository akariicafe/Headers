@class NSArray;

@interface VNDetectObjectAtPointRequest : VNImageBasedRequest

@property (nonatomic) struct CGPoint { double x0; double x1; } inputPoint;
@property (readonly, copy) NSArray *results;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (Class)configurationClass;

- (long long)dependencyProcessingOrdinality;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (void)applyConfigurationOfRequest:(id)a0;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (id)initWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithPoint:(struct CGPoint { double x0; double x1; })a0 completionHandler:(id /* block */)a1;

@end
