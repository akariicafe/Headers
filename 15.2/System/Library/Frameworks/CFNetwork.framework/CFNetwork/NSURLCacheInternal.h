@interface NSURLCacheInternal : NSObject {
    unsigned long long memoryCapacity;
    unsigned long long diskCapacity;
    void *_cacheRef;
}

- (void)dealloc;

@end
