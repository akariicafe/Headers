@class _UICollectionLayoutSectionGeometryTranslator, NSArray, _UIRTree, _UIOrderedRangeIndexer, NSDictionary;

@interface _UICollectionLayoutSolutionState : NSObject {
    _UICollectionLayoutSectionGeometryTranslator *_sectionGeometryTranslator;
    NSArray *_bookmarks;
    _UIRTree *_geometricIndexer;
    _UIOrderedRangeIndexer *_itemRangeIndexer;
    NSDictionary *_auxillaryRangeIndexerKindDict;
}

- (id)description;
- (void).cxx_destruct;

@end
