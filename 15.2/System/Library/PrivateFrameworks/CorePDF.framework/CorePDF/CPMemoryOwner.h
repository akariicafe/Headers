@interface CPMemoryOwner : NSObject <CPDisposable> {
    void *memory;
}

- (void)dispose;
- (void)finalize;
- (void)dealloc;
- (id)initWithAllocatedMemory:(void *)a0;

@end
