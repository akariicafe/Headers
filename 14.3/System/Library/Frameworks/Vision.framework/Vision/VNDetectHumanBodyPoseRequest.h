@class NSArray;

@interface VNDetectHumanBodyPoseRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)supportedRecognizedPointKeysForRevision:(unsigned long long)a0 error:(id *)a1;
+ (id)supportedRecognizedPointGroupKeysForRevision:(unsigned long long)a0 error:(id *)a1;
+ (id)supportedIdentifiedPointKeysForRevision:(unsigned long long)a0 error:(id *)a1;
+ (id)supportedIdentifiedPointGroupKeysForRevision:(unsigned long long)a0 error:(id *)a1;
+ (id)supportedJointNamesForRevision:(unsigned long long)a0 error:(id *)a1;
+ (id)supportedJointsGroupNamesForRevision:(unsigned long long)a0 error:(id *)a1;
+ (Class)configurationClass;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)a0 session:(id)a1;

@end
