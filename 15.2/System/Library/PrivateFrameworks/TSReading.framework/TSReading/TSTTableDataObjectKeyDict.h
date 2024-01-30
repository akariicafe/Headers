@interface TSTTableDataObjectKeyDict : NSObject {
    void *mMap;
}

- (void)removeAllKeys;
- (void)removeKeyForObject:(id)a0;
- (unsigned int)keyForObject:(id)a0;
- (id)init;
- (unsigned long long)count;
- (void)setKey:(unsigned int)a0 forObject:(id)a1;
- (void)dealloc;

@end
