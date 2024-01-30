@interface NSArrayChanges : NSMutableArray <NSCopying>

@property (readonly) unsigned long long changeCount;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)addObject:(id)a0;
- (void)addChange:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)removeLastObject;
- (void)sortUsingSelector:(SEL)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (void)addChanges:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)exchangeObjectAtIndex:(unsigned long long)a0 withObjectAtIndex:(unsigned long long)a1;
- (BOOL)_isToManyChangeInformation;
- (long long)_toManyPropertyType;
- (void)applyChangesToArray:(id)a0;
- (void)enumerateChanges:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateChangesUsingBlock:(id /* block */)a0;
- (void)moveObjectAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)moveObjectsAtIndexes:(id)a0 toIndex:(unsigned long long)a1;
- (void)sortUsingFunction:(void /* function */ *)a0 context:(void *)a1;
- (void)updateObject:(id)a0 atIndex:(unsigned long long)a1;

@end
