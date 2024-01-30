@class CRSet, CRDocument, NSArray, NSString, NSMutableArray;

@interface CROrderedSet : NSObject <CRDataType, CRCoding>

@property (retain, nonatomic) CRSet *contents;
@property (retain, nonatomic) NSMutableArray *orderedArray;
@property (weak, nonatomic) CRDocument *document;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSArray *allObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)init;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_sort;
- (id)tombstone;
- (void)moveObject:(id)a0 toIndex:(unsigned long long)a1;
- (void)enumerateWithBlock:(id /* block */)a0;
- (void)removeObject:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)deltaSince:(id)a0 in:(id)a1;
- (id)_indexForIndex:(unsigned long long)a0;
- (void)mergeWithSet:(id)a0;
- (void)mergeWith:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (unsigned long long)indexOfObject:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (void)encodeWithCRCoder:(id)a0;
- (BOOL)containsObject:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;

@end
