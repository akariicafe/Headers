@interface TSTIntegerKeyDict : NSObject {
    void *mMap;
}

- (void)removeObjectForKey:(unsigned int)a0;
- (void)removeAllObjects;
- (id)allValues;
- (void)removeFirstObject;
- (void)setObject:(id)a0 forKey:(unsigned int)a1;
- (void)makeObjectsPerformSelector:(SEL)a0;
- (id)init;
- (id)objectForKey:(unsigned int)a0;
- (long long)count;
- (void)dealloc;
- (void)transformWithFunction:(void /* function */ *)a0 withState:(void *)a1;
- (void)applyFunction:(void /* function */ *)a0 withState:(void *)a1;
- (void)applyFunction:(void /* function */ *)a0 withState:(void *)a1 andState:(void *)a2;

@end
