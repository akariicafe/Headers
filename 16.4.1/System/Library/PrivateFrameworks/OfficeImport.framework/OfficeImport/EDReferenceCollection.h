@interface EDReferenceCollection : EDCollection {
    BOOL mCoalesce;
}

+ (id)coalesceCollection;
+ (id)noCoalesceCollection;

- (unsigned long long)addObject:(id)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)init;
- (void)coalesce;
- (id)referenceToCellWithIndex:(unsigned long long)a0 byRow:(BOOL)a1;
- (void)coalesceProgressiveCellReferencesCollection;
- (BOOL)coalesceReferenceAtIndex1:(unsigned long long)a0 index2:(unsigned long long)a1;
- (unsigned long long)countOfCellsBeingReferenced;
- (id)initWihNoCoalesce;
- (id)reverseReferencesByRow:(BOOL)a0;

@end
