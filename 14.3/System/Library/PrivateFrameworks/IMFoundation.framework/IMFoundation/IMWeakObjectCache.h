@class NSMutableDictionary;

@interface IMWeakObjectCache : NSObject {
    NSMutableDictionary *_weakObjectCache;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _tableLock;
}

+ (id)sharedInstance;

- (id)objectForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyOrSetObject:(id)a0 forKey:(id)a1;
- (id)copyObjectForKey:(id)a0;
- (void)removeObject:(id)a0 key:(id)a1;

@end
