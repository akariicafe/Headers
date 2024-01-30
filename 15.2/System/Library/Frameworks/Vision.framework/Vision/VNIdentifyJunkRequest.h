@class NSArray;

@interface VNIdentifyJunkRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;

- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;

@end
