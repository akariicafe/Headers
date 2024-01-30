@class NSArray, NSMutableArray, NFUnfairLock;

@interface FCThreadSafeMutableArray : NSObject {
    NFUnfairLock *_lock;
    NSMutableArray *_array;
}

@property (readonly, copy, nonatomic) NSArray *readOnlyArray;

- (void)readWriteWithAccessor:(id /* block */)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)addObjectsFromArray:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addObject:(id)a0;

@end
