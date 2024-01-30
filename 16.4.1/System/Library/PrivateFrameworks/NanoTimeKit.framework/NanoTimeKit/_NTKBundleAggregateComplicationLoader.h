@class NSOrderedSet;

@interface _NTKBundleAggregateComplicationLoader : NTKBundleComplicationDataSourceLoader

@property (copy, nonatomic) NSOrderedSet *loaders;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)_loadClassesUsingBlock:(id /* block */)a0;

@end
