@interface CBDeviceRequest : NSObject <CUXPCCodable>

@property (nonatomic) unsigned int requestFlags;
@property (nonatomic) double timeoutSeconds;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)description;
- (void)encodeWithXPCObject:(id)a0;

@end
