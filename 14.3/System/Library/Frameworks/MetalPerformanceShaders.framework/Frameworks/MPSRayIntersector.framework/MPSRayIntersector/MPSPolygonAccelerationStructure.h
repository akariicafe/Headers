@class NSArray;
@protocol MTLBuffer, MTLArgumentEncoder;

@interface MPSPolygonAccelerationStructure : MPSAccelerationStructure {
    unsigned int _indexType;
    unsigned long long _polygonType;
    struct MPSPrimitiveBVH { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; struct MPSBVHGroup *x2; struct MPSBufferRange *x3; struct MPSBufferRange *x4; struct MPSBufferRange *x5; struct MPSBufferRange *x6; struct MPSBufferRange *x7; unsigned long long x8; unsigned long long x9; int x10; unsigned int x11; int x12; id x13; id x14; struct MPSLibrary *x15; struct MPSBufferRange *x16; unsigned int x17; } *_bvh;
    id<MTLArgumentEncoder> _resourceEncoder;
    struct MPSBufferRange { struct MPSBufferRange *x0; struct MPSBufferRange *x1; struct MPSBufferRange *x2; struct MPSBufferRange *x3; unsigned long long x4; unsigned long long x5; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x6; struct MPSBufferAllocator *x7; } *_resourceBufferRange;
}

@property (nonatomic) unsigned long long polygonType;
@property (nonatomic) unsigned long long vertexStride;
@property (nonatomic) unsigned int indexType;
@property (retain, nonatomic) id<MTLBuffer> vertexBuffer;
@property (nonatomic) unsigned long long vertexBufferOffset;
@property (retain, nonatomic) id<MTLBuffer> indexBuffer;
@property (nonatomic) unsigned long long indexBufferOffset;
@property (retain, nonatomic) id<MTLBuffer> maskBuffer;
@property (nonatomic) unsigned long long maskBufferOffset;
@property (nonatomic) unsigned long long polygonCount;
@property (retain, nonatomic) NSArray *polygonBuffers;

+ (BOOL)supportsSecureCoding;

- (id)statistics;
- (id)initWithDevice:(id)a0;
- (struct MPSBVH { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; struct MPSBVHGroup *x2; struct MPSBufferRange *x3; struct MPSBufferRange *x4; struct MPSBufferRange *x5; struct MPSBufferRange *x6; struct MPSBufferRange *x7; unsigned long long x8; unsigned long long x9; int x10; unsigned int x11; int x12; id x13; id x14; struct MPSLibrary *x15; } *)bvh;
- (id)boundingBoxBuffer;
- (unsigned long long)branchingFactor;
- (id)initWithGroup:(id)a0;
- (void)dealloc;
- (void)validate;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (void)rebuild;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (struct _MPSAxisAlignedBoundingBox { })boundingBox;
- (void)encodeWithCoder:(id)a0;
- (id)newResourceEncoder;
- (void)sharedInitPolygonAccelerationStructure;
- (void)decodePolygonAccelerationStructureWithCoder:(id)a0;
- (id)initWithCoder:(id)a0 group:(id)a1;
- (void)bindResourcesWithEncoder:(id)a0 commandBuffer:(id)a1 retainedResources:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0 group:(id)a1;
- (id)copyPolygonAccelerationStructureWithZone:(struct _NSZone { } *)a0 device:(id)a1 group:(id)a2;
- (BOOL)useResourceBuffer;
- (void)encodeResourcesToBuffer:(id)a0;
- (struct MPSBufferRange { struct MPSBufferRange *x0; struct MPSBufferRange *x1; struct MPSBufferRange *x2; struct MPSBufferRange *x3; unsigned long long x4; unsigned long long x5; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x6; struct MPSBufferAllocator *x7; } *)primitiveIndexBufferRange;
- (struct MPSBufferRange { struct MPSBufferRange *x0; struct MPSBufferRange *x1; struct MPSBufferRange *x2; struct MPSBufferRange *x3; unsigned long long x4; unsigned long long x5; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x6; struct MPSBufferAllocator *x7; } *)innerNodeBufferRange;
- (struct MPSBufferRange { struct MPSBufferRange *x0; struct MPSBufferRange *x1; struct MPSBufferRange *x2; struct MPSBufferRange *x3; unsigned long long x4; unsigned long long x5; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x6; struct MPSBufferAllocator *x7; } *)leafNodeBufferRange;
- (struct MPSBufferRange { struct MPSBufferRange *x0; struct MPSBufferRange *x1; struct MPSBufferRange *x2; struct MPSBufferRange *x3; unsigned long long x4; unsigned long long x5; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x6; struct MPSBufferAllocator *x7; } *)pageTable0BufferRange;
- (struct MPSBufferRange { struct MPSBufferRange *x0; struct MPSBufferRange *x1; struct MPSBufferRange *x2; struct MPSBufferRange *x3; unsigned long long x4; unsigned long long x5; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x6; struct MPSBufferAllocator *x7; } *)pageTable1BufferRange;
- (struct MPSBufferRange { struct MPSBufferRange *x0; struct MPSBufferRange *x1; struct MPSBufferRange *x2; struct MPSBufferRange *x3; unsigned long long x4; unsigned long long x5; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x6; struct MPSBufferAllocator *x7; } *)pageBufferRange;
- (int)rootNodeType;
- (unsigned long long)leafNodeCount;
- (unsigned long long)innerNodeCount;
- (unsigned long long)innerNodeStride;
- (int)nodeLayout;
- (void)rebuildWithCompletionHandler:(id /* block */)a0;
- (void)encodeRefitToCommandBuffer:(id)a0;

@end
