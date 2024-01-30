@class OITSUIntegerKeyDictionary;

@interface EDKeyedCollection : EDCollection {
    OITSUIntegerKeyDictionary *mMap;
}

- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)addObject:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)objectWithKey:(long long)a0;
- (void)insertIntoMap:(id)a0;
- (void)removeFromMap:(id)a0;
- (BOOL)isObjectInMap:(id)a0;
- (BOOL)isOverwritingKeyOK;

@end
