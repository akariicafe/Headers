@class NSArray, CLLocation;

@interface HMDLocationCluster : NSObject

@property (copy, nonatomic) NSArray *locations;
@property (nonatomic) unsigned long long numOfClusters;
@property (readonly, nonatomic) NSArray *groups;
@property (readonly, nonatomic) CLLocation *homeLocation;

- (void).cxx_destruct;
- (id)initWithLocations:(id)a0;
- (void)startGrouping;
- (void)startKMeans;
- (void)calculateHomeLocationFromGroups;
- (void)clusterWithGroups:(id)a0;
- (id)generateNewGroupsFromGroups:(id)a0;
- (void)printGroups:(id)a0;

@end
