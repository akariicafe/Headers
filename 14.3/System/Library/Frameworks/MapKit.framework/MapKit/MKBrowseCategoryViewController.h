@class UIFont, UIColor, NSArray, MKMapItem, MKFixedToTopCollectionViewFlowLayout, NSString, NSLayoutConstraint, MKBrowseCategoryCollectionView;
@protocol MKBrowseCategoryViewControllerDelegate;

@interface MKBrowseCategoryViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, MKModuleViewControllerProtocol>

@property (retain, nonatomic) NSArray *browseItems;
@property (retain, nonatomic) MKBrowseCategoryCollectionView *collectionView;
@property (retain, nonatomic) MKFixedToTopCollectionViewFlowLayout *collectionViewFlowLayout;
@property (retain, nonatomic) NSLayoutConstraint *collectionViewBottomConstraint;
@property (nonatomic) struct CGSize { double width; double height; } preferredCellSize;
@property (retain, nonatomic) UIFont *preferredCellTitleLabelFont;
@property (retain, nonatomic) UIColor *cellTitleLabelTextColor;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (weak, nonatomic) id<MKBrowseCategoryViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)setupCollectionView;
- (id)initWithMapItem:(id)a0;
- (void)infoCardThemeChanged;
- (id)willStartDisplayCategoriesNotificationName;
- (void)_ppt_postNotificationName:(id)a0 object:(id)a1;
- (double)collectionViewBottomPadding;
- (void)updateCellTitleLabelTextColor;
- (id)didDisplayCategoriesNotificationName;
- (int)placeCardTypeForAnalytics;
- (void)contentSizeCategoryDidChange:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
