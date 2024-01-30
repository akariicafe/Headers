@class NSString, NSDictionary, NSMutableDictionary;
@protocol HMCacheDelegate;

@interface HMCache : HMFObject <HMCache> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_cachedItems;
}

@property (readonly, copy) NSString *cacheName;
@property (readonly, copy) NSDictionary *cachedObjects;
@property (weak) id<HMCacheDelegate> delegate;
@property (readonly, copy) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (void)setData:(id)a0 forKey:(id)a1;
- (id)dataForKey:(id)a0;
- (void)setNumber:(id)a0 forKey:(id)a1;
- (id)numberForKey:(id)a0;
- (void)setString:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)initWithCachedObjects:(id)a0 name:(id)a1;
- (id)stringForKey:(id)a0;
- (void)_setData:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
