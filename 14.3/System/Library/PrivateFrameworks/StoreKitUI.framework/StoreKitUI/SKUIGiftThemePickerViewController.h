@class SKUIGiftThemePickerFlowLayout, NSString, UIPageControl, UIImage, UITapGestureRecognizer, NSArray, SKUIGiftThemeCollectionView;

@interface SKUIGiftThemePickerViewController : SKUIGiftStepViewController <SKUIGiftConfigurationObserver, UICollectionViewDataSource, UICollectionViewDelegate> {
    BOOL _animatingScrollView;
    SKUIGiftThemePickerFlowLayout *_flowLayout;
    SKUIGiftThemeCollectionView *_collectionView;
    UIImage *_itemImage;
    UIPageControl *_pageControl;
    long long _selectedThemeIndex;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSArray *_themes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)_collectionView;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)dealloc;
- (void)loadView;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (double)_cardWidth;
- (id)_flowLayout;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)_nextAction:(id)a0;
- (id)initWithGift:(id)a0 configuration:(id)a1;
- (void)_setItemImage:(id)a0 error:(id)a1;
- (void)_backgroundTapAction:(id)a0;
- (void)_layoutCollectionViewWithTraits:(id)a0;
- (void)_setSelectedThemeIndex:(long long)a0 animated:(BOOL)a1;
- (BOOL)_isIPadLarge;
- (double)_scrollInsetHorizontal:(id)a0;
- (double)_cardHeight:(id)a0;
- (double)_collectionViewWidth:(id)a0;
- (void)giftConfigurationController:(id)a0 didLoadImageForTheme:(id)a1;

@end
