@class NSUUID, ABPK3DLiftingResult;

@interface ABPKResultRetargeting : NSObject {
    struct vector<simd_float4x4, std::allocator<simd_float4x4>> { struct *__begin_; struct *__end_; struct __compressed_pair<simd_float4x4 *, std::allocator<simd_float4x4>> { struct *__value_; } __end_cap_; } _modelTransforms;
    struct vector<ABPKSRT, std::allocator<ABPKSRT>> { struct *__begin_; struct *__end_; struct __compressed_pair<ABPKSRT *, std::allocator<ABPKSRT>> { struct *__value_; } __end_cap_; } _localTransformsSRT;
    struct vector<simd_float4x4, std::allocator<simd_float4x4>> { struct *__begin_; struct *__end_; struct __compressed_pair<simd_float4x4 *, std::allocator<simd_float4x4>> { struct *__value_; } __end_cap_; } _localTransforms;
    ABPK3DLiftingResult *_liftingResult;
}

@property (readonly, nonatomic) unsigned long long jointTransformCount;
@property (readonly, nonatomic) const struct { void /* unknown type, empty encoding */ x0[4]; } *jointModelTransforms;
@property (readonly, nonatomic) const struct { void /* unknown type, empty encoding */ x0[4]; } *jointLocalTransforms;
@property (readonly, nonatomic) const struct { struct { } x0; } *localJointTransformsSRT;
@property (nonatomic) float estimatedScale;
@property (readonly, nonatomic) NSUUID *identifier;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithModelJointTransforms:(const struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 localJointTransformsSRT:(const struct { struct { } x0; } *)a1 numberOfTransforms:(unsigned long long)a2 liftedSkeletonData:(id)a3 identifier:(id)a4;

@end
