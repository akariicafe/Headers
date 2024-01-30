@class NSObject, NSMutableSet, IOGPUMetalDevice;
@protocol MTLDevice, OS_dispatch_semaphore;

@interface IOGPUMetalCommandBuffer : _MTLCommandBuffer {
    unsigned long long *_submitToHardwareTimeStampPointer;
    unsigned long long _protectionOptions;
    void *_scheduledCallbackBlockPtr;
    void *_completedCallbackBlockPtr;
    NSObject<OS_dispatch_semaphore> *_commitAndResetSem;
    NSMutableSet *_purgedResources;
}

@property (readonly) struct IOGPUMetalCommandBufferResourceInfo { unsigned long long x0; unsigned int *x1; unsigned int *x2; unsigned int *x3; id x4; struct IOGPUResourceInfo { struct __IOSurface *x0; unsigned long x1 : 56; unsigned char x2 : 8; unsigned int x3; } x5; } *commandBufferResourceInfo;
@property (readonly) struct IOGPUResourceList { unsigned short x0[256]; struct IOGPUSegmentResourceDescriptorGroup *x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; void /* function */ *x11; void *x12; } *ioGPUResourceList;
@property (readonly) IOGPUMetalDevice<MTLDevice> *device;
@property (readonly) struct IOGPUMetalCommandBufferStorage { id x0; struct IOGPUMetalCommandBufferStoragePool *x1; struct { struct IOGPUMetalCommandBufferStorage *x0; struct IOGPUMetalCommandBufferStorage **x1; } x2; id x3; char *x4; char *x5; char *x6; id x7; char *x8; char *x9; struct IOGPUSegmentListHeader *x10; struct IOGPUSegmentResourceListHeader *x11; struct IOGPUSegmentResourceDescriptorGroup *x12; struct IOGPUResourceList { unsigned short x0[256]; struct IOGPUSegmentResourceDescriptorGroup *x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; void /* function */ *x11; void *x12; } x13; id x14; id x15; unsigned long long x16; unsigned long long x17; id *x18; struct IOGPUMetalCommandBufferResourceInfo *x19; id x20; id *x21; unsigned int x22; unsigned long long x23; struct IOGPUSegmentListShmemHeader *x24; struct IOGPUSegmentKernelCommmandListHeader *x25; unsigned int x26; unsigned int x27; int x28; int x29; unsigned int x30; struct IOGPUSegmentResourceListHeader *x31; struct IOGPUSegmentResourceDescriptorGroup *x32; id x33; char *x34; char *x35; } *commandBufferStorage;

- (void)commit;
- (void)pushDebugGroup:(id)a0;
- (void)beginSegment:(void *)a0;
- (void)_encodePurgedResources;
- (id)initWithQueue:(id)a0 retainedReferences:(BOOL)a1;
- (void)growSegmentList;
- (void)allocDebugBuffer;
- (void)getCurrentKernelCommandBufferStart:(void **)a0 current:(void **)a1 end:(void **)a2;
- (void)dealloc;
- (void)validate;
- (void)addPurgedHeap:(id)a0;
- (void)allocCommandBufferResourceAtIndex:(unsigned int)a0;
- (void)setCurrentCommandEncoder:(id)a0;
- (void)kernelCommandCollectTimeStamp;
- (void)setLabel:(id)a0;
- (void)growKernelCommandBuffer:(unsigned long long)a0;
- (unsigned long long)protectionOptions;
- (void)_debugBytes:(const char *)a0 length:(unsigned long long)a1 output_type:(unsigned int)a2;
- (void)encodeSignalEvent:(id)a0 value:(unsigned long long)a1;
- (void)getCurrentKernelCommandBufferPointer:(void **)a0 end:(void **)a1;
- (struct IOGPUSegmentListHeader { unsigned long long x0; unsigned int x1; unsigned int x2; struct IOGPUSegmentResourceListHeader { unsigned long long x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct IOGPUSegmentResourceDescriptorGroup { unsigned int x0[6]; unsigned int x1[6]; unsigned short x2[6]; unsigned short x3; unsigned short x4; } x5[0]; } x3[0]; } *)getSegmentListHeader;
- (void)endCurrentSegment;
- (void)encodeSubmitSleepMS:(unsigned int)a0;
- (void)didCompleteWithStartTime:(unsigned long long)a0 endTime:(unsigned long long)a1 error:(id)a2;
- (id)initWithQueue:(id)a0 retainedReferences:(BOOL)a1 synchronousDebugMode:(BOOL)a2;
- (void)commitEncoder;
- (void)setProtectionOptions:(unsigned long long)a0;
- (void)addPurgedResource:(id)a0;
- (void)getDebugBufferPointerStart:(void **)a0 end:(void **)a1;
- (void)setCurrentSegmentListPointer:(void *)a0;
- (void)commitAndReset;
- (void)encodeWaitForEvent:(id)a0 value:(unsigned long long)a1 timeout:(unsigned int)a2;
- (void)setCurrentKernelCommandBufferPointer:(void *)a0;
- (void)kprintfBytes:(const char *)a0 length:(unsigned long long)a1;
- (id)akPrivateResourceList;
- (void *)_reserveKernelCommandBufferSpace:(unsigned long long)a0;
- (id)akResourceList;
- (void)popDebugGroup;
- (void)growDebugBuffer:(unsigned int)a0;
- (void)getSegmentListPointerStart:(void **)a0 current:(void **)a1 end:(void **)a2;
- (void)encodeWaitForEvent:(id)a0 value:(unsigned long long)a1;

@end
