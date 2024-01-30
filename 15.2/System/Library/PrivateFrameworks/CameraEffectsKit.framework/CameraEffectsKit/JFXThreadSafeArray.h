@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface JFXThreadSafeArray : NSObject

@property (retain, nonatomic) NSMutableArray *array;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (readonly) unsigned long long count;

- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)sortUsingSelector:(SEL)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (BOOL)containsObject:(id)a0;
- (id)objectsAtIndexes:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectsInArray:(id)a0;
- (void)moveObjectAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (id)description;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)addObject:(id)a0;
- (id)sortedArrayUsingComparator:(id /* block */)a0;
- (void)removeObject:(id)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfObject:(id)a0;
- (id)copyOfArray;

@end
