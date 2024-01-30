@class GEOAutomobileOptions, NSMutableDictionary, GEOCyclingOptions, MKDirections, GEOTransitOptions, MKMapItem;

@interface _MKRouteETAFetcher : NSObject {
    struct CLLocationCoordinate2D { double latitude; double longitude; } _lastUpdatedETAOriginCoordinate;
    double _lastUpdatedETATime;
    double _lastRequestTime;
    MKDirections *_inProgressETAUpdate;
    BOOL _lastETAUpdateHadError;
    double _staleDistance;
    double _staleTimeInterval;
    BOOL _optionsHaveChangedSinceLastUpdate;
}

@property (copy, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (copy, nonatomic) GEOTransitOptions *transitOptions;
@property (copy, nonatomic) GEOCyclingOptions *cyclingOptions;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (retain, nonatomic) MKMapItem *originMapItem;
@property (readonly, nonatomic) NSMutableDictionary *etaResults;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } originCoordinate;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } destinationCoordinate;

- (void)_resetState;
- (BOOL)isValidETA:(id)a0;
- (void)invalidateETAForTransportType:(unsigned long long)a0;
- (BOOL)isUsingCurrentLocationForOrigin;
- (void)requestNewETAForTransportType:(unsigned long long)a0 additionalTransportTypes:(id)a1 completion:(id /* block */)a2;
- (BOOL)shouldUpdateEstimatedTravelTimeForNewOrigin:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)expireETAsIfNoLongerValid;
- (void)_didUpdateETAResult;
- (id)routeETAForTransportType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
