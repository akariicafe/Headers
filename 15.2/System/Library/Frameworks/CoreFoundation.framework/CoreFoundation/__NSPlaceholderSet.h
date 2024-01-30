@interface __NSPlaceholderSet : NSMutableSet

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)objectEnumerator;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (unsigned long long)retainCount;
- (id)retain;
- (id)init;
- (void)addObject:(id)a0;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithSet:(id)a0 copyItems:(BOOL)a1;
- (void)dealloc;
- (void)removeObject:(id)a0;
- (oneway void)release;
- (id)member:(id)a0;

@end
