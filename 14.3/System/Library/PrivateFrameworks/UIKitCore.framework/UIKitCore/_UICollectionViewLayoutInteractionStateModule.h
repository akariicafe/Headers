@class UICollectionViewLayout, NSString, NSMutableDictionary, NSMutableSet;
@protocol _UICollectionViewLayoutInteractionStateModuleHost;

@interface _UICollectionViewLayoutInteractionStateModule : NSObject <_UICollectionViewLayoutInteractionStateProviding> {
    NSMutableSet *_indexPathsWithBackgroundFillForInteraction;
    NSMutableDictionary *_postProcessingCellsMap;
}

@property (weak, nonatomic) UICollectionViewLayout<_UICollectionViewLayoutInteractionStateModuleHost> *host;
@property (readonly, nonatomic) Class invalidationContextClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_itemIsSelectedOrHighlightedAndHasBackgroundFillForGroupingAtIndexPath:(id)a0 cellGroupingPreference:(out long long *)a1 backgroundIsInset:(out BOOL *)a2;
- (void)performPreferredAttributesPostProcessingBlock:(id /* block */)a0 withLayoutAttributes:(id)a1 forView:(id)a2;
- (void)_noteCellWillBeginPostProcessing:(id)a0 atIndexPath:(id)a1;
- (void)_noteCellDidFinishPostProcessingAtIndexPath:(id)a0;
- (BOOL)itemAtIndexPathIsHighlighted:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldAdjustLayoutToMergeBarInSection:(long long)a0;
- (BOOL)enumerateSectionsAfterSectionIndex:(long long)a0 enumerator:(id /* block */)a1;
- (BOOL)itemAtIndexPathIsSelected:(id)a0;
- (unsigned long long)selectionGroupingForItemAtIndexPath:(id)a0;
- (void)processLayoutInvalidationWithContext:(id)a0;
- (id)initWithHost:(id)a0;
- (id)_cellForItemAtIndexPath:(id)a0;

@end
