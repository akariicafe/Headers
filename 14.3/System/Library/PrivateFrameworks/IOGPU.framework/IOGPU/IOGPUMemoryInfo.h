@class IOGPUMetalResource;

@interface IOGPUMemoryInfo : NSObject {
    void *memlist_key;
    IOGPUMetalResource *fResourceListHead;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _memoryInfoLock;
}

+ (id)initialize;

- (void)shutdown;
- (void)unlock;
- (void)lock;
- (id)init;
- (void *)addDataSource:(id /* block */)a0;
- (void)dealloc;
- (void)removeResourceFromList:(id)a0;
- (struct __CFArray { } *)annotationList;
- (void)removeDataSource:(void *)a0;
- (void)addResourceToList:(id)a0;

@end
