@interface _NTKBundleBlockComplicationLoader : NTKBundleComplicationDataSourceLoader

@property (copy, nonatomic) id /* block */ block;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_loadClassesUsingBlock:(id /* block */)a0;

@end
