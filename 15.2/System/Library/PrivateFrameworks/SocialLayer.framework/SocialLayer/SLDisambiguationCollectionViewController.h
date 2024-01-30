@class NSDictionary, UICollectionViewDiffableDataSource, NSDiffableDataSourceSnapshot, SLHighlight, SLDisambiguationCompositionalLayout;

@interface SLDisambiguationCollectionViewController : UICollectionViewController

@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) NSDiffableDataSourceSnapshot *snapshot;
@property (retain, nonatomic) NSDictionary *attributionMap;
@property (retain, nonatomic) SLHighlight *highlight;
@property (retain, nonatomic) SLDisambiguationCompositionalLayout *layout;
@property (nonatomic) BOOL isInitialLoad;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } attributionViewFrame;

- (void)startAnimation;
- (void)viewDidLayoutSubviews;
- (id)cellForIndexPath:(id)a0 inCollectionView:(id)a1 withItemIdentifier:(id)a2;
- (void)loadView;
- (id)dataSourceWithCollectionView:(id)a0;
- (void).cxx_destruct;
- (id)initWithHighlight:(id)a0;
- (id)initialLayoutSectionForEnvironment:(id)a0;
- (void)collectionViewBackgroundTapped:(id)a0;
- (void)updateDataSourceSnapshot;
- (id)finalLayoutSectionForEnvironment:(id)a0;
- (id)createAttributionMapWithHighlight:(id)a0;
- (id)finalLayoutGroup:(id)a0 itemsCount:(unsigned long long)a1 collectionWidth:(double)a2 targetItemHeight:(double)a3;
- (id)initialLayoutGroup:(id)a0 itemsCount:(unsigned long long)a1 collectionWidth:(double)a2 targetItemHeight:(double)a3;
- (id)finalCompositionalLayout;
- (id)initialCompositionalLayout;

@end
