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
- (void)scrollViewDidEndDecelerating:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)reload;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)_buildCollectionViewLayout;
- (void)_pinView:(id)a0 toParentGuide:(id)a1;
- (void)_setupChartCollectionView;
- (id)initWithMinimumHeight:(double)a0 unitController:(id)a1;
- (void)redrawCurrentCell;
- (void)resetToIndex:(long long)a0;
- (void)resetToMostRecent;

@end
