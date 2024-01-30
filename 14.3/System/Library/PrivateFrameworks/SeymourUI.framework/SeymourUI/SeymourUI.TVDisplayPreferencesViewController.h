@interface SeymourUI.TVDisplayPreferencesViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ collectionViewWidthConstraint;
    void /* unknown type, empty encoding */ sectionViewModels;
}

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
