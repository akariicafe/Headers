@interface __NSPlaceholderOrderedSet : NSMutableOrderedSet

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;

- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)init;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)retain;
- (unsigned long long)count;
- (unsigned long long)indexOfObject:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;

@end
