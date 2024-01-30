@class GeographicCoordinate, NSSet, CLIndoorAvailabilityTileParams;

@interface CLAvailableVenuesStateMachine : NSObject

@property (readonly) GeographicCoordinate *lastFix;
@property double maxLoadRadius;
@property (retain) NSSet *disabledVenues;
@property (readonly) CLIndoorAvailabilityTileParams *availabilityTileParams;

+ (long long)getLocationContextFromVenueBounds:(const void *)a0;
+ (double)deg2rad:(double)a0;
+ (double)metersFromGreatCircleDistance:(double)a0;
+ (double)distBetweenLatLon:(id)a0 latlon1:(id)a1;

- (id)getNearbyLocationGroups:(id)a0 withUpdatedPos:(id)a1;
- (id)getNearbyLocationGroups:(id)a0 withUpdatedPos:(id)a1 nearLocationsOfInterest:(id)a2;
- (void)clearLastFix;
- (id)getNearbyLocationGroupsForTile:(id)a0 withUpdatedPos:(id)a1;
- (id)computeAvailableVenues:(id)a0 nearCoordinates:(id)a1;
- (BOOL)isVenueDisabled:(id)a0 locationId:(id)a1;
- (id)recomputeIfNecessary:(id)a0 withGlobalAvailabilityTile:(id)a1 andAdditionalLOIs:(id)a2;
- (void).cxx_destruct;
- (BOOL)shouldRecompute:(id)a0;
- (id)computeAvailableVenues:(id)a0 nearCoordinates:(id)a1 withError:(BOOL *)a2;
- (id)init;
- (id)openTileParserAtPath:(id)a0;
- (id)getNearbyLocationGroupsForTile:(id)a0 withUpdatedPos:(id)a1 nearLocationsOfInterest:(id)a2;

@end
