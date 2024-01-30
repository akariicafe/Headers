@interface REMeshAttributeDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int payloadOffset;
@property (readonly, nonatomic) unsigned int count;
@property (readonly, nonatomic) unsigned long long format;
@property (readonly, nonatomic) unsigned long long stepFunction;
@property (readonly, nonatomic) unsigned long long bufferSize;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addBufferToArray:(void *)a0 name:(const char *)a1 payloadBuffer:(const struct Buffer { id x0; } *)a2;
- (id)initWithMeshAssetBuffer:(const void *)a0 payloadBuilder:(void *)a1;
- (id)initWithPayloadOffset:(unsigned int)a0 count:(unsigned int)a1 format:(unsigned long long)a2 stepFunction:(unsigned long long)a3;
- (id)initWithVertexAttributeDescriptor:(const struct VertexAttributeDescriptor { char *x0; unsigned char x1; unsigned char x2; int x3; } *)a0 payloadOffset:(unsigned int)a1 count:(unsigned int)a2;
- (BOOL)validateWithPayloadSize:(unsigned long long)a0 error:(id *)a1;

@end
