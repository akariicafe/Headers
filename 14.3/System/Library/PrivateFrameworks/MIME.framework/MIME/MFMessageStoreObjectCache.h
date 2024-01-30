@class NSLock, NSMutableDictionary;

@interface MFMessageStoreObjectCache : NSObject {
    NSLock *_lock;
    unsigned long long _capacity;
    NSMutableDictionary *_cache;
}

@property (copy, nonatomic) id /* block */ keyGenerator;
@property (copy, nonatomic) id /* block */ comparator;

- (void).cxx_destruct;
- (id)description;
- (void)flush;
- (id)debugDescription;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)addObject:(id)a0 forMessage:(id)a1 kind:(long long)a2;
- (void)_nts_evictObject;
- (void)_nts_setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forMessage:(id)a1 kind:(long long)a2;
- (void)removeObjectForMessage:(id)a0 kind:(long long)a1;
- (id)objectForMessage:(id)a0 kind:(long long)a1;

@end
