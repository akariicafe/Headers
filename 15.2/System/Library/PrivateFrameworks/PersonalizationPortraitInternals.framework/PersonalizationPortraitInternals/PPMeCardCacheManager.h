@class _PASLock;

@interface PPMeCardCacheManager : NSObject {
    _PASLock *_lock;
}

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)accessCacheWithBlock:(id /* block */)a0;

@end
