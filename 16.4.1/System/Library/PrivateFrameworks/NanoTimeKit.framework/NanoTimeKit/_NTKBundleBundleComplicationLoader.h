@class NSArray;

@interface _NTKBundleBundleComplicationLoader : NTKBundleComplicationDataSourceLoader

@property (retain, nonatomic) NSArray *urls;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_enumerateBundles:(id /* block */)a0;
- (void)_loadClassesUsingBlock:(id /* block */)a0;

@end
