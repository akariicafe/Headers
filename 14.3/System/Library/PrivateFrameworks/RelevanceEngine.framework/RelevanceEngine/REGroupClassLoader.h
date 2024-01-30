@class NSOrderedSet;

@interface REGroupClassLoader : REClassLoader {
    NSOrderedSet *_loaders;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)enumerateObjectsWithBlock:(id /* block */)a0;
- (id)initWithLoaders:(id)a0;
- (void)_enumerateClassesWithBlock:(id /* block */)a0;
- (void)_enumerateBundleConfigurations:(id /* block */)a0;

@end
