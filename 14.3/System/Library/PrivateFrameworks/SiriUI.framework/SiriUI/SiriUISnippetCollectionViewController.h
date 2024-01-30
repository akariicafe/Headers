@class NSString, UICollectionViewLayout, UICollectionView;

@interface SiriUISnippetCollectionViewController : SiriUISnippetViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDragDelegate> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _previousBounds;
    BOOL _needsToInvalidateCollectionViewLayoutOnViewWillLayoutSubviews;
    UICollectionViewLayout *_collectionViewLayout;
}

@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) UICollectionViewLayout *collectionViewLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 itemsForBeginningDragSession:(id)a1 atIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithCollectionViewLayout:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewWillLayoutSubviews;

@end
