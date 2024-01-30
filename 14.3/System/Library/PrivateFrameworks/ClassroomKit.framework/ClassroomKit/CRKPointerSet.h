@class NSArray, NSHashTable;

@interface CRKPointerSet : NSObject <NSFastEnumeration> {
    NSHashTable *mBackingStore;
}

@property (readonly, nonatomic) long long count;
@property (readonly, copy, nonatomic) NSArray *allObjects;

+ (id)setWithArray:(id)a0;
+ (id)setWithSet:(id)a0;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isSubsetOfSet:(id)a0;
- (void)removeObject:(id)a0;
- (unsigned long long)hash;
- (void)addObjectsFromArray:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (BOOL)containsObject:(id)a0;
- (id)setBySubtractingSet:(id)a0;
- (id)setByIntersectingSet:(id)a0;

@end
