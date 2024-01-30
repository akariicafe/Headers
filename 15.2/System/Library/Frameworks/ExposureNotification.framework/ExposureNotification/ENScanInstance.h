@interface ENScanInstance : NSObject <CUXPCCodable>

@property (nonatomic) unsigned char minimumAttenuation;
@property (nonatomic) unsigned char typicalAttenuation;
@property (nonatomic) long long secondsSinceLastScan;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)description;
- (void)encodeWithXPCObject:(id)a0;

@end
