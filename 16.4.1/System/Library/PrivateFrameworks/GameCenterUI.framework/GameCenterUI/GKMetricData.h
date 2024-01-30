@class GKGridLayoutMetrics, NSString, GKSectionMetrics, NSMutableArray;

@interface GKMetricData : NSObject

@property (readonly, nonatomic) GKSectionMetrics *sectionMetrics;
@property (retain, nonatomic) GKGridLayoutMetrics *metrics;
@property (readonly, nonatomic) NSString *layoutKey;
@property (nonatomic) unsigned long long currentMaxVisibleItemCount;
@property (nonatomic) unsigned long long filteredTotalItemCount;
@property (retain, nonatomic) NSMutableArray *headerPinnableAttributes;
@property (retain, nonatomic) NSMutableArray *footerPinnableAttributes;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_gkDescriptionWithChildren:(long long)a0;
- (void)addAttributes:(id)a0 forLocation:(unsigned long long)a1;
- (id)localDescription;

@end
