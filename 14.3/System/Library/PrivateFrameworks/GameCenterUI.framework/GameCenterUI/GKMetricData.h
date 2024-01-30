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
- (void)dealloc;
- (void)addAttributes:(id)a0 forLocation:(unsigned long long)a1;
- (id)description;
- (id)_gkDescriptionWithChildren:(long long)a0;
- (id)localDescription;

@end
