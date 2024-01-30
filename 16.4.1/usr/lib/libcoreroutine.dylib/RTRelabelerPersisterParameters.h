@interface RTRelabelerPersisterParameters : NSObject

@property (readonly, nonatomic) unsigned long long maxCollapseIterations;
@property (readonly, nonatomic) double placeholderCollapseDistanceThreshold;
@property (readonly, nonatomic) double reverseGeocodeLeewayDistance;
@property (readonly, nonatomic) double reverseGeocodePlaceFetchDistanceThreshold;
@property (readonly, nonatomic) double unconcreteLOICollapseDistanceThreshold;
@property (readonly, nonatomic) double visitAdjacencyMergeThreshold;

- (id)initWithDefaultsManager:(id)a0;
- (id)init;
- (id)description;
- (id)initWithMaxCollapseIterations:(unsigned long long)a0 placeholderCollapseDistanceThreshold:(double)a1 reverseGeocodeLeewayDistance:(double)a2 reverseGeocodePlaceFetchDistanceThreshold:(double)a3 unconcreteLOICollapseDistanceThreshold:(double)a4 visitAdjacencyMergeThreshold:(double)a5;

@end
