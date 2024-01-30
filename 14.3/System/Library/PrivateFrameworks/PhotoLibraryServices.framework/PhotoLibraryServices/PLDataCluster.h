@class NSArray;

@interface PLDataCluster : NSObject

@property (retain, nonatomic) NSArray *objects;
@property (nonatomic) double diameter;
@property (retain, nonatomic) id clustroid;
@property (nonatomic) double score;

+ (id)clusterWithObjects:(id)a0 clustroid:(id)a1 diameter:(double)a2;
+ (id)clusterWithObjects:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)approximateRegionWithMaximumRadius:(double)a0;
- (id)description;
- (id)universalDates;
- (id)locations;
- (id)meanUniversalDate;
- (id)meanRegion:(double)a0;

@end
