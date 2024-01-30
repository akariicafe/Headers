@interface CPMemoryOwner : NSObject <CPDisposable> {
    void *memory;
}

- (void)finalize;
- (void)dispose;
- (void)dealloc;
- (id)initWithAllocatedMemory:(void *)a0;

@end
