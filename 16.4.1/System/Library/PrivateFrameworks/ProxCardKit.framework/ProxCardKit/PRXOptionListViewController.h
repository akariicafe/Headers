@class NSArray, NSString, UICollectionView;

@interface PRXOptionListViewController : PRXCardContentViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (copy, nonatomic) NSArray *options;
@property (copy, nonatomic) id /* block */ formatterBlock;
@property (copy, nonatomic) NSArray *selectedOptions;
@property (copy, nonatomic) id /* block */ selectionHandler;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithContentView:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewLayoutMarginsDidChange;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)_createCollectionViewLayout;

@end
