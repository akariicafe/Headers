@interface REBlockClassLoader : REClassLoader {
    id /* block */ _block;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_enumerateBundleConfigurations:(id /* block */)a0;
- (void)_enumerateClassesWithBlock:(id /* block */)a0;
- (id)initWithBlock:(id /* block */)a0 configuration:(id)a1;

@end
