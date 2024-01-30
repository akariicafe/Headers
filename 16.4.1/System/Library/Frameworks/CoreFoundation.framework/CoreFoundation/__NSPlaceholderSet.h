@interface __NSPlaceholderSet : NSMutableSet

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)retain;
- (void)addObject:(id)a0;
- (oneway void)release;
- (void)removeObject:(id)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)objectEnumerator;
- (id)member:(id)a0;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (id)initWithSet:(id)a0 copyItems:(BOOL)a1;
- (id)init;
- (unsigned long long)retainCount;

@end
