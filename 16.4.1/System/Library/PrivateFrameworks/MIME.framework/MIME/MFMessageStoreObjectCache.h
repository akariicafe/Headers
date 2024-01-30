@class NSLock, NSMutableDictionary;

@interface MFMessageStoreObjectCache : NSObject {
    NSLock *_lock;
    unsigned long long _capacity;
    NSMutableDictionary *_cache;
}

@property (copy, nonatomic) id /* block */ keyGenerator;
@property (copy, nonatomic) id /* block */ comparator;

- (id)addObject:(id)a0 forMessage:(id)a1 kind:(long long)a2;
- (void)flush;
- (void)setObject:(id)a0 forMessage:(id)a1 kind:(long long)a2;
- (id)debugDescription;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)_nts_evictObject;
- (id)objectForMessage:(id)a0 kind:(long long)a1;
- (id)description;
- (void)_nts_setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)removeObjectForMessage:(id)a0 kind:(long long)a1;
- (void)removeAllObjectsForMessage:(id)a0;

@end
