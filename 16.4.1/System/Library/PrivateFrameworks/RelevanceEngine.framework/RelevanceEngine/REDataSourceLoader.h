@class REClassLoader;

@interface REDataSourceLoader : NSObject <NSCopying> {
    REClassLoader *_loader;
}

+ (id)aggregateDataSourceLoaderWithDataSourceLoaders:(id)a0;
+ (id)dataSourceLoaderWithBlock:(id /* block */)a0;
+ (id)dataSourceLoaderWithDirectories:(id)a0 dataSourceKey:(id)a1;
+ (id)dataSourceLoaderWithDataSources:(id)a0;
+ (id)dataSourceLoaderWithDirectories:(id)a0;
+ (id)dataSourceLoaderWithDirectory:(id)a0;
+ (id)defaultDataSourceLoader;
+ (id)disabledDataSourceLoader;

- (void)prewarm;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)enumerateDataSourceClassesWithBlock:(id /* block */)a0;
- (void)enumerateBundleConfigurations:(id /* block */)a0;
- (void)enumerateDataSourceObjectsWithBlock:(id /* block */)a0;

@end
