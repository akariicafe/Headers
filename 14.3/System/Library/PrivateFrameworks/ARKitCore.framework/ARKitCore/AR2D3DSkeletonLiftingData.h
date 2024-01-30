@interface AR2D3DSkeletonLiftingData : NSObject <NSSecureCoding, NSCopying> {
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > { void *__value_; } __end_cap_; } _rawJointsUsedForLifting;
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > { void *__value_; } __end_cap_; } _rotatedJointsUsedForLifting;
    struct array<float, 32> { float __elems_[32]; } _multiArray;
    long long _rotationNeeded;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) const void *joints;
@property (readonly, nonatomic) unsigned long long jointCount;
@property (readonly, nonatomic) const float *liftingData3D;
@property (readonly, nonatomic) unsigned long long liftingData3DElementCount;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithHumanForLifting:(const struct Human { struct map<int, float __attribute__((ext_vector_type(2))), std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, float __attribute__((ext_vector_type(2)))> > > { struct __tree<std::__1::__value_type<int, float __attribute__((ext_vector_type(2)))>, std::__1::__map_value_compare<int, std::__1::__value_type<int, float __attribute__((ext_vector_type(2)))>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, float __attribute__((ext_vector_type(2)))> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, float __attribute__((ext_vector_type(2)))>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, float __attribute__((ext_vector_type(2)))>, std::__1::less<int>, true> > { unsigned long long x0; } x2; } x0; } x0; struct array<float, 34> { float x0[34]; } x1; struct array<unsigned char, 17> { unsigned char x0[17]; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; } *)a0 imageSize:(struct CGSize { double x0; double x1; })a1 rotation:(long long)a2 croppedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)_rotateAndUndoCroppingFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_prepareLiftingInput:(const struct Human { struct map<int, float __attribute__((ext_vector_type(2))), std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, float __attribute__((ext_vector_type(2)))> > > { struct __tree<std::__1::__value_type<int, float __attribute__((ext_vector_type(2)))>, std::__1::__map_value_compare<int, std::__1::__value_type<int, float __attribute__((ext_vector_type(2)))>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, float __attribute__((ext_vector_type(2)))> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, float __attribute__((ext_vector_type(2)))>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, float __attribute__((ext_vector_type(2)))>, std::__1::less<int>, true> > { unsigned long long x0; } x2; } x0; } x0; struct array<float, 34> { float x0[34]; } x1; struct array<unsigned char, 17> { unsigned char x0[17]; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; } *)a0 jointTrackingState:(const struct array<unsigned char, 17> { unsigned char x0[17]; } *)a1 imageSize:(struct CGSize { double x0; double x1; })a2 pMultiArray:(float *)a3;
- (id)initWithJoints:(const void *)a0 numberOfJoints:(unsigned long long)a1 rotation:(long long)a2 croppedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 liftingData3D:(const float *)a4 liftingData3DElementCount:(unsigned long long)a5;

@end
