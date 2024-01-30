@class NSHashTable, NSString, NSLock, GEOAutomobileOptions, _MKQuickRouteManager, MKMapItem, GEOTransitOptions, NSTimer, CLLocation, NSNumber, GEOCyclingOptions;
@protocol MKETAProviderDelegate, _MKPlaceItem, GEOTransitLineItem;

@interface MKETAProvider : NSObject <MKLocationManagerObserver, MKQuickRouteManagerDelegate, MKQuickRouteConfigurableView, MKQuickRouteTransportTypeFinding> {
    _MKQuickRouteManager *_quickRouteManager;
    NSNumber *_lastTransportTypeFound;
    MKMapItem *_nearestStationItem;
    BOOL _distanceOrETAIsSuppressed;
    BOOL _distanceOrETAWasFound;
    NSString *_distanceTextItem;
    unsigned long long _etaTransportType;
    double _etaTravelTime;
    BOOL _active;
    BOOL _paused;
    BOOL _inactiveInBackground;
    NSTimer *_refreshTimer;
}

@property (readonly, nonatomic) id<_MKPlaceItem> placeItem;
@property (readonly, nonatomic) id<GEOTransitLineItem> lineItem;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSLock *observersLock;
@property (readonly, nonatomic) CLLocation *currentLocation;
@property (weak, nonatomic) id<MKETAProviderDelegate> delegate;
@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (retain, nonatomic) GEOTransitOptions *transitOptions;
@property (retain, nonatomic) GEOCyclingOptions *cyclingOptions;
@property (readonly, nonatomic) NSString *distanceString;
@property (readonly, nonatomic) unsigned long long etaTransportType;
@property (readonly, nonatomic) double etaTravelTime;
@property (readonly, nonatomic) NSNumber *transportTypePreferenceNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)restart;
- (void)cancel;
- (void)_commonInit;
- (void)locationManagerDidPauseLocationUpdates:(id)a0;
- (void).cxx_destruct;
- (void)locationManagerUpdatedLocation:(id)a0;
- (void)locationManagerFailedToUpdateLocation:(id)a0 withError:(id)a1;
- (void)locationManagerDidReset:(id)a0;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)a0;
- (void)removeObserver:(id)a0;
- (void)locationManager:(id)a0 didUpdateVehicleHeading:(double)a1 timestamp:(id)a2;
- (void)locationManager:(id)a0 didUpdateVehicleSpeed:(double)a1 timestamp:(id)a2;
- (void)dealloc;
- (void)_configureETAForMapItem:(id)a0;
- (void)_locationManagerApprovalDidChange:(id)a0;
- (void)_updateETAHandler:(id)a0;
- (void)_willEnterForeground;
- (id)currentMapItem;
- (void)_notifyETAAllObservers;
- (void)_updateETA;
- (BOOL)_areDistanceAndETAInformationAvailable;
- (BOOL)_shouldUpdateETAForMapView:(id)a0;
- (void)_notifyLocationAllObservers;
- (void)_updateETADisplayWithTransportType:(unsigned long long)a0 travelTime:(double)a1 distance:(double)a2;
- (void)addObserver:(id)a0;
- (void)_startTimer;
- (BOOL)quickRouteShouldOnlyUseAutomobile;
- (BOOL)quickRouteShouldIncludeTransitWhenNotPreferredTransportType;
- (void)quickRouteManager:(id)a0 didUpdateETA:(id)a1 error:(id)a2 animated:(BOOL)a3;
- (id)initWithLineItem:(id)a0;
- (void)pause;
- (void)_cancelTimer;
- (void)start;
- (void)configureWithNearestStationMapItem:(id)a0;
- (void)_didEnterBackground;
- (void)_refreshTimer;
- (void)locationManagerDidResumeLocationUpdates:(id)a0;
- (id)initWithPlaceItem:(id)a0;
- (void)findDirectionsTypeForOriginCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 destinationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 handler:(id /* block */)a2;

@end
