@class NSMutableSet, NSMutableDictionary, NSMutableOrderedSet;

@interface _FPItemList : NSObject {
    NSMutableOrderedSet *_orderedSet;
    NSMutableDictionary *_itemsByIDs;
    NSMutableSet *_formerIDs;
}

- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeLastObject;
- (unsigned long long)indexOfObject:(id)a0 inSortedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(unsigned long long)a2 usingComparator:(id /* block */)a3;
- (id)init;
- (id)mutableCopy;
- (void).cxx_destruct;
- (unsigned long long)indexOfItemID:(id)a0;
- (BOOL)isObsoleteID:(id)a0;
- (void)removeObjectWithID:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)description;
- (void)sortUsingDescriptors:(id)a0;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (unsigned long long)indexOfObject:(id)a0;
- (id)allObjects;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;

@end
