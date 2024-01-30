@class _PASLock;

@interface PPMeCardCacheManager : NSObject {
    _PASLock *_lock;
}

- (id)initWithPath:(id)a0;
- (void)accessCacheWithBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
