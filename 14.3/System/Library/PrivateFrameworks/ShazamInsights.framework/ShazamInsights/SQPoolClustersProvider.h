@interface SQPoolClustersProvider : NSObject

+ (id)queue;
+ (void)populateCluster:(id)a0 withData:(id)a1;
+ (void)populateMediaItem:(id)a0 withData:(id)a1;
+ (void)clustersFromServerData:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
