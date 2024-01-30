@class NSArray, NSString;

@interface SQSimilarityCluster : NSObject

@property (nonatomic) long long clusterType;
@property (retain, nonatomic) NSArray *mediaItems;
@property (copy, nonatomic) NSString *clusterID;
@property (copy, nonatomic) NSArray *genres;
@property (nonatomic) long long cohesionLevel;

+ (id)clusterOfType:(long long)a0;

- (void).cxx_destruct;
- (void)appendMediaItem:(id)a0;

@end
