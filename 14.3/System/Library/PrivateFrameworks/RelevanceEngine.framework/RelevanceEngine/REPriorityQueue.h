@class NSArray;

@interface REPriorityQueue : NSObject <NSCopying> {
    struct __CFBinaryHeap { } *_binaryHeap;
}

@property (readonly, nonatomic) id /* block */ comparator;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSArray *allObjects;
@property (readonly, nonatomic) id minimumObject;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (void)enumerateObjects:(id /* block */)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)removeAllObjects;
- (void)insertObject:(id)a0;
- (BOOL)containsObject:(id)a0;
- (id)initWithComparator:(id /* block */)a0;
- (void)removeMinimumObject;

@end
