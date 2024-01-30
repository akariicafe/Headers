@class NSArray, CLSNowPlayingStreamEventClusteringParameters;

@interface CLSNowPlayingStreamEventClusterer : NSObject

@property (readonly, nonatomic) CLSNowPlayingStreamEventClusteringParameters *clusteringParameters;
@property (readonly, nonatomic) NSArray *sessions;

- (id)init;
- (void).cxx_destruct;
- (id)_dbScanClusterEvents:(id)a0;
- (id)_populateSessionsWithClusters:(id)a0;
- (void)clusterEvents:(id)a0;
- (void)dbScanClusterEvents:(id)a0;
- (id)initWithClusteringParameters:(id)a0;
- (void)naiveClusterEvents:(id)a0;

@end
