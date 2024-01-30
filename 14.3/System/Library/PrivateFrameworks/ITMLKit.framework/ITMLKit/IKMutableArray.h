@interface IKMutableArray : IKArray

@property (readonly, nonatomic) long long expectedCapacity;

- (void)removeObjectsAtIndexes:(id)a0;
- (void)removeObject:(id)a0;
- (void)insertObject:(id)a0 atIndex:(long long)a1;
- (void)addObjectsFromArray:(id)a0;
- (void)addObject:(id)a0;
- (void)insertObjects:(id)a0 atIndexes:(id)a1;
- (id)initWithCapacity:(long long)a0;
- (void)removeObjectAtIndex:(long long)a0;
- (void)setObject:(id)a0 atIndexedSubscript:(long long)a1;
- (void)_convertToArrayStore;

@end
