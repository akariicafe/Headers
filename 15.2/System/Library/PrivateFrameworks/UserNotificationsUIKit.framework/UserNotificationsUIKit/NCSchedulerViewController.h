@class NSArray, NSString, UICollectionView, NSLayoutConstraint, NSMutableArray;

@interface NCSchedulerViewController : NCOnboardingViewController <NCSchedulerViewCellDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate> {
    NSLayoutConstraint *_heightConstraint;
    NSMutableArray *_mutableDeliveryTimes;
    double _dynamicCellHeight;
    double _dynamicHeaderHeight;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly, copy, nonatomic) NSArray *deliveryTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)schedulerWithDeliveryTimes:(id)a0;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)_indexPathForCell:(id)a0;
- (void)_cancelButtonPressed:(id)a0;
- (id)_initWithDeliveryTimes:(id)a0;
- (void)_insertNextTime;
- (id)_addSummaryText;
- (id)_summaryTextForCount:(unsigned long long)a0;
- (double)_heightThatFitsCollectionView;
- (unsigned long long)_cellCount;
- (BOOL)_isFirstIndexPath:(id)a0;
- (BOOL)_isLastIndexPath:(id)a0;
- (BOOL)_isAddIndexPath:(id)a0;
- (void)_handleAddOrRemoveActionForIndexPath:(id)a0;
- (unsigned long long)_currentDailyDigestCount;
- (id)_dateComponentsForHour:(unsigned long long)a0 minute:(unsigned long long)a1;
- (void)_reloadCollectionViewHeight;
- (void)_animateReloadIndexPath:(id)a0;
- (void)_animateAddIndexPath:(id)a0;
- (void)_animateDeleteIndexPath:(id)a0;
- (void)schedulerCell:(id)a0 didChangeTime:(id)a1;
- (void)schedulerCellButtonPressed:(id)a0;

@end
