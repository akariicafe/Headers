@class GKCollectionViewDataSource;

@interface GKSearchBar : UISearchBar

@property (retain, nonatomic) GKCollectionViewDataSource *dataSource;
@property (nonatomic) long long sectionIndex;

- (void)dealloc;

@end
