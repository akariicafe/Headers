@class NSSet, NSMutableSet;

@interface _UICollectionViewSelectionController : NSObject {
    NSMutableSet *_selectedIndexPaths;
    NSMutableSet *_highlightedIndexPaths;
    NSMutableSet *_nonvisibleTrackedSelectedIdentifiers;
}

@property (readonly, nonatomic) long long selectedItemsCount;
@property (readonly, nonatomic) long long highlightedItemsCount;
@property (readonly, copy, nonatomic) NSSet *selectedIndexPaths;
@property (readonly, copy, nonatomic) NSSet *highlightedIndexPaths;
@property (nonatomic) BOOL allowsMultipleSelection;

- (id)init;
- (id)highlightedIdentifiersForSnapshot:(id)a0;
- (BOOL)isHighlightedAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)rebaseIndexPath:(id)a0 withTranslator:(id)a1;
- (void)reset;
- (BOOL)isSelectedAtIndexPath:(id)a0;
- (void)rebaseItemsWithTranslator:(id)a0;
- (void)unhighlightItemAtIndexPath:(id)a0;
- (void)selectItemsAtIndexPaths:(id)a0;
- (void)unhighlightItemsAtIndexPaths:(id)a0;
- (void)deselectItemsAtIndexPaths:(id)a0;
- (void)unhighlightAllItems;
- (id)selectedIdentifiersForSnapshot:(id)a0;
- (id)rebaseIndexPath:(id)a0 withDiffableTransaction:(id)a1;
- (void)deselectAllItems;
- (void)highlightItemAtIndexPath:(id)a0;
- (void)highlightItemsAtIndexPaths:(id)a0;
- (void)deselectItemAtIndexPath:(id)a0;
- (void)selectItemAtIndexPath:(id)a0;
- (void)rebaseItemsWithDiffableTransaction:(id)a0;

@end
