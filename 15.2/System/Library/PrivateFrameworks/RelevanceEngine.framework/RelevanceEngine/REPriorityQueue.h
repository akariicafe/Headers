@class NSArray;

@interface REPriorityQueue : NSObject <NSCopying> {
    struct __CFBinaryHeap { } *_binaryHeap;
}

@property (readonly, nonatomic) id /* block */ comparator;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSArray *allObjects;
@property (readonly, nonatomic) id minimumObject;

- (BOOL)containsObject:(id)a0;
- (id)initWithComparator:(id /* block */)a0;
- (void)removeAllObjects;
- (void)removeMinimumObject;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)insertObject:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (void)enumerateObjects:(id /* block */)a0;

@end
