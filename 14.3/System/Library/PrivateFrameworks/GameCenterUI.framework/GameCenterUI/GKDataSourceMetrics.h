@class NSString, NSMutableDictionary, NSArray, GKCollectionViewDataSource;

@interface GKDataSourceMetrics : GKGridLayoutMetrics

@property (retain, nonatomic) NSString *cachedKey;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } globalSectionRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } localSectionRange;
@property (retain, nonatomic) NSMutableDictionary *sectionToMetrics;
@property (retain, nonatomic) NSArray *childMetrics;
@property (retain, nonatomic) GKCollectionViewDataSource *dataSource;

+ (id)dataSourceMetricsWithMetrics:(id)a0 dataSource:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithMetrics:(id)a0 dataSource:(id)a1;
- (id)globalLayoutKey;
- (void)setMetrics:(id)a0 forSection:(long long)a1;
- (id)globalLayoutKeyForSection:(long long)a0;
- (void)computeGlobalSectionRangesWithBaseIndex:(long long)a0;
- (id)accumulateSections:(id)a0 layout:(id)a1;
- (id)applyDataSourceMetricsToSections:(id)a0 withParent:(id)a1 layout:(id)a2;
- (void)generateMetricDataForLayout:(id)a0;
- (id)metricsForSection:(long long)a0;
- (void)prepareLayout:(id)a0;
- (id)description;
- (id)_gkDescriptionWithChildren:(long long)a0;

@end
