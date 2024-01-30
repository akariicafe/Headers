@class _PASLock;

@interface PPContactDiskCacheManager : NSObject {
    _PASLock *_lock;
}

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)accessCacheWithBlock:(id /* block */)a0;
- (void)mutateCacheWithBlock:(id /* block */)a0;

@end
