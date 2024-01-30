@interface __NSPlaceholderArray : NSMutableArray

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithArray:(id)a0;
- (unsigned long long)retainCount;
- (id)initWithContentsOfFile:(id)a0;
- (id)retain;
- (id)initWithContentsOfURL:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)init;
- (id)initWithArray:(id)a0 copyItems:(BOOL)a1;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (oneway void)release;
- (id)_initByAdoptingBuffer:(id *)a0 count:(unsigned long long)a1 size:(unsigned long long)a2;
- (void)removeObjectAtIndex:(unsigned long long)a0;

@end
