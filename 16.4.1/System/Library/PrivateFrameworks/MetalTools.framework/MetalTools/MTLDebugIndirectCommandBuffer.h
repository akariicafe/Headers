@class NSMutableArray, MTLIndirectCommandBufferDescriptor;
@protocol MTLIndirectCommandBuffer;

@interface MTLDebugIndirectCommandBuffer : MTLToolsIndirectCommandBuffer <MTLDebugResourcePurgeable> {
    NSMutableArray *_optimizedRangeList;
    MTLIndirectCommandBufferDescriptor *_desc;
    unsigned long long _maxCommandCount;
    id<MTLIndirectCommandBuffer> _iCB;
    BOOL _isRender;
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _purgeableStateToken;
    BOOL _purgeableStateHasBeenSet;
}

@property (readonly) NSMutableArray *optimizedRangeList;
@property (readonly) MTLIndirectCommandBufferDescriptor *descriptor;

- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (void)dealloc;
- (id)indirectRenderCommandAtIndex:(unsigned long long)a0;
- (void)resetWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)indirectComputeCommandAtIndex:(unsigned long long)a0;
- (BOOL)purgeableStateValidForRendering;
- (id)initWithIndirectCommandBuffer:(id)a0 device:(id)a1 descriptor:(id)a2 maxCommandCount:(unsigned long long)a3 options:(unsigned long long)a4;
- (void)lockPurgeableState;
- (void)unlockPurgeableState;

@end
