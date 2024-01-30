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

- (id)init;
- (void).cxx_destruct;
- (id)initWithDefaultsManager:(id)a0;
- (id)initWithBaseDuration:(double)a0 injectedPlistPath:(id)a1 locationLookupWindowMaxMinutes:(double)a2 locationLookupWindowMinMinutes:(double)a3 maxLocationsPerFingerprint:(unsigned long long)a4 locationUncertaintyThreshold:(double)a5 aoiDistanceThreshold:(double)a6 poiDistanceThreshold:(double)a7 harvestMask:(unsigned long long)a8;

@end
