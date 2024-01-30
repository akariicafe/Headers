@interface DTDSCSymbolicatorCache : NSObject {
    struct __CFDictionary { } *_sharedCacheUUIDSymbolicators;
}

- (void)dealloc;
- (id)init;
- (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })symbolicatorForSharedCacheUUID:(id)a0;

@end
