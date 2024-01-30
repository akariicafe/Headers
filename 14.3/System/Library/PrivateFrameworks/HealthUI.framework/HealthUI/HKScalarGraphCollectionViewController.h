@class HKScalarGraphCollectionViewCell, UICollectionView, NSArray, NSString, HKUnitPreferenceController;
@protocol HKScalarGraphCollectionViewDelegate;

@interface HKScalarGraphCollectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) HKScalarGraphCollectionViewCell *currentCell;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) HKUnitPreferenceController *unitController;
@property (nonatomic) double collectionViewHeight;
@property (nonatomic) double minimumHeight;
@property (copy, nonatomic) NSArray *audiograms;
@property (weak, nonatomic) id<HKScalarGraphCollectionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)reload;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLoad;
- (void)_setupChartCollectionView;
- (void)_pinView:(id)a0 toParentGuide:(id)a1;
- (void)resetToIndex:(long long)a0;
- (id)_buildCollectionViewLayout;
- (id)initWithMinimumHeight:(double)a0 unitController:(id)a1;
- (void)redrawCurrentCell;
- (void)resetToMostRecent;

@end
