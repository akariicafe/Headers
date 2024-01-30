@class PLDataCluster;

@interface CLSSummaryClusteringItem : NSObject

@property (readonly) PLDataCluster *cluster;
@property (readonly) unsigned long long numberOfItemsToElect;

- (void).cxx_destruct;
- (id)initWithCluster:(id)a0 numberOfItemsToElect:(unsigned long long)a1;

@end
