@class NSArray, NSSet, NSMutableSet, NFUnfairLock;

@interface FCThreadSafeMutableSet : NSObject {
    NFUnfairLock *_lock;
    NSMutableSet *_set;
}

@property (readonly) unsigned long long count;
@property (readonly) BOOL isEmpty;
@property (readonly, copy) NSArray *allObjects;
@property (readonly, copy, nonatomic) NSSet *readOnlySet;

- (void)addObject:(id)a0;
- (void)readWriteWithAccessor:(id /* block */)a0;
- (void)readWithAccessor:(id /* block */)a0;
- (void)removeObject:(id)a0;
- (void)removeObjectsInSet:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)addObjectsFromArray:(id)a0;
- (id)init;
- (void)removeObjectsInArray:(id)a0;
- (void).cxx_destruct;
- (BOOL)containsObject:(id)a0;

@end
