@interface HKRegionAvailabilityComparator : NSObject

+ (BOOL)_applyMask:(id)a0 toAvailableRegions:(id)a1;
+ (id)_intersectAvailabilityRegions:(id)a0 withAvailabilityRegions:(id)a1;
+ (long long)isRegionCodeFound:(id)a0 availabilityWatch:(id)a1 availabilityPhone:(id)a2;
+ (BOOL)_versionsMatchBetweenAvailabilityRegions:(id)a0 availabilityRegions:(id)a1;
+ (long long)_handleResultWithFound:(BOOL)a0 versionsMatch:(BOOL)a1;
+ (BOOL)isRegionCodeFound:(id)a0 forLocalDeviceWithAvailability:(id)a1;
+ (long long)unitTest_isRegionCodeFound:(id)a0 availabilityWatch:(id)a1 availabilityPhone:(id)a2;

@end
