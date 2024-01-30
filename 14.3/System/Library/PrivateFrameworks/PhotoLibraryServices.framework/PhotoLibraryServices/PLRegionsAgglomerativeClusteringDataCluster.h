@class NSArray;

@interface PLRegionsAgglomerativeClusteringDataCluster : NSObject

@property (readonly) NSArray *vectors;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double radius;
@property (nonatomic) double score;

+ (id)dataClusterWithDataVector:(id)a0;
+ (id)mergedClusterFrom:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDataVector:(id)a0;

@end
