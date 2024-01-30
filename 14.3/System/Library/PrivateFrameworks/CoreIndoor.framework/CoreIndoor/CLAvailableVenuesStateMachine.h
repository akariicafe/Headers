@class GeographicCoordinate, NSSet, CLIndoorAvailabilityTileParams;

@interface CLAvailableVenuesStateMachine : NSObject

@property (readonly) GeographicCoordinate *lastFix;
@property double maxLoadRadius;
@property (retain) NSSet *disabledVenues;
@property (readonly) CLIndoorAvailabilityTileParams *availabilityTileParams;

+ (double)deg2rad:(double)a0;
+ (long long)getLocationContextFromVenueBounds:(const struct VenueBounds { void /* function */ **x0; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x0; int x1; int x2; int x3; } x1; struct RepeatedPtrField<proto::availability::LatLonPolygon> { void **x0; int x1; int x2; int x3; } x2; struct TileDownloadConfiguration *x3; struct LatLonPolygon *x4; struct RepeatedField<unsigned int> { unsigned int *x0; int x1; int x2; } x5; int x6; int x7; unsigned int x8[1]; } *)a0;
+ (double)distBetweenLatLon:(id)a0 latlon1:(id)a1;
+ (double)metersFromGreatCircleDistance:(double)a0;

- (id)getNearbyLocationGroupsForTile:(id)a0 withUpdatedPos:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)computeAvailableVenues:(id)a0 nearCoordinates:(id)a1 withError:(BOOL *)a2;
- (BOOL)isVenueDisabled:(id)a0 locationId:(id)a1;
- (id)computeAvailableVenues:(id)a0 nearCoordinates:(id)a1;
- (id)getNearbyLocationGroupsForTile:(id)a0 withUpdatedPos:(id)a1 nearLocationsOfInterest:(id)a2;
- (void)clearLastFix;
- (id)recomputeIfNecessary:(id)a0 withGlobalAvailabilityTile:(id)a1 andAdditionalLOIs:(id)a2;
- (BOOL)shouldRecompute:(id)a0;
- (id)getNearbyLocationGroups:(id)a0 withUpdatedPos:(id)a1 nearLocationsOfInterest:(id)a2;
- (id)getNearbyLocationGroups:(id)a0 withUpdatedPos:(id)a1;
- (id)openTileParserAtPath:(id)a0;

@end
