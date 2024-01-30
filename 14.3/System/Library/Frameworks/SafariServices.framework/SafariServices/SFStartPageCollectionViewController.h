@class NSString, NSSet, UICollectionViewDiffableDataSource, UICollectionView, NSArray, NSMapTable;
@protocol SFStartPageCollectionDataSource, SFStartPageCollectionDelegate, _SFStartPagePreviewProviding;

@interface SFStartPageCollectionViewController : UIViewController <UICollectionViewDelegate, _SFStartPageDataSourceObserving> {
    NSSet *_collapsibleSectionIdentifiers;
    UICollectionViewDiffableDataSource *_collectionDataSource;
    UICollectionView *_collectionView;
    NSSet *_expandedSectionIdentifiers;
    double _lastLayoutWidth;
    NSArray *_sections;
    NSMapTable *_contextMenuToIndexPathMap;
}

@property (weak, nonatomic) id<SFStartPageCollectionDataSource> dataSource;
@property (retain, nonatomic) id<SFStartPageCollectionDataSource> strongDataSource;
@property (weak, nonatomic) id<SFStartPageCollectionDelegate, _SFStartPagePreviewProviding> delegate;
@property (nonatomic) BOOL displaysSectionHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 contextMenuConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (id)collectionView:(id)a0 previewForHighlightingContextMenuWithConfiguration:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 previewForDismissingContextMenuWithConfiguration:(id)a1;
- (void)_updateNavigationItemAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)reloadDataAnimatingDifferences:(BOOL)a0;
- (void)collectionView:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (id)_makeCollectionViewLayout;
- (void)_setUpDataSource:(id)a0;
- (void)_updateSections;
- (BOOL)_updateExpandedSectionIdentifiers;
- (void)_applyCurrentSnapshotAnimatingDifferences:(BOOL)a0;
- (BOOL)_isSectionExpanded:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)_currentSnapshot;
- (id)_collectionView:(id)a0 cellForIdentifier:(id)a1 indexPath:(id)a2;
- (id)_collectionView:(id)a0 supplementaryViewWithKind:(id)a1 forIndexPath:(id)a2;
- (void)_configureHeader:(id)a0 forSection:(id)a1 atIndexPath:(id)a2;
- (id)_toggleExpandedActionForSection:(id)a0 atIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewLayoutMarginsDidChange;
- (long long)_numberOfColumnsForSectionItemType:(long long)a0 containerWidth:(double)a1;
- (void)_toggleSectionExpanded:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_sectionContentInsetsWithYAxisPadding:(double)a0;
- (struct { double x0; double x1; })_siteIconLayoutValuesForTraitCollection:(id)a0;
- (id)_bannerSectionLayoutForEnvironment:(id)a0;
- (id)_siteIconSectionLayoutForEnvironment:(id)a0;
- (id)_siteCardSectionLayoutForEnvironment:(id)a0;
- (id)_layoutForSectionAtIndex:(long long)a0 inEnvironment:(id)a1;
- (void)presentViewController:(id)a0 fromItemWithIdentifier:(id)a1;
- (void)viewDidLoad;

@end
