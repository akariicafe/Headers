@interface NSURLCacheInternal : NSObject {
    unsigned long long memoryCapacity;
    unsigned long long diskCapacity;
    struct _CFURLCache { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct shared_ptr<__CFURLCache> { struct __CFURLCache *x0; struct __shared_weak_count *x1; } x1; } *_cacheRef;
}

- (void)dealloc;

@end
