@class PXSectionedDataSourceChangeDetails, NSIndexSet, NSArray;

@interface PXLegacySectionedDataSourceChangeDetails : NSObject {
    NSIndexSet *_deletedSections;
    NSIndexSet *_insertedSections;
    NSIndexSet *_changedSections;
    NSArray *_deletedIndexPaths;
    NSArray *_insertedIndexPaths;
    NSArray *_changedIndexPaths;
    NSArray *_contentChangedIndexPaths;
    long long _shiftingSectionLocation;
    BOOL _prepared;
    BOOL _hasIncrementalChanges;
    BOOL _hasMoves;
}

@property (readonly, nonatomic) PXSectionedDataSourceChangeDetails *sectionedDataSourceChangeDetails;
@property (readonly, nonatomic) BOOL hasIncrementalChanges;
@property (readonly, nonatomic) NSIndexSet *deletedSections;
@property (readonly, nonatomic) NSIndexSet *insertedSections;
@property (readonly, nonatomic) NSIndexSet *changedSections;
@property (readonly, nonatomic) NSArray *deletedItemsIndexPaths;
@property (readonly, nonatomic) NSArray *insertedItemsIndexPaths;
@property (readonly, nonatomic) NSArray *changedItemsIndexPaths;
@property (readonly, nonatomic) NSArray *contentItemsChangedIndexPaths;
@property (readonly, nonatomic) BOOL hasMoves;

- (void).cxx_destruct;
- (id)contentChangedItemsIndexPaths;
- (id)description;
- (void)prepareIfNeeded;
- (id)initWithSectionedDataSourceChangeDetails:(id)a0 shiftedSection:(long long)a1;
- (void)_prepareIncrementalDetails;
- (void)enumerateMovedIndexPathsUsingBlock:(id /* block */)a0;

@end
