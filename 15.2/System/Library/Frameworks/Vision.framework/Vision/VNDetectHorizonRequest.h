@class NSArray;

@interface VNDetectHorizonRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;

@end
