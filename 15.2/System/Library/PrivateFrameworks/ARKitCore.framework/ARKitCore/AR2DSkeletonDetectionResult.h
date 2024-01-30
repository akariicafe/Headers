@class NSArray, AR2D3DSkeletonLiftingData;

@interface AR2DSkeletonDetectionResult : NSObject <NSSecureCoding, NSCopying> {
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__value_; } __end_cap_; } _rawJoints;
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__value_; } __end_cap_; } _rotatedJoints;
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__value_; } __end_cap_; } _rawJointsLocalSpace;
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } _jointTrackingStates;
}

@property (class, readonly, nonatomic) NSArray *childrenIndices;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long jointCount;
@property (readonly, nonatomic) unsigned long long trackedJointCount;
@property (readonly, nonatomic) const void *joints;
@property (readonly, nonatomic) const void *jointsLocalSpace;
@property (readonly, nonatomic) const char *jointTrackingStates;
@property (readonly, nonatomic) const void *rawJointsOutput;
@property (readonly, nonatomic) const float *liftingData3D;
@property (readonly, nonatomic) unsigned long long liftingJointCount;
@property (readonly, nonatomic) AR2D3DSkeletonLiftingData *liftingData;
@property (readonly, nonatomic) long long rotation;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (id)initWithJoints:(const void *)a0 trackingStates:(const char *)a1 numberOfJoints:(unsigned long long)a2 rotation:(long long)a3 croppedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 liftingData:(id)a5;
- (float)computeDistanceBetweenSkeletonDetectionResult:(id)a0;
- (id)alignSkeleton:(id)a0 rotationNeeded:(long long)a1;

@end
