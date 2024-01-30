@class GKSupplementaryViewMetrics, GKSectionMetrics;
@protocol UICollectionViewDataSource;

@interface GKCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes

@property (nonatomic) BOOL isPartOfGlobalPinningGroup;
@property (nonatomic) unsigned long long gridLayoutLocation;
@property (nonatomic) BOOL doesAbutLeftOfCollectionView;
@property (nonatomic) BOOL allSectionItemsVisible;
@property (nonatomic) BOOL isPinned;
@property (nonatomic) double unpinnedY;
@property (retain, nonatomic) id<UICollectionViewDataSource> dataSource;
@property (retain, nonatomic) GKSectionMetrics *sectionMetrics;
@property (retain, nonatomic) GKSupplementaryViewMetrics *supplementaryMetrics;
@property (nonatomic) unsigned long long currentVisibleItemCount;
@property (nonatomic) unsigned long long currentTotalItemCount;
@property (nonatomic) unsigned long long maxTotalItemCount;
@property (nonatomic) double leadingMargin;
@property (nonatomic) double trailingMargin;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
