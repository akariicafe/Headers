@interface CLIndoorCommonHooks : NSObject

+ (id)filterLocationGroups:(id)a0 isRegionalSupported:(BOOL)a1;
+ (id)nearestVenues:(struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > { struct duration<long long, std::__1::ratio<1, 1000000000> > { long long x0; } x0; })a0 availableVenues:(id)a1 latestPosition:(id)a2 availabilityZScoreConfidenceInterval:(double)a3 settings:(const struct NearestVenueSettings { id x0; double x1; id x2; BOOL x3; } *)a4 isAllowedMultipleVenues:(BOOL)a5;

@end
