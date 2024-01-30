@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface JFXThreadSafeArray : NSObject

@property (retain, nonatomic) NSMutableArray *array;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (readonly) unsigned long long count;

- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)objectsAtIndexes:(id)a0;
- (id)init;
- (void)removeObjectsInArray:(id)a0;
- (void).cxx_destruct;
- (id)sortedArrayUsingComparator:(id /* block */)a0;
- (void)removeObject:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)description;
- (void)moveObjectAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)addObject:(id)a0;
- (void)sortUsingSelector:(SEL)a0;
- (void)removeAllObjects;
- (unsigned long long)indexOfObject:(id)a0;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (BOOL)containsObject:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)copyOfArray;

@end
