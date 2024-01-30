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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
