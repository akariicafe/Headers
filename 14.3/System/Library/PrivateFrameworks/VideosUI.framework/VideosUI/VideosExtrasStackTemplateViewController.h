@class VideosExtrasBannerController, NSString, UICollectionView, NSMutableDictionary, UICollectionViewFlowLayout;

@interface VideosExtrasStackTemplateViewController : VideosExtrasTemplateViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    NSMutableDictionary *_viewControllers;
    NSMutableDictionary *_sizes;
    VideosExtrasBannerController *_bannerViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)contentScrollView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (id)templateElement;
- (void)_dynamicTypeDidChange;
- (void)_prepareLayout;
- (BOOL)showsPlaceholder;
- (id)initWithDocument:(id)a0 options:(id)a1 context:(id)a2;
- (id)_viewControllerForIndexPath:(id)a0;
- (id)sectionStyle;

@end
