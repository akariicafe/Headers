@class NSString, HUNewUserEducationCollectionViewModel;

@interface HUNewUserEducationCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) HUNewUserEducationCollectionViewModel *collectionViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)viewDidLoad;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithCollectionViewModel:(id)a0;

@end
