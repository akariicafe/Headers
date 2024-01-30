@class NSString, NSArray;
@protocol CACCorrectionsCollectionViewControllerDelegate;

@interface CACCorrectionsCollectionViewController : UICollectionViewController

@property (weak, nonatomic) id<CACCorrectionsCollectionViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *alternatives;
@property (copy, nonatomic) NSArray *emojis;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)_didTapCancel:(id)a0;
- (id)_itemsInSection:(long long)a0;

@end
