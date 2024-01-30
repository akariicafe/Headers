@class NSURL, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WFDiskCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *overridingClassMap;
@property (readonly, copy, nonatomic) NSURL *cacheURL;

+ (id)workflowCache;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)initWithName:(id)a0;
- (id)fileURLForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (id)actuallyGetObjectOfClasses:(id)a0 forKey:(id)a1;
- (void)actuallyRemoveObjectForKey:(id)a0;
- (void)actuallySetObject:(id)a0 forKey:(id)a1;
- (id)initWithApplicationGroupIdentifier:(id)a0 name:(id)a1;
- (id)initWithCacheDirectory:(id)a0 name:(id)a1;
- (id)initWithCacheURL:(id)a0 name:(id)a1;
- (id)objectOfClasses:(id)a0 forKey:(id)a1;
- (void)objectOfClasses:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (id)objectOfClasses:(id)a0 forKeyComponents:(id)a1;
- (void)removeObjectForKey:(id)a0 completion:(id /* block */)a1;
- (void)removeObjectForKeyComponents:(id)a0;
- (void)setClass:(Class)a0 forCachedClassName:(id)a1;
- (void)setObject:(id)a0 forKeyComponents:(id)a1;

@end
