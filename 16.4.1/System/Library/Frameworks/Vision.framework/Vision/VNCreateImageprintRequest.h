@class NSNumber, NSArray;

@interface VNCreateImageprintRequest : VNImageBasedRequest

@property (retain, nonatomic) NSNumber *timeStamp;
@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;

- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;
- (void)applyConfigurationOfRequest:(id)a0;

@end
