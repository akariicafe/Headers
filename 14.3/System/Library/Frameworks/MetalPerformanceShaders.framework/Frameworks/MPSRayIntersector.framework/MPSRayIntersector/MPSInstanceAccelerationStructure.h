@class NSArray;
@protocol MTLBuffer;

@interface MPSInstanceAccelerationStructure : MPSAccelerationStructure {
    unsigned long long _transformType;
    struct MPSInstanceBVH { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; struct MPSBVHGroup *x2; struct MPSBufferRange *x3; struct MPSBufferRange *x4; struct MPSBufferRange *x5; struct MPSBufferRange *x6; struct MPSBufferRange *x7; unsigned long long x8; unsigned long long x9; int x10; unsigned int x11; int x12; id x13; id x14; struct MPSLibrary *x15; id x16; } *_bvh;
}

@property (retain, nonatomic) NSArray *accelerationStructures;
@property (retain, nonatomic) id<MTLBuffer> instanceBuffer;
@property (nonatomic) unsigned long long instanceBufferOffset;
@property (retain, nonatomic) id<MTLBuffer> transformBuffer;
@property (nonatomic) unsigned long long transformBufferOffset;
@property (nonatomic) unsigned long long transformType;
@property (retain, nonatomic) id<MTLBuffer> maskBuffer;
@property (nonatomic) unsigned long long maskBufferOffset;
@property (nonatomic) unsigned long long instanceCount;

+ (BOOL)supportsSecureCoding;

- (id)statistics;
- (id)initWithDevice:(id)a0;
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
- (id)initWithCoder:(id)a0 group:(id)a1;
- (void)bindResourcesWithEncoder:(id)a0 commandBuffer:(id)a1 retainedResources:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0 group:(id)a1;
- (BOOL)useResourceBuffer;
- (void)encodeResourcesToBuffer:(id)a0;
- (struct MPSBufferRange { struct MPSBufferRange *x0; struct MPSBufferRange *x1; struct MPSBufferRange *x2; struct MPSBufferRange *x3; unsigned long long x4; unsigned long long x5; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x6; struct MPSBufferAllocator *x7; } *)innerNodeBufferRange;
- (struct MPSBufferRange { struct MPSBufferRange *x0; struct MPSBufferRange *x1; struct MPSBufferRange *x2; struct MPSBufferRange *x3; unsigned long long x4; unsigned long long x5; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x6; struct MPSBufferAllocator *x7; } *)leafNodeBufferRange;
- (struct MPSBufferRange { struct MPSBufferRange *x0; struct MPSBufferRange *x1; struct MPSBufferRange *x2; struct MPSBufferRange *x3; unsigned long long x4; unsigned long long x5; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x6; struct MPSBufferAllocator *x7; } *)pageTable0BufferRange;
- (struct MPSBufferRange { struct MPSBufferRange *x0; struct MPSBufferRange *x1; struct MPSBufferRange *x2; struct MPSBufferRange *x3; unsigned long long x4; unsigned long long x5; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x6; struct MPSBufferAllocator *x7; } *)pageTable1BufferRange;
- (struct MPSBufferRange { struct MPSBufferRange *x0; struct MPSBufferRange *x1; struct MPSBufferRange *x2; struct MPSBufferRange *x3; unsigned long long x4; unsigned long long x5; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x6; struct MPSBufferAllocator *x7; } *)pageBufferRange;
- (int)rootNodeType;
- (unsigned long long)leafNodeCount;
- (unsigned long long)innerNodeCount;
- (int)nodeLayout;
- (void)rebuildWithCompletionHandler:(id /* block */)a0;
- (void)encodeRefitToCommandBuffer:(id)a0;
- (void)sharedInitInstanceAccelerationStructure;
- (void)decodeInstanceAccelerationStructureWithCoder:(id)a0;
- (void)encodeInstanceOffsetsToBuffer:(id)a0;
- (id)copyInstanceAccelerationStructureWithZone:(struct _NSZone { } *)a0 device:(id)a1 group:(id)a2;

@end
