@class NSString, SFFormAutocompleteState, NSArray, UICollectionView, UIImageView;

@interface SFCreditCardFillingViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIPredictiveViewController> {
    NSArray *_creditCards;
    UICollectionView *_collectionView;
    UIImageView *_leftShadowView;
    UIImageView *_rightShadowView;
    double _lastLayoutWidth;
    double _cachedCellWidth;
}

@property (readonly, weak, nonatomic) SFFormAutocompleteState *formAutocompleteState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *displayedCandidates;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (double)preferredHeightForTraitCollection:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (BOOL)isVisibleForInputDelegate:(id)a0 inputViews:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (double)_calculateCellWidthForCollectionViewWidth:(double)a0;
- (void)_cardDataChanged:(id)a0;
- (void)_loadCardData;
- (id)initWithFormAutocompleteState:(id)a0;

@end
