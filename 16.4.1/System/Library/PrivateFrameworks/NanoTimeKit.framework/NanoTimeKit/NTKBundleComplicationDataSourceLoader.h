@class NSArray;

@interface NTKBundleComplicationDataSourceLoader : NSObject <NSCopying> {
    NSArray *_cachedDataSources;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedDataSourcesLock;
}

+ (id)aggregateComplicationLoaderWithComplicationLoaders:(id)a0;
+ (id)complicationDataSourceLoaderWithBlock:(id /* block */)a0;
+ (id)complicationDataSourceLoaderWithDirectories:(id)a0;
+ (id)complicationDataSourceLoaderWithDirectory:(id)a0;
+ (id)defaultComplicationDataSourceLoader;
+ (id)disabledComplicationDataSourceLoader;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_loadClassesUsingBlock:(id /* block */)a0;
- (id)cachedDataSources;
- (void)enumerationComplicationClassesWithBlock:(id /* block */)a0;

@end
