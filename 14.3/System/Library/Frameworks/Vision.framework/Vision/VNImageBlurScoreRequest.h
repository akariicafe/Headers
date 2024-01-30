@interface VNImageBlurScoreRequest : VNImageBasedRequest

@property (nonatomic) unsigned long long maximumIntermediateSideLength;
@property (nonatomic) unsigned long long blurDeterminationMethod;

+ (Class)configurationClass;
+ (void)recordDefaultOptionsInDictionary:(id)a0;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (void)applyConfigurationOfRequest:(id)a0;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
