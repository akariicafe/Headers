@class NSArray;

@interface VNDetectHumanHandPoseRequest : VNImageBasedRequest

@property unsigned long long maximumHandCount;
@property (readonly, copy) NSArray *results;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)supportedRecognizedPointKeysForRevision:(unsigned long long)a0 error:(id *)a1;
+ (id)supportedRecognizedPointGroupKeysForRevision:(unsigned long long)a0 error:(id *)a1;
+ (id)supportedIdentifiedPointKeysForRevision:(unsigned long long)a0 error:(id *)a1;
+ (id)supportedIdentifiedPointGroupKeysForRevision:(unsigned long long)a0 error:(id *)a1;
+ (id)supportedJointNamesForRevision:(unsigned long long)a0 error:(id *)a1;
+ (id)supportedJointsGroupNamesForRevision:(unsigned long long)a0 error:(id *)a1;
+ (Class)configurationClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (void)setSortedResults:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;
- (id /* block */)resultsSortingComparator;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;

@end
