@interface __NSPlaceholderDictionary : NSMutableDictionary

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)retain;
- (id)initWithContentsOfFile:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (id)initWithContentsOfURL:(id)a0;
- (oneway void)release;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (id)keyEnumerator;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (id)init;
- (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (unsigned long long)retainCount;

@end
