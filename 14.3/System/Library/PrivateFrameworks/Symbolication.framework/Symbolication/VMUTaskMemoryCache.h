@interface VMUTaskMemoryCache : NSObject {
    struct mapped_memory_t { } *_memoryRegions;
    unsigned int _task;
    BOOL _taskIs64Bit;
    BOOL _taskIsTranslated;
    BOOL _stopped;
}

+ (id)taskMemoryCacheForTask:(unsigned int)a0;
+ (BOOL)taskIs64Bit:(unsigned int)a0;

- (id)initWithTask:(unsigned int)a0;
- (void)dealloc;
- (void)flushMemoryCache;
- (int)mapAddress:(unsigned long long)a0 size:(unsigned long long)a1;
- (int)mapAddress:(unsigned long long)a0 size:(unsigned long long)a1 returnedAddress:(unsigned long long *)a2 returnedSize:(unsigned long long *)a3;
- (BOOL)taskIsTranslated;
- (int)stopPeeking;
- (int)peekAtAddress:(unsigned long long)a0 size:(unsigned long long)a1 returnsBuf:(void **)a2;
- (void)enumerateMemoryCache:(id /* block */)a0;
- (int)startPeeking;
- (int)readPointerAt:(unsigned long long)a0 value:(unsigned long long *)a1;
- (BOOL)copyRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0 to:(void *)a1;

@end
