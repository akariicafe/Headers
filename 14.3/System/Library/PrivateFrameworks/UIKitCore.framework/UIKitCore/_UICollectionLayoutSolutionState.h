@class _UICollectionLayoutSectionGeometryTranslator, NSArray, _UIRTree, _UIOrderedRangeIndexer, NSDictionary;

@interface _UICollectionLayoutSolutionState : NSObject

@property (readonly, nonatomic) NSArray *bookmarks;
@property (readonly, nonatomic) _UIRTree *geometricIndexer;
@property (readonly, nonatomic) _UIOrderedRangeIndexer *itemRangeIndexer;
@property (readonly, nonatomic) NSDictionary *auxillaryRangeIndexerKindDict;
@property (readonly, nonatomic) _UICollectionLayoutSectionGeometryTranslator *sectionGeometryTranslator;

- (void).cxx_destruct;
- (id)copyWithGeometryConverter:(id)a0;
- (id)description;
- (id)initWithGeometryTranslator:(id)a0 bookmarks:(id)a1 geometricIndexer:(id)a2 itemRangeIndexer:(id)a3 auxillaryRangeIndexerDict:(id)a4;

@end
