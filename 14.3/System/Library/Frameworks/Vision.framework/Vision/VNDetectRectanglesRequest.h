@class NSArray, NSString;

@interface VNDetectRectanglesRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (nonatomic) unsigned long long requiredVersion;
@property (nonatomic) float minimumAspectRatio;
@property (nonatomic) float maximumAspectRatio;
@property (nonatomic) float quadratureTolerance;
@property (nonatomic) float minimumSize;
@property (nonatomic) float minimumConfidence;
@property (nonatomic) unsigned long long maximumObservations;
@property (readonly) NSArray *supportedImageSizeSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)configurationClass;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (void)setSortedResults:(id)a0;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (id /* block */)resultsSortingComparator;
- (void)applyConfigurationOfRequest:(id)a0;
- (long long)dependencyProcessingOrdinality;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
