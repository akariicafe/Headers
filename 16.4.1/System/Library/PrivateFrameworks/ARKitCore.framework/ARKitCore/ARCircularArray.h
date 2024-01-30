@class NSArray, NSMutableOrderedSet;

@interface ARCircularArray : NSObject <NSFastEnumeration> {
    long long _capacity;
    NSMutableOrderedSet *_objects;
}

@property (readonly, copy, nonatomic) NSArray *allObjects;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) id firstObject;
@property (readonly, nonatomic) id lastObject;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)addObject:(id)a0;
- (id)initWithCapacity:(long long)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)containsObject:(id)a0;
- (unsigned long long)indexOfObject:(id)a0 inSortedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(unsigned long long)a2 usingComparator:(id /* block */)a3;

@end
