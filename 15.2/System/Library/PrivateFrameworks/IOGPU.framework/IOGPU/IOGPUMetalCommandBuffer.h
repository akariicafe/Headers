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
@property (readonly) struct IOGPUResourceList { unsigned int x0[114]; unsigned int *x1; unsigned long long *x2; union { } *x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; struct IOGPUSegmentResourceDescriptorGroup *x12; unsigned long long x13; unsigned long long x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; void /* function */ *x22; void *x23; } *ioGPUResourceList;
@property (readonly) IOGPUMetalDevice<MTLDevice> *device;
@property (readonly) struct IOGPUMetalCommandBufferStorage { id x0; struct IOGPUMetalCommandBufferStoragePool *x1; struct { struct IOGPUMetalCommandBufferStorage *x0; struct IOGPUMetalCommandBufferStorage **x1; } x2; id x3; char *x4; char *x5; char *x6; struct IOGPUMetalCommandBufferSidebandBuffer { id x0; char *x1; char *x2; char *x3; } x7; id x8; char *x9; char *x10; struct IOGPUSegmentListHeader *x11; struct IOGPUSegmentResourceListHeader *x12; struct IOGPUSegmentResourceDescriptorGroup *x13; struct IOGPUResourceList { unsigned int x0[114]; unsigned int *x1; unsigned long long *x2; union { } *x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; struct IOGPUSegmentResourceDescriptorGroup *x12; unsigned long long x13; unsigned long long x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; void /* function */ *x22; void *x23; } x14; id x15; id x16; unsigned long long x17; unsigned long long x18; id *x19; struct IOGPUMetalCommandBufferResourceInfo *x20; id x21; id *x22; unsigned int x23; unsigned long long x24; struct IOGPUSegmentListShmemHeader *x25; struct IOGPUSegmentKernelCommmandListHeader *x26; unsigned int x27; unsigned int x28; int x29; int x30; unsigned int x31; struct IOGPUSegmentResourceListHeader *x32; struct IOGPUSegmentResourceDescriptorGroup *x33; id x34; char *x35; char *x36; } *commandBufferStorage;

- (void)commitAndReset;
- (void)pushDebugGroup:(id)a0;
- (void)setCurrentCommandEncoder:(id)a0;
- (void)popDebugGroup;
- (id)initWithQueue:(id)a0 retainedReferences:(BOOL)a1 synchronousDebugMode:(BOOL)a2;
- (void)growSidebandBuffer:(unsigned int)a0;
- (void)growKernelCommandBuffer:(unsigned long long)a0;
- (void)endCurrentSegment;
- (void)didCompleteWithStartTime:(unsigned long long)a0 endTime:(unsigned long long)a1 error:(id)a2;
- (void)growDebugBuffer:(unsigned int)a0;
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
- (struct IOGPUSegmentListHeader { unsigned long long x0; unsigned int x1; unsigned int x2; struct IOGPUSegmentResourceListHeader { unsigned long long x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; struct IOGPUSegmentResourceDescriptorGroup { unsigned int x0[6]; unsigned int x1[6]; unsigned short x2[6]; unsigned short x3; unsigned short x4; } x7[0]; } x3[0]; } *)getSegmentListHeader;
- (void)allocDebugBuffer;
- (void)getCurrentKernelCommandBufferStart:(void **)a0 current:(void **)a1 end:(void **)a2;
- (void)encodeWaitForEvent:(id)a0 value:(unsigned long long)a1;
- (void)beginSegment:(void *)a0;
- (id)initWithQueue:(id)a0 retainedReferences:(BOOL)a1;
- (void)addPurgedHeap:(id)a0;
- (void)dealloc;
- (void)encodeSignalEvent:(id)a0 value:(unsigned long long)a1;
- (void)kprintfBytes:(const char *)a0 length:(unsigned long long)a1;
- (void)setLabel:(id)a0;
- (void)getDebugBufferPointerStart:(void **)a0 end:(void **)a1;
- (void)_encodePurgedResources;
- (void)setCurrentKernelCommandBufferPointer:(void *)a0;
- (void)encodeSubmitSleepMS:(unsigned int)a0;
- (void)allocateSidebandBuffer:(unsigned int)a0;

@end
