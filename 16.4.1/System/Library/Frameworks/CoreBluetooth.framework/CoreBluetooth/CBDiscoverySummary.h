@interface CBDiscoverySummary : NSObject <CUXPCCodable>

@property (nonatomic) double scanTime;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)descriptionWithLevel:(int)a0;
- (id)description;

@end
