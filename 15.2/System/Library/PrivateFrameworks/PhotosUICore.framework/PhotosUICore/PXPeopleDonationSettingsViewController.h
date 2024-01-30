@class PXPeoplePersonDataSource, NSString, UICollectionView, PXPeopleSuggestionDataSource;

@interface PXPeopleDonationSettingsViewController : UIViewController <PXPeopleDataSourceDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain) PXPeoplePersonDataSource *dataSource;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) PXPeopleSuggestionDataSource *suggestionDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)commonInit;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)peopleDataSourceMembersChanged:(id)a0;
- (void)peopleDataSource:(id)a0 didApplyIncrementalChanges:(id)a1;
- (void)loadSuggestionsForPerson:(id)a0;

@end
