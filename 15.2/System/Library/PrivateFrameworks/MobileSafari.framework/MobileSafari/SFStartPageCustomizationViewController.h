@class NSString, NSArray, UICollectionView, UICollectionViewDiffableDataSource, WBSStartPageBackgroundImagesDataSource, NSMutableDictionary;
@protocol SFStartPageCustomizationDataSource;

@interface SFStartPageCustomizationViewController : UIViewController <SFStartPageBackgroundImageCellDelegate, SFStartPageCustomizationCellDelegate, UICollectionViewDelegate, PHPickerViewControllerDelegate, SFStartPageDataSourceObserving> {
    NSArray *_backgroundImages;
    UICollectionView *_backgroundImagesCollectionView;
    UICollectionViewDiffableDataSource *_backgroundImagesCollectionViewDataSource;
    WBSStartPageBackgroundImagesDataSource *_backgroundImagesDataSource;
    BOOL _backgroundSectionUnconditionallyVisible;
    NSMutableDictionary *_identifierToCustomizationItemMap;
    unsigned long long _reloadDataSupressionCount;
    UICollectionView *_rootCollectionView;
    UICollectionViewDiffableDataSource *_rootCollectionViewDataSource;
}

@property (nonatomic) BOOL showsCloseButton;
@property (weak) id<SFStartPageCustomizationDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSource:(id)a0;
- (id)collectionView:(id)a0 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)a1 atCurrentIndexPath:(id)a2 toProposedIndexPath:(id)a3;
- (void)reloadNavigationItemAnimated:(BOOL)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (void)_dismiss:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)picker:(id)a0 didFinishPicking:(id)a1;
- (void)dealloc;
- (void)reloadDataAnimatingDifferences:(BOOL)a0;
- (void)startPageCustomizationCellDidChangeValue:(id)a0;
- (void)backgroundImageCellDidSelectClearButton:(id)a0;
- (void)backgroundImagesDidChange:(id)a0;
- (id)makeRootCollectionViewLayout;
- (void)setUpRootCollectionViewDataSource;
- (id)makeBackgroundImagesCollectionViewLayout;
- (void)setUpBackgroundImagesCollectionViewDataSource;
- (void)customizationItemOrderDidChange:(id)a0;
- (BOOL)showsBackgroundImagesCell;
- (id)makeCustomizationSyncToggleRegistration;
- (id)makeCustomizationSyncFooterRegistration;
- (id)makeCustomizationItemRegistration;
- (id)makeBackgroundImageToggleRegistration;
- (id)makeReorderingHandlers;
- (id)makeBackgroundImageRegistration;
- (void)setCustomizationItemIdentifier:(id)a0 enabled:(BOOL)a1;
- (void)_setCustomizationSyncWithValue:(id)a0;
- (void)showPhotoPicker;
- (void)highlightsContentDidChange:(id)a0;

@end
