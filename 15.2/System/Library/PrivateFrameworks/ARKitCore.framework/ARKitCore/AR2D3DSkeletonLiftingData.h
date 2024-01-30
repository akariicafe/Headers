@interface AR2D3DSkeletonLiftingData : NSObject <NSSecureCoding, NSCopying> {
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__value_; } __end_cap_; } _rawJointsUsedForLifting;
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__value_; } __end_cap_; } _rotatedJointsUsedForLifting;
    struct array<float, 32> { float __elems_[32]; } _multiArray;
    long long _rotationNeeded;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) const void *joints;
@property (readonly, nonatomic) unsigned long long jointCount;
@property (readonly, nonatomic) const float *liftingData3D;
@property (readonly, nonatomic) unsigned long long liftingData3DElementCount;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (id)initWithHumanForLifting:(const void *)a0 imageSize:(struct CGSize { double x0; double x1; })a1 rotation:(long long)a2 croppedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)_rotateAndUndoCroppingFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_prepareLiftingInput:(const void *)a0 jointTrackingState:(const void *)a1 imageSize:(struct CGSize { double x0; double x1; })a2 pMultiArray:(float *)a3;
- (id)initWithJoints:(const void *)a0 numberOfJoints:(unsigned long long)a1 rotation:(long long)a2 croppedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 liftingData3D:(const float *)a4 liftingData3DElementCount:(unsigned long long)a5;

@end
