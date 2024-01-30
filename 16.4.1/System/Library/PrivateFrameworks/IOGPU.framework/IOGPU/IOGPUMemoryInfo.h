@class IOGPUMetalResource;

@interface IOGPUMemoryInfo : NSObject {
    void *memlist_key;
    IOGPUMetalResource *fResourceListHead;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _memoryInfoLock;
}

+ (id)initialize;

- (void)removeDataSource:(void *)a0;
- (void)lock;
- (void)unlock;
- (void)removeResourceFromList:(id)a0;
- (void)shutdown;
- (void *)addDataSource:(id /* block */)a0;
- (void)dealloc;
- (id)init;
- (struct __CFArray { } *)annotationList;
- (void)addResourceToList:(id)a0;

@end
