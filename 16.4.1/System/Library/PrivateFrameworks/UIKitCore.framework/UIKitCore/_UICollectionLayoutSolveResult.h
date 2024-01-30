@class NSMutableDictionary, NSMutableIndexSet;

@interface _UICollectionLayoutSolveResult : NSObject {
    NSMutableIndexSet *_invalidatedIndexes;
    NSMutableDictionary *_invalidatedAuxillaryIndexesDict;
}

- (id)init;
- (void).cxx_destruct;

@end
