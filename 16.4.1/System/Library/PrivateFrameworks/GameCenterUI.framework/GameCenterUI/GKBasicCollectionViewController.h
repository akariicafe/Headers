@class NSArray, GKCollectionViewDataSource;

@interface GKBasicCollectionViewController : GKCollectionViewController

@property (retain, nonatomic) NSArray *metricsForSections;
@property (retain, nonatomic) GKCollectionViewDataSource *initialDataSource;
@property (retain, nonatomic) id target;

- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)configureDataSource;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setDataSource:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 title:(id)a1;

@end
