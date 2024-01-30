@interface TSTTableDataObjectKeyDict : NSObject {
    void *mMap;
}

- (void)removeKeyForObject:(id)a0;
- (void)setKey:(unsigned int)a0 forObject:(id)a1;
- (unsigned long long)count;
- (void)dealloc;
- (unsigned int)keyForObject:(id)a0;
- (id)init;
- (void)removeAllKeys;

@end
