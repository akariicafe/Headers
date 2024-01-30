@class IOGPUMetalResource;

@interface IOGPUMemoryInfo : NSObject {
    void *memlist_key;
    IOGPUMetalResource *fResourceListHead;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _memoryInfoLock;
}

+ (id)initialize;

- (struct __CFArray { } *)annotationList;
- (void)unlock;
- (void)removeDataSource:(void *)a0;
- (void)shutdown;
- (void *)addDataSource:(id /* block */)a0;
- (void)addResourceToList:(id)a0;
- (void)lock;
- (id)init;
- (void)dealloc;
- (void)removeResourceFromList:(id)a0;

@end
