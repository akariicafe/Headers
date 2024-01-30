@class NSString, NSIndexPath;
@protocol MiroEditorClipCollectionDataSource, MiroEditorClipCollectionDelegate;

@interface MiroEditorClipCollectionViewController : UICollectionViewController <MiroEditorFlowLayoutDelegate, MiroEditorClipCollection>

@property (nonatomic) BOOL isInViewWillTransitionToSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MiroEditorClipCollectionDataSource> dataSource;
@property (weak, nonatomic) id<MiroEditorClipCollectionDelegate> delegate;
@property (retain, nonatomic) NSIndexPath *initialIndexPath;

- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)collectionView:(id)a0 layout:(id)a1 didSnapToItemAtIndexPath:(id)a2;
- (void)snapToIndexPath:(id)a0 animated:(BOOL)a1;
- (id)cellForClipProvider:(id)a0;
- (void)_snapToIndexPath:(id)a0 animated:(BOOL)a1;

@end
