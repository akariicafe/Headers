@class NSArray;

@interface REObjectClassLoader : REClassLoader {
    NSArray *_objects;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateObjectsWithBlock:(id /* block */)a0;
- (id)initWithObjects:(id)a0 configuration:(id)a1;
- (void)_enumerateClassesWithBlock:(id /* block */)a0;

@end
