@class NSMutableDictionary;

@interface BWSimpleCache : NSObject {
    NSMutableDictionary *_cache;
    struct OpaqueFigSimpleMutex { } *_propertyMutex;
}

+ (void)initialize;

- (void)cacheObject:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (id)init;
- (id)copyAndClearObjectForKey:(id)a0;

@end
