@interface RTMapItemProviderLearnedPlaceParameters : NSObject

@property (readonly, nonatomic) double maxDistanceThreshold;
@property (readonly, nonatomic) double minDistanceThreshold;
@property (readonly, nonatomic) double softDistanceThreshold;
@property (readonly, nonatomic) double homeConfidence;
@property (readonly, nonatomic) double workConfidence;
@property (readonly, nonatomic) double schoolConfidence;
@property (readonly, nonatomic) double gymConfidence;
@property (readonly, nonatomic) double nonRevGeoConfidence;
@property (readonly, nonatomic) double revGeoConfidence;
@property (readonly, nonatomic) unsigned long long revGeoSourceMask;
@property (readonly, nonatomic) unsigned long long removeSourceMask;

- (id)description;
- (id)initWithMaxDistanceThreshold:(double)a0 minDistanceThreshold:(double)a1 softDistanceThreshold:(double)a2 homeConfidence:(double)a3 workConfidence:(double)a4 schoolConfidence:(double)a5 gymConfidence:(double)a6 nonRevGeoConfidence:(double)a7 revGeoConfidence:(double)a8 revGeoSourceMask:(unsigned long long)a9 removeSourceMask:(unsigned long long)a10;
- (id)init;
- (id)initWithDefaultsManager:(id)a0;

@end
