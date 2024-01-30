@class NSMutableDictionary;

@interface SGNoCloudNSUbiquitousKeyValueStore : NSUbiquitousKeyValueStore {
    NSMutableDictionary *_kv;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setData:(id)a0 forKey:(id)a1;
- (id)dataForKey:(id)a0;
- (void)synchronizeWithCompletionHandler:(id /* block */)a0;
- (void)setArray:(id)a0 forKey:(id)a1;
- (BOOL)synchronize;
- (id)arrayForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
