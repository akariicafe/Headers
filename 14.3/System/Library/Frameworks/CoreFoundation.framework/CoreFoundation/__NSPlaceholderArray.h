@interface __NSPlaceholderArray : NSMutableArray

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)initWithContentsOfURL:(id)a0;
- (id)init;
- (id)initWithContentsOfFile:(id)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)retain;
- (unsigned long long)count;
- (id)initWithArray:(id)a0;
- (id)_initByAdoptingBuffer:(id *)a0 count:(unsigned long long)a1 size:(unsigned long long)a2;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)initWithArray:(id)a0 copyItems:(BOOL)a1;

@end
