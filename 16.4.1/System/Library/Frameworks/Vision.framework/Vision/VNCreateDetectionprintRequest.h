@class NSArray;

@interface VNCreateDetectionprintRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;

+ (Class)configurationClass;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (id)applicableDetectorTypeForRevision:(unsigned long long)a0 error:(id *)a1;

@end
