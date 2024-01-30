@class NSArray, UICollectionView, NSString, WFActionDrawerCoordinator;

@interface WFActionDrawerAppsTableViewCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) NSArray *appSections;
@property (weak, nonatomic) WFActionDrawerCoordinator *coordinator;
@property (retain, nonatomic) UICollectionView *appsCollectionView;
@property (retain, nonatomic) NSArray *appItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)configureWithActionDrawerSections:(id)a0 coordinator:(id)a1;

@end
