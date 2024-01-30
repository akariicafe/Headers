@interface VNCreateSmartCamprintRequest : VNImageBasedRequest

@property (nonatomic) BOOL returnAllResults;

+ (Class)configurationClass;
+ (void)recordDefaultOptionsInDictionary:(id)a0;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (void)applyConfigurationOfRequest:(id)a0;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
