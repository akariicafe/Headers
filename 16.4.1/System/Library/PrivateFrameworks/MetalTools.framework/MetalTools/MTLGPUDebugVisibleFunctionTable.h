@class NSString;
@protocol MTLDevice, MTLHeap, MTLVisibleFunctionTable, MTLBuffer;

@interface MTLGPUDebugVisibleFunctionTable : MTLToolsVisibleFunctionTable <MTLGPUDebugResource> {
    unsigned long long _gpuIdentifier;
    id<MTLBuffer> _handleBuffer;
}

@property (retain, nonatomic) id<MTLVisibleFunctionTable> baseObject;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly, nonatomic) unsigned long long underlyingGPUAddress;
@property int responsibleProcess;
@property (readonly) unsigned long long allocationID;
@property (readonly) unsigned long long protectionOptions;
@property (readonly) unsigned long long unfilteredResourceOptions;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) id<MTLHeap> heap;
@property (readonly) unsigned long long heapOffset;
@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)dealloc;
- (void)_setupCommon;
- (unsigned long long)handleForOffset:(unsigned long long)a0;
- (id)initWithVisibleFunctionTable:(id)a0 descriptor:(id)a1 computePipeline:(id)a2;
- (id)initWithVisibleFunctionTable:(id)a0 descriptor:(id)a1 device:(id)a2;
- (id)initWithVisibleFunctionTable:(id)a0 descriptor:(id)a1 renderPipeline:(id)a2;
- (void)useWithComputeEncoder:(id)a0 usage:(unsigned long long)a1;
- (void)useWithRenderEncoder:(id)a0 usage:(unsigned long long)a1 stages:(struct optional<unsigned long> { union { char x0; unsigned long long x1; } x0; BOOL x1; })a2;

@end
