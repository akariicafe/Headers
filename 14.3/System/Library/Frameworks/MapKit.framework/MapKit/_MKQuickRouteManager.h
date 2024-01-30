@class NSError, _MKRouteETA, MKMapItem, GEOAutomobileOptions, _MKRouteETAFetcher, GEOTransitOptions, NSObject, GEOCyclingOptions;
@protocol MKQuickRouteManagerDelegate, MKQuickRouteTransportTypeFinding, MKQuickRouteConfigurableView;

@interface _MKQuickRouteManager : NSObject {
    _MKRouteETAFetcher *_etaFetcher;
    double _maxDistanceToRequestETA;
    _MKRouteETA *_lastETA;
    unsigned long long _lastPreferredDirectionsType;
    NSError *_lastError;
    double _closeWalkTravelTime;
    double _maxWalkingDistance;
    BOOL _viewHasChangedSinceLastUpdate;
}

@property (readonly, nonatomic) BOOL isOnlyDriving;
@property (weak, nonatomic) id<MKQuickRouteManagerDelegate> delegate;
@property (weak, nonatomic) id<MKQuickRouteTransportTypeFinding> transportTypeFinder;
@property (weak, nonatomic) NSObject<MKQuickRouteConfigurableView> *view;
@property (copy, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (copy, nonatomic) GEOTransitOptions *transitOptions;
@property (copy, nonatomic) GEOCyclingOptions *cyclingOptions;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (retain, nonatomic) MKMapItem *originMapItem;
@property (readonly, nonatomic, getter=isUsingCurrentLocationForOrigin) BOOL usingCurrentLocationForOrigin;
@property (nonatomic) BOOL fetchAllTransportTypes;

+ (unsigned long long)counterpartForTransportType:(unsigned long long)a0;
+ (unsigned long long)directionsTypeForMapItem:(id)a0 delegate:(id)a1 mapType:(unsigned long long)a2;
+ (BOOL)isLikelyToReturnETAForLocation:(id)a0;
+ (double)_maxDistanceToRequestETA;

- (void)_resetState;
- (unsigned long long)directionsTypeForOriginCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 destinationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 preferredDirectionsType:(unsigned long long)a2;
- (unsigned long long)directionsTypeForMapType:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)updateETA;
- (id)routeETAForTransportType:(unsigned long long)a0;
- (id)description;
- (struct CLLocationCoordinate2D { double x0; double x1; })originCoordinate;
- (struct CLLocationCoordinate2D { double x0; double x1; })destinationCoordinate;
- (BOOL)haveETAsForPreferredTransportType:(unsigned long long)a0;
- (id)bestETAForPreferredDirectionsType:(unsigned long long)a0;
- (BOOL)_transportTypeShouldBeSmart;
- (unsigned long long)guessTransportTypeForDistance:(double)a0 preferredDirectionsType:(unsigned long long)a1;
- (void)requestNewETAForPreferredTransportType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_performWithTransportType:(id /* block */)a0;

@end
