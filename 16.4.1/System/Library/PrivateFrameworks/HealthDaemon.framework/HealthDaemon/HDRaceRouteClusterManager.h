@class HDProfile;

@interface HDRaceRouteClusterManager : NSObject {
    HDProfile *_profile;
}

- (id)initWithProfile:(id)a0;
- (id)raceRouteClustersForActivityType:(unsigned long long)a0 error:(id *)a1;
- (BOOL)generateRaceRouteClustersWithLimit:(unsigned long long)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
