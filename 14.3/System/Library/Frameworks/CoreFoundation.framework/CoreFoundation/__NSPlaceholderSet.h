@interface __NSPlaceholderSet : NSMutableSet

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;

- (id)init;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (oneway void)release;
- (void)dealloc;
- (void)removeObject:(id)a0;
- (unsigned long long)retainCount;
- (id)member:(id)a0;
- (id)objectEnumerator;
- (id)retain;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (id)initWithSet:(id)a0 copyItems:(BOOL)a1;
- (id)initWithCapacity:(unsigned long long)a0;

@end
