@interface __NSPlaceholderOrderedSet : NSMutableOrderedSet

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)retainCount;
- (id)retain;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)init;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (oneway void)release;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfObject:(id)a0;

@end
