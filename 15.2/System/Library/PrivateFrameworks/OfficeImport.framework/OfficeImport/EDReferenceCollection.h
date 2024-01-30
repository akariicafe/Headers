@interface EDReferenceCollection : EDCollection {
    BOOL mCoalesce;
}

+ (id)noCoalesceCollection;
+ (id)coalesceCollection;

- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)init;
- (unsigned long long)addObject:(id)a0;
- (void)coalesce;
- (unsigned long long)countOfCellsBeingReferenced;
- (id)reverseReferencesByRow:(BOOL)a0;
- (void)coalesceProgressiveCellReferencesCollection;
- (id)referenceToCellWithIndex:(unsigned long long)a0 byRow:(BOOL)a1;
- (id)initWihNoCoalesce;
- (BOOL)coalesceReferenceAtIndex1:(unsigned long long)a0 index2:(unsigned long long)a1;

@end
