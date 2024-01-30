@class SFReaderAppearanceThemeSelector, NSString, UICollectionView, UICollectionViewCellRegistration;
@protocol SFReaderContext, _SFSettingsAlertOptionsGroupController;

@interface ReaderFormatViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView *_collectionView;
    SFReaderAppearanceThemeSelector *_themeSelector;
    id<_SFSettingsAlertOptionsGroupController> _fontGroupController;
    UICollectionViewCellRegistration *_cellRegistrations[2];
}

@property (readonly, nonatomic) id<SFReaderContext> readerContext;
@property (readonly, nonatomic) long long provenance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (id)initWithReaderContext:(id)a0 provenance:(long long)a1;
- (void)_updateCloseButton;

@end
