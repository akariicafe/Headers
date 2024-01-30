@class NSArray;
@protocol REClassLoaderConfiguration;

@interface REClassLoader : NSObject <NSCopying> {
    NSArray *_cachedDataSources;
    NSArray *_cachedBundleConfigurations;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _loadingLock;
}

@property (readonly, nonatomic) id<REClassLoaderConfiguration> configuration;

+ (id)loaderWithDirectories:(id)a0 dataSourceKey:(id)a1 configuration:(id)a2;
+ (id)loaderWithBlock:(id /* block */)a0 configuration:(id)a1;
+ (id)loaderWithObjects:(id)a0 configuration:(id)a1;
+ (id)groupLoaderWithLoaders:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithConfiguration:(id)a0;
- (void)prewarm;
- (BOOL)isEqual:(id)a0;
- (void)enumerateObjectsWithBlock:(id /* block */)a0;
- (void)enumerateClassesWithBlock:(id /* block */)a0;
- (void)enumerateBundleConfigurations:(id /* block */)a0;
- (void)_enumerateClassesWithBlock:(id /* block */)a0;
- (void)_enumerateBundleConfigurations:(id /* block */)a0;

@end
