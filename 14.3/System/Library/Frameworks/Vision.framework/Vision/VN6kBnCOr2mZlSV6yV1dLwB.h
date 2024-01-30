@class VN6Ac6Cyl5O5oK19HboyMBR;

@interface VN6kBnCOr2mZlSV6yV1dLwB : VNImageBasedRequest

@property (copy, nonatomic) VN6Ac6Cyl5O5oK19HboyMBR *inputSignatureprint;
@property (readonly, nonatomic) unsigned long long imageSignatureprintType;
@property (readonly, nonatomic) unsigned long long imageSignatureHashType;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)a0;
+ (BOOL)warmUpSession:(id)a0 error:(id *)a1;
+ (const struct { unsigned long long x0; Class x1; unsigned long long x2; } *)dependentRequestCompatability;
+ (Class)configurationClass;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)description;
- (id)initWithImageSignatureprintType:(unsigned long long)a0 imageSignatureHashType:(unsigned long long)a1;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (void)setImageSignatureprintType:(unsigned long long)a0;
- (void)setImageSignatureHashType:(unsigned long long)a0;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (id)initWithImageSignatureprintType:(unsigned long long)a0 imageSignatureHashType:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id /* block */)resultsSortingComparator;
- (id)imageSignaturnprintByRunningNeuralHashprintRequest:(id)a0 error:(id *)a1;
- (void)applyConfigurationOfRequest:(id)a0;
- (long long)dependencyProcessingOrdinality;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
