@interface __NSPlaceholderDictionary : NSMutableDictionary

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (id)initWithContentsOfURL:(id)a0;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)init;
- (id)initWithContentsOfFile:(id)a0;
- (oneway void)release;
- (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)retainCount;
- (id)retain;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeObjectForKey:(id)a0;

@end
