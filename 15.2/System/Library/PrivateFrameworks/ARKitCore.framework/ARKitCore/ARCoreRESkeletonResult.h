@class NSArray, NSUUID, AR3DSkeletonDetectionResult;

@interface ARCoreRESkeletonResult : NSObject <NSSecureCoding, NSCopying> {
    struct vector<simd_float4x4, std::allocator<simd_float4x4>> { struct *__begin_; struct *__end_; struct __compressed_pair<simd_float4x4 *, std::allocator<simd_float4x4>> { struct *__value_; } __end_cap_; } _modelTransforms;
    struct vector<ARSRT, std::allocator<ARSRT>> { struct *__begin_; struct *__end_; struct __compressed_pair<ARSRT *, std::allocator<ARSRT>> { struct *__value_; } __end_cap_; } _localTransformsSRT;
    struct vector<simd_float4x4, std::allocator<simd_float4x4>> { struct *__begin_; struct *__end_; struct __compressed_pair<simd_float4x4 *, std::allocator<simd_float4x4>> { struct *__value_; } __end_cap_; } _localTransforms;
    AR3DSkeletonDetectionResult *_liftingResult;
}

@property (class, readonly, nonatomic) NSArray *jointNames;
@property (class, readonly, nonatomic) NSArray *jointParentIndices;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) unsigned long long jointTransformCount;
@property (readonly, nonatomic) const struct { void /* unknown type, empty encoding */ x0[4]; } *jointModelTransforms;
@property (readonly, nonatomic) const struct { void /* unknown type, empty encoding */ x0[4]; } *jointLocalTransforms;
@property (readonly, nonatomic) const struct { struct { } x0; } *localJointTransformsSRT;
@property (readonly, nonatomic) AR3DSkeletonDetectionResult *liftedSkeletonData;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } visionTransform;
@property (nonatomic) double estimatedScaleFactor;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (id)initWithModelJointTransforms:(const struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 localJointTransformsSRT:(const struct { struct { } x0; } *)a1 numberOfTransforms:(unsigned long long)a2 liftedSkeletonData:(id)a3 identifier:(id)a4;
- (BOOL)isJointTracked:(long long)a0;

@end
