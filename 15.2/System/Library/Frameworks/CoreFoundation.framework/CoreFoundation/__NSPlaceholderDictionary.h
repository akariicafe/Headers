@interface __NSPlaceholderDictionary : NSMutableDictionary

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (void)removeObjectForKey:(id)a0;
- (unsigned long long)retainCount;
- (id)initWithContentsOfFile:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)retain;
- (id)initWithContentsOfURL:(id)a0;
- (id)keyEnumerator;
- (id)init;
- (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (oneway void)release;

@end
