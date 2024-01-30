@class _PASLock;

@interface _PASLRUCache : NSObject {
    _PASLock *_lock;
    unsigned long long _countLimit;
}

- (id)objectForKey:(id)a0;
- (id)initWithCountLimit:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;

@end
