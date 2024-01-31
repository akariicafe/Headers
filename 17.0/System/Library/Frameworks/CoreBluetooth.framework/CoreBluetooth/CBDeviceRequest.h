@interface CBDeviceRequest : NSObject <CUXPCCodable>

@property (nonatomic) unsigned int requestFlags;
@property (nonatomic) double timeoutSeconds;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)description;

@end
