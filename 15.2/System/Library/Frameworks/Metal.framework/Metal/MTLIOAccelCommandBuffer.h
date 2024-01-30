@class NSObject, NSMutableSet, MTLIOAccelDevice;
@protocol MTLDevice, OS_dispatch_semaphore;

@interface MTLIOAccelCommandBuffer : _MTLCommandBuffer {
    unsigned long long *_submitToHardwareTimeStampPointer;
    unsigned long long _protectionOptions;
    void *_scheduledCallbackBlockPtr;
    void *_completedCallbackBlockPtr;
    NSObject<OS_dispatch_semaphore> *_commitAndResetSem;
    NSMutableSet *_purgedResources;
}

@property (readonly) struct MTLIOAccelCommandBufferResourceInfo { unsigned long long x0; unsigned int *x1; unsigned int *x2; unsigned int *x3; id x4; struct IOAccelResourceInfo { struct __IOSurface *x0; unsigned long x1 : 56; unsigned char x2 : 8; unsigned int x3; } x5; } *commandBufferResourceInfo;
@property (readonly) struct IOAccelResourceList { unsigned short x0[256]; struct IOAccelSegmentResourceDescriptorGroup *x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; void /* function */ *x11; void *x12; } *ioAccelResourceList;
@property (readonly) MTLIOAccelDevice<MTLDevice> *device;
@property (readonly) struct MTLIOAccelCommandBufferStorage { id x0; struct MTLIOAccelCommandBufferStoragePool *x1; struct { struct MTLIOAccelCommandBufferStorage *x0; struct MTLIOAccelCommandBufferStorage **x1; } x2; id x3; char *x4; char *x5; char *x6; id x7; char *x8; char *x9; struct IOAccelSegmentListHeader *x10; struct IOAccelSegmentResourceListHeader *x11; struct IOAccelSegmentResourceDescriptorGroup *x12; struct IOAccelResourceList { unsigned short x0[256]; struct IOAccelSegmentResourceDescriptorGroup *x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; void /* function */ *x11; void *x12; } x13; id x14; id x15; unsigned long long x16; unsigned long long x17; id *x18; struct MTLIOAccelCommandBufferResourceInfo *x19; id x20; id *x21; unsigned int x22; unsigned long long x23; struct IOAccelSegmentListShmemHeader *x24; struct IOAccelSegmentKernelCommmandListHeader *x25; unsigned int x26; unsigned int x27; int x28; int x29; unsigned int x30; struct IOAccelSegmentResourceListHeader *x31; struct IOAccelSegmentResourceDescriptorGroup *x32; } *commandBufferStorage;

- (void)commitAndReset;
- (void)pushDebugGroup:(id)a0;
- (void)setCurrentCommandEncoder:(id)a0;
- (void)popDebugGroup;
- (id)initWithQueue:(id)a0 retainedReferences:(BOOL)a1 synchronousDebugMode:(BOOL)a2;
- (void)growKernelCommandBuffer:(unsigned long long)a0;
- (void)endCurrentSegment;
- (void)didCompleteWithStartTime:(unsigned long long)a0 endTime:(unsigned long long)a1 error:(id)a2;
- (void)validate;
- (void)commit;
- (void)growSegmentList;
- (void *)_reserveKernelCommandBufferSpace:(unsigned long long)a0;
- (void)encodeWaitForEvent:(id)a0 value:(unsigned long long)a1 timeout:(unsigned int)a2;
- (void)allocCommandBufferResourceAtIndex:(unsigned int)a0;
- (unsigned long long)protectionOptions;
- (void)kernelCommandCollectTimeStamp;
- (id)akResourceList;
- (void)setCurrentSegmentListPointer:(void *)a0;
- (void)getCurrentKernelCommandBufferPointer:(void **)a0 end:(void **)a1;
- (id)akPrivateResourceList;
- (void)_debugBytes:(const char *)a0 length:(unsigned long long)a1 output_type:(unsigned int)a2;
- (void)getSegmentListPointerStart:(void **)a0 current:(void **)a1 end:(void **)a2;
- (void)addPurgedResource:(id)a0;
- (void)setProtectionOptions:(unsigned long long)a0;
- (void)commitEncoder;
- (struct IOAccelSegmentListHeader { unsigned long long x0; unsigned int x1; unsigned int x2; struct IOAccelSegmentResourceListHeader { unsigned long long x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct IOAccelSegmentResourceDescriptorGroup { unsigned int x0[6]; unsigned long long x1[6]; unsigned short x2[6]; unsigned short x3; unsigned short x4; } x5[0]; } x3[0]; } *)getSegmentListHeader;
- (void)getCurrentKernelCommandBufferStart:(void **)a0 current:(void **)a1 end:(void **)a2;
- (void)encodeWaitForEvent:(id)a0 value:(unsigned long long)a1;
- (void)beginSegment:(void *)a0;
- (id)initWithQueue:(id)a0 retainedReferences:(BOOL)a1;
- (void)addPurgedHeap:(id)a0;
- (void)dealloc;
- (void)encodeSignalEvent:(id)a0 value:(unsigned long long)a1;
- (void)kprintfBytes:(const char *)a0 length:(unsigned long long)a1;
- (void)setLabel:(id)a0;
- (void)_encodePurgedResources;
- (void)setCurrentKernelCommandBufferPointer:(void *)a0;
- (void)encodeSubmitSleepMS:(unsigned int)a0;

@end
