@class NSString, IOGPUMetalHeap, IOGPUMetalDevice;
@protocol MTLHeap, MTLDevice;

@interface IOGPUMetalResource : _MTLResource <MTLResourceSPI> {
    struct _IOGPUMetalResource { union { unsigned long long reserved[4]; } vendor; struct IOGPUResourceInfo { struct __IOSurface *iosurface; unsigned long resourceSize : 56; unsigned char iosurfaceField : 8; unsigned int resourceID; } info; unsigned long long sharedAllocationUniqueId; unsigned long long cachedAllocationUniqueId; unsigned long long gpuAddress; IOGPUMetalDevice<MTLDevice> *device; NSString *label; unsigned long long globalTraceObjectID; unsigned long long labelTraceID; struct __IOGPUResource *resourceRef; struct IOGPUClientSharedRO *clientSharedRO; void *virtualAddress; unsigned long long options; unsigned long long storageMode; unsigned long long cpuCacheMode; int responsibleProcess; unsigned long long purgeableState; BOOL purgeableAllowed; IOGPUMetalHeap *heap; IOGPUMetalResource *resource; unsigned long long offset; unsigned long long length; BOOL pinned; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } labelLock; } _res;
    IOGPUMetalResource *next;
    IOGPUMetalResource *prev;
    unsigned long long uniqueId;
}

@property (readonly) struct __IOGPUResource { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __IOGPUDevice *x1; void *x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned long long x7; unsigned long long x8; struct IOGPUClientSharedRO *x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14[0]; } *resourceRef;
@property (readonly, nonatomic) void *virtualAddress;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly, nonatomic) unsigned int resourceID;
@property (readonly, nonatomic) unsigned long long resourceSize;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) unsigned long long unfilteredResourceOptions;
@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long protectionOptions;
@property (readonly) unsigned long long heapOffset;
@property int responsibleProcess;
@property (readonly) unsigned long long allocationID;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) id<MTLHeap> heap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct __CFArray { } *)copyAnnotations;
- (BOOL)isAliasable;
- (void)_setLabel:(id)a0;
- (void)makeAliasable;
- (BOOL)isComplete;
- (id)initWithResource:(id)a0;
- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (void)dealloc;
- (void)waitUntilComplete;
- (void)annotateResource:(struct __CFDictionary { } *)a0;
- (struct __CFDictionary { } *)copyAnnotationDictionary:(unsigned long long)a0 obj_key_name:(struct __CFString { } *)a1 obj_dict:(struct __CFDictionary { } *)a2;
- (BOOL)doesAliasAllResources:(const id *)a0 count:(unsigned long long)a1;
- (BOOL)doesAliasAnyResources:(const id *)a0 count:(unsigned long long)a1;
- (BOOL)doesAliasResource:(id)a0;
- (id)initMemoryless:(id)a0 descriptor:(id)a1;
- (id)initStandinWithDevice:(id)a0;
- (id)initWithDevice:(id)a0 options:(unsigned long long)a1 args:(struct IOGPUNewResourceArgs { struct IOGPUNewResourceData { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned int x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned int x14; union { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; } x0; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4[2]; } x1; } x15; } x0; } *)a2 argsSize:(unsigned int)a3;
- (BOOL)isPurgeable;
- (id)retainedLabel;
- (int)setOwnerWithIdentity:(unsigned int)a0;

@end
