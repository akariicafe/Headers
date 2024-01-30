@class NSString, NSArray, NSMutableDictionary, UICollectionViewData, NSMutableArray, UICollectionView, NSMutableIndexSet, NSIndexPath;

@interface UICollectionViewUpdate : NSObject <_UICollectionViewUpdateTranslating> {
    UICollectionView *_collectionView;
    NSArray *_updateItems;
    UICollectionViewData *_oldModel;
    UICollectionViewData *_newModel;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _oldVisibleBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _newVisibleBounds;
    NSMutableIndexSet *_movedItems;
    NSMutableIndexSet *_movedSections;
    NSMutableIndexSet *_deletedSections;
    NSMutableIndexSet *_insertedSections;
    long long *_oldSectionMap;
    long long *_newSectionMap;
    long long *_oldGlobalItemMap;
    long long *_newGlobalItemMap;
    NSMutableArray *_deletedSupplementaryIndexesSectionArray;
    NSMutableArray *_insertedSupplementaryIndexesSectionArray;
    NSMutableDictionary *_deletedSupplementaryTopLevelIndexesDict;
    NSMutableDictionary *_insertedSupplementaryTopLevelIndexesDict;
    id *_animatedItems;
    id *_animatedHeaders;
    id *_animatedFooters;
    NSMutableArray *_viewAnimations;
    NSIndexPath *_oldFocusedIndexPath;
    NSIndexPath *_newFocusedIndexPath;
    long long _oldFocusedViewType;
    long long _newFocusedViewType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)initialSectionCount;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })finalSectionGlobalItemRangeForSection:(long long)a0;
- (long long)initialSectionIndexForFinalSectionIndex:(long long)a0;
- (id)finalIndexPathForSupplementaryElementOfKind:(id)a0 forInitialIndexPath:(id)a1;
- (id)newIndexPathForSupplementaryElementOfKind:(id)a0 oldIndexPath:(id)a1;
- (id)finalIndexPathForInitialIndexPath:(id)a0;
- (void)_computeSupplementaryUpdates;
- (void).cxx_destruct;
- (long long)initialGlobalIndexForFinalGlobalIndex:(long long)a0;
- (id)initialIndexPathForSupplementaryElementOfKind:(id)a0 forFinalIndexPath:(id)a1;
- (id)oldIndexPathForSupplementaryElementOfKind:(id)a0 newIndexPath:(id)a1;
- (void)dealloc;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })initalSectionGlobalItemRangeForSection:(long long)a0;
- (long long)finalGlobalIndexForInitialGlobalIndex:(long long)a0;
- (void)_computeSectionUpdates;
- (id)validatedOldIndexPathForSupplementaryElementOfKind:(id)a0 newIndexPath:(id)a1;
- (long long)finalSectionIndexForInitialSectionIndex:(long long)a0;
- (void)_computeItemUpdates;
- (id)initWithCollectionView:(id)a0 updateItems:(id)a1 oldModel:(id)a2 newModel:(id)a3 oldVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 newVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;
- (long long)finalSectionCount;
- (id)initialIndexPathForFinalIndexPath:(id)a0;

@end
