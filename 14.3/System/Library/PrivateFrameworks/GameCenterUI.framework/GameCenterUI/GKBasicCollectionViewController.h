@class NSArray, GKCollectionViewDataSource;

@interface GKBasicCollectionViewController : GKCollectionViewController

@property (retain, nonatomic) NSArray *metricsForSections;
@property (retain, nonatomic) GKCollectionViewDataSource *initialDataSource;
@property (retain, nonatomic) id target;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setDataSource:(id)a0;
- (void)dealloc;
- (void)configureDataSource;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithDataSource:(id)a0 title:(id)a1;

@end
