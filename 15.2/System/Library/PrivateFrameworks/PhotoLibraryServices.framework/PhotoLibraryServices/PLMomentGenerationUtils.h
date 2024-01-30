@interface PLMomentGenerationUtils : NSObject

+ (unsigned short)locationTypeForLocation:(id)a0 usingLocationsOfInterest:(id)a1 routineIsAvailable:(BOOL)a2 horizontalAccuracy:(double)a3;
+ (unsigned short)processedLocationTypeForMoment:(id)a0 locationsOfInterest:(id)a1 frequentLocations:(id)a2 routineIsAvailable:(BOOL)a3;
+ (BOOL)isTopFrequentLocationForMoment:(id)a0 frequentLocations:(id)a1;
+ (id)frequentLocationsOverlappingStartDate:(id)a0 endDate:(id)a1 frequentLocations:(id)a2;
+ (id)sortedOverlappingFrequentLocations:(id)a0;
+ (void)processLocationIfNecessaryInMoment:(id)a0 usingManager:(id)a1 frequentLocations:(id)a2 frequentLocationsDidChange:(BOOL)a3;
+ (BOOL)isNearFrequentLocationForMoment:(id)a0 frequentLocations:(id)a1;
+ (BOOL)isAtFrequentLocationForMoment:(id)a0 frequentLocations:(id)a1;

@end
