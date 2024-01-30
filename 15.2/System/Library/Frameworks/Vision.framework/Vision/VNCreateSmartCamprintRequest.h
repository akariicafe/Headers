@class NSArray;

@interface VNCreateSmartCamprintRequest : VNImageBasedRequest

@property (nonatomic) BOOL returnAllResults;
@property (readonly, copy) NSArray *results;

+ (id)defaultProcessingDeviceForRevision:(unsigned long long)a0;
+ (Class)configurationClass;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (void)applyConfigurationOfRequest:(id)a0;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;

@end
