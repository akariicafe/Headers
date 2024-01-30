@interface GEOTransitRouteBuilder : GEORouteBuilder

+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_appendPointData:(id)a0 toPointData:(id)a1 withContinuity:(BOOL)a2;
+ (id)_buildArrivalStepInfoFromStep:(id)a0 withPointCount:(unsigned long long)a1;
+ (id)_buildCoordinatesForData:(id)a0 andStepInfos:(id)a1 andCustodian:(id)a2 withWaypoints:(id)a3 andArrivalParameters:(id)a4 andCreateLegs:(id)a5;
+ (id)_buildExpandedWalkingStepInfosFromStep:(id)a0 andDecoderData:(id)a1 andPointData:(id)a2;
+ (id)_buildLegsFromSteps:(id)a0 andCoordinates:(id)a1 andCustodian:(id)a2;
+ (id)_buildPointDataForGeometry:(id)a0 andCreatePointStarts:(id)a1;
+ (id)_buildPointSectionsFromSteps:(id)a0 andSegments:(id)a1 coordinates:(id)a2 andTransitLineColor:(id)a3;
+ (double)_buildPointSectionsInCollection:(id)a0 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 stepIndex:(unsigned long long)a2 transitLineColor:(id)a3 startDistance:(double)a4 andCoordinates:(id)a5 fromSteps:(id)a6 andSegments:(id)a7;
+ (double)_buildPointSectionsInCollection:(id)a0 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 stepIndex:(unsigned long long)a2 transitLineColor:(id)a3 startDistance:(double)a4 coordinates:(id)a5 fromSteps:(id)a6 andSegments:(id)a7 andDecoderData:(id)a8;
+ (id)_buildSegmentsForGeometry:(id)a0 andStepCount:(unsigned long long)a1 andPointCount:(unsigned long long)a2 andCustodian:(id)a3;
+ (id)_buildStepInfosFromSteps:(id)a0 withDecoderData:(id)a1 andIsWalkingOnlyRoute:(BOOL)a2 andBuildPointData:(id)a3;
+ (id)_buildStepsForGeometry:(id)a0 andPointStarts:(id)a1 andStopCount:(unsigned long long)a2 andLine:(id)a3 andCustodian:(id)a4;
+ (id)_buildStepsForStepInfos:(id)a0 andCustodian:(id)a1 andDecoderData:(id)a2 andSuggestedRoute:(id)a3 andLegs:(id)a4 andPointCount:(unsigned long long)a5 andRideSelections:(id)a6 andSectionOptions:(id)a7 andCreateSegments:(id)a8 andUpdateTripCount:(unsigned long long *)a9;
+ (id)_buildTransitStepInfoFromStep:(id)a0 withPreviousStep:(id)a1 andNextStep:(id)a2 andDecoderData:(id)a3 andPointData:(id)a4;
+ (id)_sectionForSteps:(id)a0 withIndex:(unsigned long long)a1 andSegment:(id)a2 withIndex:(unsigned long long)a3 andCoordinates:(id)a4 andPointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 andBounds:(struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; })a6 andTransitLineColor:(id)a7 andStartDistance:(double)a8 andDecoderData:(id)a9;
+ (id)_sectionOptionForTripIndex:(unsigned long long)a0 andSectionOptions:(id)a1;
+ (id)_segmentForSteps:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 andCustodian:(id)a2 andDecoderData:(id)a3 andSuggestedRoute:(id)a4 andRideSelections:(id)a5 andSectionOptions:(id)a6 andUpdateTripCount:(unsigned long long *)a7;
+ (BOOL)_shouldBreakPointSectionAtStep:(id)a0 previousStep:(id)a1;
+ (unsigned long long)_stepCountForSegmentWithStartingStepIndex:(unsigned long long)a0 andStepInfos:(id)a1;
+ (id)_stepForStepInfoAtIndex:(unsigned long long)a0 andStepInfos:(id)a1 andSteps:(id)a2 andCustodian:(id)a3 withDecoderData:(id)a4 andSuggestedRoute:(id)a5 andPointCount:(unsigned long long)a6;
+ (double)_totalDistanceForLegs:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_validPointRangeForStepInfoIndex:(unsigned long long)a0 andStepInfos:(id)a1 withPointCount:(unsigned long long)a2;
+ (id)_walkingStepForStepInfo:(id)a0 withValidPointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 andStepCount:(unsigned long long)a2 andCustodian:(id)a3 andDecoderData:(id)a4 andSuggestedRoute:(id)a5;
+ (id)buildRouteSectionsForSuggestedRoute:(id)a0 fromSteps:(id)a1 andSegments:(id)a2 andCoordinates:(id)a3 andDecoderData:(id)a4;
+ (id)optionsForRideSelections:(id)a0 forSuggestionRoute:(id)a1;
+ (id)outputForGeometry:(id)a0 andLine:(id)a1 andStops:(id)a2 andCustodian:(id)a3;
+ (id)outputForSuggestedRoute:(id)a0 withDecoderData:(id)a1 andWaypoints:(id)a2 andArrivalParameters:(id)a3 andCustodian:(id)a4;
+ (id)outputForSuggestedRoute:(id)a0 withDecoderData:(id)a1 andWaypoints:(id)a2 andArrivalParameters:(id)a3 andCustodian:(id)a4 andRideSelections:(id)a5 andSectionOptions:(id)a6;
+ (void)preprocessClusteredSuggestedRoute:(id)a0 withSectionOptions:(id)a1 andRideSelections:(id)a2 andDecoderData:(id)a3;
+ (id)selectionsForSuggestedRoute:(id)a0;

@end
