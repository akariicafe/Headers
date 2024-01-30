@class NSArray;

@interface VNAlignFaceRectangleRequest : VNRequest

@property (readonly, copy, nonatomic) NSArray *inputFaceObservations;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;

- (long long)dependencyProcessingOrdinality;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)resultsAreAssignedWithOriginatingRequestSpecifier;
- (id)newDefaultRequestInstance;
- (id)initWithFaceObservations:(id)a0;
- (id)initWithFaceObservations:(id)a0 completionHandler:(id /* block */)a1;
- (void)_determineFacesToProcessFrom:(id)a0 outputFacesThatNeedNoProcessing:(id)a1 outputFacesThatNeedProcessing:(id)a2;

@end
