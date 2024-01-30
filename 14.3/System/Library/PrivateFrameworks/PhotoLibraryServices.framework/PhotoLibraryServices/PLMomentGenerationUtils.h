@interface PLMomentGenerationUtils : NSObject

+ (BOOL)isTopFrequentLocationForMoment:(id)a0 frequentLocations:(id)a1;
+ (unsigned short)locationTypeForLocation:(id)a0 usingLocationsOfInterest:(id)a1 routineIsAvailable:(BOOL)a2 horizontalAccuracy:(double)a3;
+ (id)frequentLocationsOverlappingStartDate:(id)a0 endDate:(id)a1 frequentLocations:(id)a2;
+ (unsigned short)processedLocationTypeForMoment:(id)a0 locationsOfInterest:(id)a1 frequentLocations:(id)a2 routineIsAvailable:(BOOL)a3;
+ (BOOL)isAtFrequentLocationForMoment:(id)a0 frequentLocations:(id)a1;
+ (BOOL)isNearFrequentLocationForMoment:(id)a0 frequentLocations:(id)a1;
+ (void)processLocationIfNecessaryInMoment:(id)a0 usingManager:(id)a1 frequentLocations:(id)a2 frequentLocationsDidChange:(BOOL)a3;
+ (id)sortedOverlappingFrequentLocations:(id)a0;

@end
