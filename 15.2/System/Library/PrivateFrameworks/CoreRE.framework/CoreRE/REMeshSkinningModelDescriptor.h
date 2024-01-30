@class NSArray;

@interface REMeshSkinningModelDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *inverseBindPoseAttributes;
@property (readonly, nonatomic) NSArray *skinningParts;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithInverseBindPoseAttributes:(id)a0 skinningParts:(id)a1;
- (id)initWithMeshSkinningData:(const void *)a0 inverseBindPoseAttributes:(id)a1 payloadBuilder:(void *)a2 deformationModelData:(void *)a3;
- (BOOL)validateWithPayloadSize:(unsigned long long)a0 partCount:(unsigned long long)a1 skeletonCount:(unsigned long long)a2 error:(id *)a3;

@end
