@class UIView, NSString, NSArray, UICollectionViewFlowLayout, VideosExtrasMainMenuSectionMetrics, NSLayoutConstraint, UICollectionView, NSIndexPath;
@protocol UICollectionViewDelegate;

@interface VideosExtrasMainTemplateViewController : VideosExtrasTemplateViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, VideosExtrasMainMenuSectionMetricsDataSource> {
    VideosExtrasMainMenuSectionMetrics *_mainMenuMetrics;
    UICollectionViewFlowLayout *_collectionViewLayout;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    UICollectionView *_menuBarCollectionView;
    BOOL _hasHadMenuSelection;
}

@property (readonly, nonatomic) double collectionViewHeight;
@property (readonly, nonatomic) NSIndexPath *indexPathOfFeaturedItem;
@property (readonly, nonatomic) UIView *menuBarView;
@property (weak, nonatomic) id<UICollectionViewDelegate> didSelectDelegate;
@property (readonly, nonatomic) NSArray *mainMenuItemElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)_configureCell:(id)a0 forIndexPath:(id)a1;
- (id)_menuItems;
- (void)viewDidLoad;
- (void)setCollectionViewHeight:(double)a0;
- (id)templateElement;
- (void)_prepareLayout;
- (BOOL)showsPlaceholder;
- (void)_startBackgroundAudio;
- (id)initWithDocument:(id)a0 options:(id)a1 context:(id)a2;
- (long long)numberOfItemsForSectionMetrics:(id)a0;
- (void)_recalculateSizes;
- (struct CGSize { double x0; double x1; })sectionMetrics:(id)a0 sizeForItemAtIndex:(long long)a1 withFontDescriptor:(id)a2;
- (void)_dynamicTypeChanged;
- (void)_prepareCollectionView;
- (id)_textElementAtIndex:(long long)a0;
- (BOOL)_isFeatureItemAtIndexPath:(id)a0;
- (BOOL)_collectionView:(id)a0 indexPathShouldDisplayAsSelected:(id)a1;

@end
