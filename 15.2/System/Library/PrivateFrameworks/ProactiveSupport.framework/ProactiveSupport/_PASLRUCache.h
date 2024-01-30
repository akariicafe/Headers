@class _PASLock;

@interface _PASLRUCache : NSObject {
    _PASLock *_lock;
    unsigned long long _countLimit;
}

- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithCountLimit:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;

@end
