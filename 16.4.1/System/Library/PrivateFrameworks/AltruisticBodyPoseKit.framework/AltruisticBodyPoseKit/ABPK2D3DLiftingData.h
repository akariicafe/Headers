@interface ABPK2D3DLiftingData : NSObject <NSSecureCoding> {
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__value_; } __end_cap_; } _rawJointsUsedForLifting;
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__value_; } __end_cap_; } _rotatedJointsUsedForLifting;
    struct array<float, 32UL> { float __elems_[32]; } _multiArray;
    struct array<float, 32UL> { float __elems_[32]; } _unnormalizedMultiArray;
    long long _rotationNeeded;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) const void *joints;
@property (readonly, nonatomic) const void *rotatedJoints;
@property (readonly, nonatomic) unsigned long long jointCount;
@property (readonly, nonatomic) const float *liftingData3D;
@property (readonly, nonatomic) const float *unnormalizedLiftingData3D;
@property (readonly, nonatomic) unsigned long long liftingData3DElementCount;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)_rotateAndUndoCroppingFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithHumanForLifting:(const void *)a0 imageSize:(struct CGSize { double x0; double x1; })a1 rotation:(long long)a2 croppedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)initWithJoints:(const void *)a0 numberOfJoints:(unsigned long long)a1;
- (id)initWithJoints:(const void *)a0 numberOfJoints:(unsigned long long)a1 imageSize:(struct CGSize { double x0; double x1; })a2;
- (id)initWithJoints:(const void *)a0 numberOfJoints:(unsigned long long)a1 liftingData3D:(const float *)a2 liftingData3DElementCount:(unsigned long long)a3;
- (id)initWithJoints:(const void *)a0 numberOfJoints:(unsigned long long)a1 rotation:(long long)a2 croppedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 liftingData3D:(const float *)a4 liftingData3DElementCount:(unsigned long long)a5;
- (void)prepareLiftingInput:(const void *)a0 imageSize:(struct CGSize { double x0; double x1; })a1 pUnnormalizedMultiArray:(float *)a2 pMultiArray:(float *)a3;

@end
