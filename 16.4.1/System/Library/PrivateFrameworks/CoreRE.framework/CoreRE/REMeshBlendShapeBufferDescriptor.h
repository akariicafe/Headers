@class NSDictionary;

@interface REMeshBlendShapeBufferDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int blendShapesCount;
@property (readonly, nonatomic) unsigned int float4sPerIndex;
@property (readonly, nonatomic) unsigned int numFloatsPerStream;
@property (readonly, nonatomic) unsigned int alignedFloatsPerStream;
@property (readonly, nonatomic) NSDictionary *attributes;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addToBlendShapeModelBuilder:(struct BlendShapeModelBuilder { struct Device { id x0; } x0; struct DeformationModelData *x1; } *)a0 blendShapeIndex:(unsigned long long)a1 payloadBuffer:(const struct Buffer { id x0; } *)a2;
- (id)initWithBlendShapeBufferPayload:(void *)a0 indexType:(unsigned long long)a1 payloadBuilder:(void *)a2;
- (id)initWithBlendShapesCount:(unsigned int)a0 float4sPerIndex:(unsigned int)a1 numFloatsPerStream:(unsigned int)a2 alignedFloatsPerStream:(unsigned int)a3 attributes:(id)a4;
- (BOOL)validateWithPayloadSize:(unsigned long long)a0 error:(id *)a1;

@end
