@class NSString;

@interface RTMapItemProviderBluePOIParameters : NSObject

@property (readonly, nonatomic) double baseDuration;
@property (readonly, nonatomic) NSString *injectedPlistPath;
@property (readonly, nonatomic) double locationLookupWindowMaxMinutes;
@property (readonly, nonatomic) double locationLookupWindowMinMinutes;
@property (readonly, nonatomic) unsigned long long maxLocationsPerFingerprint;
@property (readonly, nonatomic) double locationUncertaintyThreshold;
@property (readonly, nonatomic) double aoiDistanceThreshold;
@property (readonly, nonatomic) double poiDistanceThreshold;
@property (readonly, nonatomic) unsigned long long harvestMask;
@property (readonly, nonatomic) double aoiConfidencePassThroughThreshold;
@property (readonly, nonatomic) double aoiConfidenceConsiderThreshold;
@property (readonly, nonatomic) double poiConfidencePassThroughThreshold;
@property (readonly, nonatomic) double poiConfidenceConsiderThreshold;

- (id)initWithDefaultsManager:(id)a0;
- (id)init;
- (id)initWithBaseDuration:(double)a0 injectedPlistPath:(id)a1 locationLookupWindowMaxMinutes:(double)a2 locationLookupWindowMinMinutes:(double)a3 maxLocationsPerFingerprint:(unsigned long long)a4 locationUncertaintyThreshold:(double)a5 aoiDistanceThreshold:(double)a6 poiDistanceThreshold:(double)a7 harvestMask:(unsigned long long)a8 aoiConfidencePassThroughThreshold:(double)a9 aoiConfidenceConsiderThreshold:(double)a10 poiConfidencePassThroughThreshold:(double)a11 poiConfidenceConsiderThreshold:(double)a12;
- (id)description;
- (void).cxx_destruct;

@end
