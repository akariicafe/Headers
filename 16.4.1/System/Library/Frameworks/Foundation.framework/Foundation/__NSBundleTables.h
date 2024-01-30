@class NSMapTable, NSPointerArray, NSHashTable, NSLock;

@interface __NSBundleTables : NSObject {
    NSLock *_lock;
    NSHashTable *_staticFrameworks;
    NSHashTable *_loadedBundles;
    NSHashTable *_loadedFrameworks;
    NSMapTable *_resolvedPathToBundles;
    NSMapTable *_bundleForClassMap;
    NSPointerArray *_immortalBundles;
}

- (void)dealloc;
- (id)init;

@end
