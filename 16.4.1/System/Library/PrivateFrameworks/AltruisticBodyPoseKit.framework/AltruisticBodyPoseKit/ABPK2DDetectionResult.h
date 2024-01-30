@class ABPK2D3DLiftingData;

@interface ABPK2DDetectionResult : NSObject <NSSecureCoding> {
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__value_; } __end_cap_; } _rawJoints;
    struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void *__value_; } __end_cap_; } _rotatedJoints;
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } _jointTrackingStates;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) const void *joints;
@property (readonly, nonatomic) const void *rawJointsOutput;
@property (readonly, nonatomic) const unsigned int *jointTrackingStates;
@property (readonly, nonatomic) unsigned long long jointCount;
@property (readonly, nonatomic) struct CGSize { double width; double height; } imageResolution;
@property (readonly, nonatomic) ABPK2D3DLiftingData *liftingData;
@property (readonly, nonatomic) long long rotation;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithJoints:(const void *)a0 trackingStates:(const unsigned int *)a1 numberOfJoints:(unsigned long long)a2 imageResolution:(struct CGSize { double x0; double x1; })a3 rotation:(long long)a4 croppedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 liftingData:(id)a6;
- (id)initWithJoints:(const void *)a0 trackingStates:(const unsigned int *)a1 numberOfJoints:(unsigned long long)a2 rotation:(long long)a3 croppedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 liftingData:(id)a5;
- (id)alignSkeleton:(id)a0 rotationNeeded:(long long)a1;
- (unsigned long long)trackedJointCount;

@end
