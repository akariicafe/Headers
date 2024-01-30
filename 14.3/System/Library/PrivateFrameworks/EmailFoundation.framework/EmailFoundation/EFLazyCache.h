@class NSString, NSCache, NSRecursiveLock;
@protocol EFLazyCacheDelegate;

@interface EFLazyCache : NSObject <NSCacheDelegate> {
    NSRecursiveLock *_lock;
    NSCache *_storage;
    struct { unsigned char delegateRespondsToLazyCacheWillEvictObject : 1; } _flags;
}

@property (weak, nonatomic) id<EFLazyCacheDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCountLimit:(unsigned long long)a0;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_exchangeOriginalObject:(id)a0 forKey:(id)a1 withObject:(id)a2;
- (id)storedObjectForKey:(id)a0;
- (long long)waiterCountForKey:(id)a0;
- (void)removeAllObjects;
- (id)objectForKey:(id)a0 generator:(id /* block */)a1;
- (id)cachedObjectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;

@end
