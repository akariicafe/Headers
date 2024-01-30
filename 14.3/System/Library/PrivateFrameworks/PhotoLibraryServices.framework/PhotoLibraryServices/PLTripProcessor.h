@interface PLTripProcessor : NSObject

+ (id)processTripsWithItems:(id)a0 frequentLocations:(id)a1 lastHomeVisitDate:(id)a2 progressBlock:(id /* block */)a3;
+ (double)_timeIntervalBetweenItem:(id)a0 andItem:(id)a1;
+ (unsigned long long)_numberOfAssetsInItems:(id)a0;
+ (double)_minimumDistanceBetweenFrequentLocations:(id)a0 andItem:(id)a1;
+ (id)_filterFrequentLocations:(id)a0 forDateInterval:(id)a1;

@end
