@class NSString, NSArray;
@protocol CACCorrectionsCollectionViewControllerDelegate;

@interface CACCorrectionsCollectionViewController : UICollectionViewController

@property (weak, nonatomic) id<CACCorrectionsCollectionViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *alternatives;
@property (copy, nonatomic) NSArray *emojis;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)init;
- (void)_didTapCancel:(id)a0;
- (id)_itemsInSection:(long long)a0;

@end
