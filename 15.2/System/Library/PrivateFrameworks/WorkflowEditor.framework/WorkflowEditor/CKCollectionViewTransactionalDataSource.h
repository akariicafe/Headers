@class CKComponentDataSourceAttachController, NSString, UICollectionView, CKTransactionalComponentDataSourceState, NSMapTable, CKTransactionalComponentDataSource;
@protocol CKSupplementaryViewDataSource;

@interface CKCollectionViewTransactionalDataSource : NSObject <UICollectionViewDataSource, CKTransactionalComponentDataSourceListener> {
    CKTransactionalComponentDataSource *_componentDataSource;
    void /* function */ *_cellConfigurationFunction;
    CKTransactionalComponentDataSourceState *_currentState;
    CKComponentDataSourceAttachController *_attachController;
    NSMapTable *_cellToIndexPathMap;
    NSMapTable *_indexPathToCellMap;
    NSMapTable *_cellToItemMap;
}

@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, weak, nonatomic) id<CKSupplementaryViewDataSource> supplementaryViewDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndexPath:(id)a0;
- (void)transactionalComponentDataSource:(id)a0 didModifyPreviousState:(id)a1 byApplyingChanges:(id)a2;
- (id)initWithCollectionView:(id)a0 supplementaryViewDataSource:(id)a1 configuration:(id)a2 cellConfigurationFunction:(void /* function */ *)a3;
- (void)applyChangeset:(id)a0 mode:(unsigned long long)a1 userInfo:(id)a2;
- (void)_detachComponentLayoutForRemovedItemsAtIndexPaths:(id)a0 inState:(id)a1;
- (id)modelForItemAtIndexPath:(id)a0;
- (void)reloadWithMode:(unsigned long long)a0 userInfo:(id)a1;
- (void)updateConfiguration:(id)a0 mode:(unsigned long long)a1 userInfo:(id)a2;
- (void)announceWillDisplayCell:(id)a0;
- (void)announceDidEndDisplayingCell:(id)a0;

@end
