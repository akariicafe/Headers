@class NSArray, SKUIClientContext, NSString, UICollectionView, _UIContentUnavailableView;
@protocol SKUIDownloadsChildViewControllerDelegate;

@interface SKUIIPadDownloadsViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {
    UICollectionView *_collectionView;
    _UIContentUnavailableView *_noContentView;
    BOOL _editing;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) NSArray *downloads;
@property (weak, nonatomic) id<SKUIDownloadsChildViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)_reload;
- (void)loadView;
- (void)_deleteAction:(id)a0;
- (void)_cancelAction:(id)a0;
- (void)reloadDownloadsAtIndexes:(id)a0;
- (void)_reloadLayout;
- (void)_reloadNavigationItem;
- (void)_editAction:(id)a0;

@end
