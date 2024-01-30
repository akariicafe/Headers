@interface GEORouteBuilder : NSObject

+ (id)_composedRouteLegForStartStep:(id)a0 endStep:(id)a1 custodian:(id)a2 geoRouteLeg:(id)a3 origin:(id)a4 destination:(id)a5 arrivalParameters:(id)a6 legLength:(double)a7;
+ (id)_composedRouteStepWithTransportType:(int)a0 andCustodian:(id)a1 geoRouteLeg:(id)a2 forGeoStep:(id)a3 withStepIndex:(unsigned long long)a4 stepStartPointIndex:(unsigned long long)a5 legStartPointIndex:(unsigned long long)a6;
+ (id)outputForGeoWaypointRoute:(id)a0 initializerData:(id)a1 custodian:(id)a2;
+ (id)outputForGeoRoute:(id)a0 initializerData:(id)a1 andCustodian:(id)a2;
+ (id)buildPointSectionsWithSteps:(id)a0 segments:(id)a1 coordinates:(id)a2;
+ (id)buildMapRegionFromPointSections:(id)a0;
+ (id)_coordinatesForGeoWaypointRoute:(id)a0;
+ (void)_componentsForGeoWaypointRoute:(id)a0 initializerData:(id)a1 custodian:(id)a2 outLegs:(out id *)a3 outSegments:(out id *)a4 outSteps:(out id *)a5;
+ (id)_guidanceEventsForGeoWaypointRoute:(id)a0 legs:(id)a1 steps:(id)a2 coordinates:(id)a3;
+ (id)_buildCoordinatesForGeoRoute:(id)a0;
+ (void)_buildComponentsForGeoRoute:(id)a0 andCustodian:(id)a1 initializerData:(id)a2 outLegs:(out id *)a3 outSegments:(out id *)a4 outSteps:(out id *)a5;
+ (id)_buildGuidanceEventsForGeoRoute:(id)a0 withComposedSteps:(id)a1 coordinates:(id)a2;
+ (id)_unpackedPointsDataForGeoRoute:(id)a0;
+ (id)_composedRouteSegmentForStartStep:(id)a0 andEndStep:(id)a1 andCustodian:(id)a2;
+ (id)segmentForPointIndex:(unsigned long long)a0 withSegments:(id)a1 andSteps:(id)a2;
+ (unsigned long long)segmentIndexForPointIndex:(unsigned long long)a0 withSegments:(id)a1;
+ (unsigned long long)stepIndexForPointIndex:(unsigned long long)a0 withSteps:(id)a1;
+ (id)_segmentForStepIndex:(unsigned long long)a0 withSegments:(id)a1;
+ (double *)createPointLengthsFromPointLengths:(double *)a0 withPointCount:(unsigned long long)a1;

@end
