@interface CNMutableMultiDictionary : CNMultiDictionary

- (void)addObject:(id)a0 forKey:(id)a1;
- (void)addNonNilObject:(id)a0 forKey:(id)a1;
- (void)removeObject:(id)a0 forKey:(id)a1;
- (void)removeObjectsForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setObjects:(id)a0 forKey:(id)a1;

@end
