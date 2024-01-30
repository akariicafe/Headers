@class NSURL;

@interface SHClusterQuery : NSObject

@property (readonly, nonatomic) NSURL *sourceURL;
@property (readonly, nonatomic) NSURL *destinationURL;
@property (readonly, nonatomic) long long type;

+ (id)clusterForType:(long long)a0;
+ (id)artistsCluster;
+ (id)tracksCluster;

- (void).cxx_destruct;
- (void)controllerForType:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)filterMediaItemQueryCollection:(id)a0 bySeedCollection:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithType:(long long)a0 sourceURL:(id)a1 destinationURL:(id)a2;
- (void)mediaItemsMatchingValuesInCollection:(id)a0 completionHandler:(id /* block */)a1;
- (void)mediaItemsWithHighCohesionToValue:(id)a0 forProperty:(id)a1 completionHandler:(id /* block */)a2;
- (void)statusWithCompletionHandler:(id /* block */)a0;

@end
