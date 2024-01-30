@class VUILibraryProductInfoView, NSString, VUIViewControllerContentPresenter, VUILegacyDownloadButton, VUIMediaItem, VUIProductLockupView;

@interface VUILibraryProductViewController : VUILibraryStackViewController <UICollectionViewDataSource, VUIProductLockupViewDelegate, VUIRoundButtonDelegate> {
    VUIMediaItem *_mediaItem;
    VUIProductLockupView *_productLockupView;
    VUILibraryProductInfoView *_productInfoView;
}

@property (retain, nonatomic) VUILegacyDownloadButton *downloadButton;
@property (retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithMediaItem:(id)a0;
- (void)start;
- (void)viewDidAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)configureWithCollectionView:(id)a0;
- (void)reportMetricsPageEvent;
- (id)_productLockupViewWithMediaItem:(id)a0;
- (void)_updateAfterContentWasManuallyDeleted:(BOOL)a0;
- (id)_productInfoViewWithMediaItem:(id)a0;
- (id)_productSectionForHeader:(id)a0 data:(id)a1 group:(id)a2 maxItemCount:(unsigned long long)a3;
- (void)contentDescriptionExpanded;
- (void)didSelectButton:(id)a0;

@end
