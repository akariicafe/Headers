@class NSMutableArray, NSMutableDictionary;

@interface FPItemCollectionItemIDBasedDiffs : FPItemCollectionDiffs

@property (retain) NSMutableArray *deletedItemIDs;
@property (retain) NSMutableArray *updatedItems;
@property (retain) NSMutableDictionary *replacedItemsByFormerID;

- (void).cxx_destruct;
- (BOOL)containsChanges;

@end
