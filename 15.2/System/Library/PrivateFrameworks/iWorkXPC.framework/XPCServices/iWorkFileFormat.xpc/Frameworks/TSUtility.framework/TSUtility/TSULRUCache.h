@class NSArray, TSUNoCopyDictionary;

@interface TSULRUCache : NSObject {
    struct atomic<unsigned long> { struct __cxx_atomic_impl<unsigned long, std::__cxx_atomic_base_impl<unsigned long>> { _Atomic unsigned long long __a_value; } __a_; } _lastUsedCounter;
}

@property (readonly, nonatomic) TSUNoCopyDictionary *data;
@property (nonatomic) unsigned long long maxSize;
@property (weak, nonatomic) id callbackTarget;
@property (nonatomic) SEL callback;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *allValues;
@property (readonly, nonatomic) NSArray *allKeys;

- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)description;
- (id)initWithMaxSize:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (void)dealloc;
- (void)p_removeOldestObject;
- (void)setEvictionCallbackTarget:(id)a0 selector:(SEL)a1;
- (void)clearEvictionCallbackTarget;

@end
