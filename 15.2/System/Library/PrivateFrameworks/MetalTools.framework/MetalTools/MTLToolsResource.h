@class NSString, MTLToolsHeap;
@protocol MTLHeap, MTLDevice;

@interface MTLToolsResource : MTLToolsObject <MTLResourceSPI> {
    MTLToolsHeap *_heap;
}

@property (readonly, nonatomic) unsigned long long options;
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

- (BOOL)isAliasable;
- (BOOL)isComplete;
- (BOOL)isPurgeable;
- (void)waitUntilComplete;
- (BOOL)doesAliasAnyResources:(const id *)a0 count:(unsigned long long)a1;
- (BOOL)doesAliasResource:(id)a0;
- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (BOOL)doesAliasAllResources:(const id *)a0 count:(unsigned long long)a1;
- (int)setOwnerWithIdentity:(unsigned int)a0;
- (void)makeAliasable;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (id)initWithBaseObject:(id)a0 parent:(id)a1 heap:(id)a2;
- (void)validateCPUReadable;
- (void)validateCPUWriteable;

@end
