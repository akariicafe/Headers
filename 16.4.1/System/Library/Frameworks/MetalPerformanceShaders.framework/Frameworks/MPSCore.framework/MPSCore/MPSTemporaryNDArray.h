@protocol MTLCommandBuffer;

@interface MPSTemporaryNDArray : MPSNDArray {
    id<MTLCommandBuffer> _commandBuffer;
    unsigned long long _childRefCount;
}

@property (nonatomic) unsigned long long readCount;

+ (id)defaultAllocator;
+ (id)temporaryNDArrayWithCommandBuffer:(id)a0 descriptor:(id)a1;

- (id)initWithCommandBuffer:(id)a0 descriptor:(id)a1;
- (id)debugDescription;
- (void)dealloc;
- (void)synchronizeOnCommandBuffer:(id)a0;
- (id)initWithCommandBuffer:(id)a0 descriptor:(id)a1 buffer:(id)a2;
- (id)temporaryArrayViewWithCommandBuffer:(id)a0 computeEncoder:(id)a1 descriptor:(id)a2 aliasing:(unsigned long long)a3;
- (id)temporaryArrayViewWithCommandBuffer:(id)a0 descriptor:(id)a1 aliasing:(unsigned long long)a2;

@end
