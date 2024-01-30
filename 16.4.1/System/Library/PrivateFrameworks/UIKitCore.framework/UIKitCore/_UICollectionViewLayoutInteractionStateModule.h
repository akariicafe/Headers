@class NSString, UICollectionViewLayout, NSMutableDictionary;
@protocol _UICollectionViewLayoutInteractionStateModuleHost;

@interface _UICollectionViewLayoutInteractionStateModule : NSObject <_UICollectionViewLayoutInteractionStateProviding> {
    NSMutableDictionary *_processingCellsMap;
}

@property (weak, nonatomic) UICollectionViewLayout<_UICollectionViewLayoutInteractionStateModuleHost> *host;
@property (readonly, nonatomic) Class invalidationContextClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)itemAtIndexPathIsHighlighted:(id)a0;
- (BOOL)enumerateSectionsAfterSectionIndex:(long long)a0 enumerator:(id /* block */)a1;
- (void)performPreferredAttributesProcessingBlock:(id /* block */)a0 withLayoutAttributes:(id)a1 forView:(id)a2;
- (BOOL)_itemIsSelectedOrHighlightedAndHasBackgroundFillForGroupingAtIndexPath:(id)a0 cellGroupingPreference:(out long long *)a1 backgroundIsInset:(out BOOL *)a2;
- (id)initWithHost:(id)a0;
- (void)_noteCellDidFinishProcessingAtIndexPath:(id)a0;
- (BOOL)itemAtIndexPathIsSelected:(id)a0;
- (BOOL)itemAtIndexPathIsBeingReordered:(id)a0;
- (void)_noteCellWillBeginProcessing:(id)a0 atIndexPath:(id)a1;
- (BOOL)_shouldAdjustLayoutToDrawTopSeparatorInSection:(long long)a0;
- (id)_cellForItemAtIndexPath:(id)a0;
- (unsigned long long)selectionGroupingForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;

@end
