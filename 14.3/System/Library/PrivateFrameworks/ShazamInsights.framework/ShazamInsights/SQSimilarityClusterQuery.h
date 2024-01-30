@class SQRegion, NSDate;

@interface SQSimilarityClusterQuery : SQQuery

@property (retain, nonatomic) SQRegion *region;
@property (retain, nonatomic) NSDate *date;

+ (id)new;
+ (id)queue;

- (id)init;
- (void).cxx_destruct;
- (void)clustersFromFilteringShazamIDs:(id)a0 byTasteShazamIDs:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)clustersFromFilteringProductIDs:(id)a0 byTasteProductIDs:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)clustersForRegion:(id)a0 date:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
