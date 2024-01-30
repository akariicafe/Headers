@interface NSMutableDictionary : NSDictionary

+ (id)MI_dictionaryWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
+ (id)dictionaryWithCapacity:(unsigned long long)a0;
+ (id)dictionaryWithSharedKeySet:(id)a0;

- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (id)initWithContentsOfFile:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)_web_setObject:(id)a0 forUncopiedKey:(id)a1;
- (void)_web_setBool:(BOOL)a0 forKey:(id)a1;
- (id)initWithContentsOfURL:(id)a0;
- (void)_web_setInt:(int)a0 forKey:(id)a1;
- (Class)classForCoder;
- (void)_mutate;
- (void)invert;
- (void)__addObject:(id)a0 forKey:(id)a1;
- (void)addObjects:(id)a0 forKeys:(id)a1;
- (void)removeKeysForObject:(id)a0;
- (void)addObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (void)removeEntriesPassingTest:(id /* block */)a0;
- (void)setEntriesFromDictionary:(id)a0;
- (void)setObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (void)removeEntriesInDictionary:(id)a0;
- (void)replaceObjects:(id)a0 forKeys:(id)a1;
- (void)replaceObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void)addObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setDictionary:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)replaceObject:(id)a0 forKey:(id)a1;
- (void)__setObject:(id)a0 forKey:(id)a1;
- (void)addEntriesFromDictionary:(id)a0;
- (void)setObjects:(id)a0 forKeys:(id)a1;
- (void)removeEntriesWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeObjectsForKeys:(id)a0;

@end
