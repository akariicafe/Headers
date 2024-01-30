@interface TSTIntegerKeyDict : NSObject {
    void *mMap;
}

- (void)setObject:(id)a0 forKey:(unsigned int)a1;
- (void)removeObjectForKey:(unsigned int)a0;
- (id)objectForKey:(unsigned int)a0;
- (void)makeObjectsPerformSelector:(SEL)a0;
- (long long)count;
- (void)removeAllObjects;
- (void)dealloc;
- (id)allValues;
- (id)init;
- (void)removeFirstObject;
- (void)applyFunction:(void /* function */ *)a0 withState:(void *)a1;
- (void)applyFunction:(void /* function */ *)a0 withState:(void *)a1 andState:(void *)a2;
- (void)transformWithFunction:(void /* function */ *)a0 withState:(void *)a1;

@end
