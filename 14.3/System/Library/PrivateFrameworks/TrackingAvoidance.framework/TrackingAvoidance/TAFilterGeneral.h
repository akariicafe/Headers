@interface TAFilterGeneral : NSObject

+ (id)filteredInterVisitMetadata:(id)a0 inInterval:(id)a1 withLocRelevanceThreshold:(double)a2;
+ (id)filterSuspiciousDeviceWithStore:(id)a0 andAppendOutgoingRequestsTo:(id)a1;
+ (id)getDateIntervalOfInterestForFiltering:(id)a0 settings:(id)a1;
+ (id)filterSuspiciousDeviceWithStore:(id)a0 settings:(id)a1 andAppendOutgoingRequestsTo:(id)a2;
+ (void)preprocessLocationAndAdvertisementWithEnumerator:(id)a0 addressToLocationList:(id)a1 addressToAdvertisementList:(id)a2 relevanceThreshold:(double)a3;
+ (id)dateIntervalAfterVisitAdjustment:(id)a0 intervalOfInterest:(id)a1;
+ (BOOL)coarsePedestrianSpeedCheck:(id)a0 withFilterSettings:(id)a1;
+ (id)filteredInterVisitMetadataWithVisitAdjustment:(id)a0 inInterval:(id)a1 withLocRelevanceThreshold:(double)a2;
+ (double)distOfTravelAlong:(id)a0;
+ (id)filteredPeopleDensityResults:(id)a0 within:(id)a1;
+ (BOOL)shouldIssuePeopleDensityScan:(unsigned long long)a0 distTravel:(double)a1 durationOfTravel:(double)a2 settings:(id)a3 resultsInBuffer:(id)a4;

@end
