@interface VNDetectContoursRequest : VNImageBasedRequest

@property (nonatomic) BOOL forceUseInputCVPixelBufferDirectly;
@property (nonatomic) BOOL inHierarchy;
@property (nonatomic) float contrastAdjustment;
@property (nonatomic) BOOL detectsDarkOnLight;
@property (nonatomic) BOOL detectDarkOnLight;
@property (nonatomic) unsigned long long maximumImageDimension;

+ (Class)configurationClass;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (void)applyConfigurationOfRequest:(id)a0;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
