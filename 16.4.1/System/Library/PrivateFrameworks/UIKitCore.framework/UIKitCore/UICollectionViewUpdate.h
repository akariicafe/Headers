@class NSUUID, NSString, NSArray, _UICollectionViewFocusedItemState, NSSet, NSMutableDictionary, UICollectionViewData, NSMutableArray, UICollectionView, NSMutableIndexSet;

@interface UICollectionViewUpdate : NSObject <_UICollectionViewUpdateTranslating> {
    NSArray *_updateItems;
    UICollectionViewData *_oldModel;
    UICollectionViewData *_newModel;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _oldVisibleBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _newVisibleBounds;
    NSMutableIndexSet *_deletedSections;
    NSMutableIndexSet *_insertedSections;
    NSMutableArray *_deletedSupplementaryIndexesSectionArray;
    NSMutableArray *_insertedSupplementaryIndexesSectionArray;
    NSMutableDictionary *_deletedSupplementaryTopLevelIndexesDict;
    NSMutableDictionary *_insertedSupplementaryTopLevelIndexesDict;
    _UICollectionViewFocusedItemState *_oldFocusedItemState;
    _UICollectionViewFocusedItemState *_newFocusedItemState;
    UICollectionView *_collectionView;
    NSSet *_itemAnchoredAuxiliaryElementKinds;
    NSSet *_moveItemSourceIndexPaths;
    struct _UIDataSourceUpdateMaps { unsigned int oldSectionCount; unsigned int newSectionCount; unsigned int oldGlobalItemCount; unsigned int newGlobalItemCount; unsigned int *oldSectionMap; unsigned int *newSectionMap; unsigned int *oldGlobalItemMap; unsigned int *newGlobalItemMap; BOOL updatesAreInvalid; } _updateMaps;
    struct { unsigned char layoutPreparedForUpdates : 1; } _flags;
}

@property (readonly, nonatomic) BOOL updatesAreInvalid;
@property (retain, nonatomic) NSString *invalidUpdatesErrorMessage;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic, getter=isLayoutPreparedForUpdates) BOOL layoutPreparedForUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasMovedItemAtOldIndexPath:(id)a0;
- (void)_generateUpdateMaps;
- (BOOL)hasDeletedAuxiliaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (long long)finalSectionIndexForInitialSectionIndex:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })initalSectionGlobalItemRangeForSection:(long long)a0;
- (long long)finalGlobalIndexForInitialGlobalIndex:(long long)a0;
- (id)initialIndexPathForFinalIndexPath:(id)a0;
- (BOOL)hasInsertedAuxiliaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (long long)finalSectionCount;
- (long long)initialSectionIndexForFinalSectionIndex:(long long)a0;
- (void)dealloc;
- (id)oldIndexPathForSupplementaryElementOfKind:(id)a0 newIndexPath:(id)a1;
- (id)initialIndexPathForSupplementaryElementOfKind:(id)a0 forFinalIndexPath:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })finalSectionGlobalItemRangeForSection:(long long)a0;
- (long long)initialGlobalIndexForFinalGlobalIndex:(long long)a0;
- (id)finalIndexPathForInitialIndexPath:(id)a0;
- (id)validatedNewIndexPathForSupplementaryElementOfKind:(id)a0 oldIndexPath:(id)a1;
- (id)finalIndexPathForSupplementaryElementOfKind:(id)a0 forInitialIndexPath:(id)a1;
- (id)initWithCollectionView:(id)a0 updateItems:(id)a1 moveItemSourceIndexPaths:(id)a2 oldModel:(id)a3 newModel:(id)a4 oldVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 newVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6;
- (id)validatedOldIndexPathForSupplementaryElementOfKind:(id)a0 newIndexPath:(id)a1;
- (long long)initialSectionCount;
- (void)_computeAuxiliaryUpdates;
- (void).cxx_destruct;
- (void)setLayoutPreparedForUpdates;
- (id)newIndexPathForSupplementaryElementOfKind:(id)a0 oldIndexPath:(id)a1;

@end
