@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface WFDiskCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy, nonatomic) NSURL *cacheURL;

+ (id)workflowCache;

- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (id)fileURLForKey:(id)a0;
- (id)initWithApplicationGroupIdentifier:(id)a0 name:(id)a1;
- (id)initWithCacheDirectory:(id)a0 name:(id)a1;
- (id)initWithCacheURL:(id)a0 name:(id)a1;
- (void)removeObjectForKey:(id)a0 completion:(id /* block */)a1;
- (void)objectForKey:(id)a0 completion:(id /* block */)a1;
- (void)setObject:(id)a0 forKeyComponents:(id)a1;
- (void)removeObjectForKeyComponents:(id)a0;
- (id)objectForKeyComponents:(id)a0;
- (void)actuallySetObject:(id)a0 forKey:(id)a1;
- (void)actuallyRemoveObjectForKey:(id)a0;
- (id)actuallyGetObjectForKey:(id)a0;

@end
