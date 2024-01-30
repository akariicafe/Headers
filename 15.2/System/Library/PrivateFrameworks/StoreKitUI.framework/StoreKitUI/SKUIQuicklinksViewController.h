@class SKUIColorScheme, NSArray, NSString, UICollectionView, SKUIQuicklinksView;
@protocol SKUIQuicklinksViewControllerDelegate;

@interface SKUIQuicklinksViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView *_collectionView;
    SKUIColorScheme *_colorScheme;
    SKUIQuicklinksView *_quicklinksView;
}

@property (weak, nonatomic) id<SKUIQuicklinksViewControllerDelegate> delegate;
@property (readonly, nonatomic) NSArray *indexPathsForVisibleItems;
@property (copy, nonatomic) NSArray *links;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (long long)_numberOfRows;
- (void)setTitle:(id)a0;
- (void)dealloc;
- (void)setColoringWithColorScheme:(id)a0;
- (void)willTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLinkAtIndex:(long long)a0;

@end
