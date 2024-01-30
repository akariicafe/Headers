@class NSDictionary;

@interface REMeshSkinningPartDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int skeletonIndex;
@property (readonly, nonatomic) NSDictionary *attributes;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSkeletonIndex:(unsigned int)a0 attributes:(id)a1;
- (id)initWithSkinningPartPayload:(void *)a0 payloadBuilder:(void *)a1;
- (void)addToSkinningModelBuilder:(struct SkinningModelBuilder { struct Device *x0; struct DeformationModelData *x1; unsigned long long x2; BOOL x3; } *)a0 payloadBuffer:(const struct Buffer { id x0; } *)a1;
- (BOOL)validateWithPayloadSize:(unsigned long long)a0 skeletonCount:(unsigned long long)a1 error:(id *)a2;

@end
