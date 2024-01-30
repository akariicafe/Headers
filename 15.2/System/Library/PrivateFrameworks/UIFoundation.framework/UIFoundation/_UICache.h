@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _UICache : NSObject {
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_source> *_memoryWarningsSource;
    BOOL _clearsCacheOnLowMemoryWarnings;
    BOOL _clearsCacheOnApplicationBackground;
    id _noteObserver;
}

@property (nonatomic) BOOL clearsCacheOnLowMemoryWarnings;
@property (nonatomic) BOOL clearsCacheOnApplicationBackground;

- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)cacheKeys;
- (id)init;
- (id)objectForKey:(id)a0;
- (id)retainedObjectForKey:(id)a0;
- (void)dealloc;

@end
