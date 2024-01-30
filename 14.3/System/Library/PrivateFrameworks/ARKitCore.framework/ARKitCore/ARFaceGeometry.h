@class ARFaceTrackingData, NSObject;
@protocol OS_dispatch_semaphore;

@interface ARFaceGeometry : NSObject <NSSecureCoding, NSCopying> {
    struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> > { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> > { void *__value_; } __end_cap_; } _customVertices;
    struct vector<float __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> > { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::__1::allocator<float __attribute__((ext_vector_type(3)))> > { void *__value_; } __end_cap_; } _normals;
    ARFaceTrackingData *_trackingData;
    NSObject<OS_dispatch_semaphore> *_normalsSemaphore;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long vertexCount;
@property (readonly, nonatomic) const void *vertices;
@property (readonly, nonatomic) unsigned long long textureCoordinateCount;
@property (readonly, nonatomic) const void *textureCoordinates;
@property (readonly, nonatomic) unsigned long long triangleCount;
@property (readonly, nonatomic) const short *triangleIndices;

- (id)initPrivate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (const void *)normals;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBlendShapes:(id)a0;
- (unsigned long long)normalCount;
- (id)initWithFaceTrackingData:(id)a0;
- (id)initWithCustomVertices:(const void *)a0 verticesCount:(unsigned long long)a1;
- (void /* unknown type, empty encoding */)positionForLabeledFacePosition:(id)a0;
- (void /* unknown type, empty encoding */)normalForLabeledFacePosition:(id)a0;
- (short)closestVertexIndexToLabeledFacePosition:(id)a0;

@end
