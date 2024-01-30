@class NSNumber;

@interface VNCreateImageprintRequest : VNImageBasedRequest

@property (retain, nonatomic) NSNumber *timeStamp;

+ (Class)configurationClass;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (void)applyConfigurationOfRequest:(id)a0;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
