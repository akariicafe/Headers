@class _MKRouteETAFetcher, GEOAutomobileOptions, GEOCyclingOptions, GEOTransitOptions, MKMapItem;
@protocol MKAllRouteETAsManagerDelegate;

@interface MKAllRouteETAsManager : NSObject {
    _MKRouteETAFetcher *_etaFetcher;
}

@property (weak, nonatomic) id<MKAllRouteETAsManagerDelegate> delegate;
@property (copy, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (copy, nonatomic) GEOTransitOptions *transitOptions;
@property (copy, nonatomic) GEOCyclingOptions *cyclingOptions;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (retain, nonatomic) MKMapItem *originMapItem;

- (id)init;
- (void).cxx_destruct;
- (void)updateETA;
- (id)routeETAForTransportType:(unsigned long long)a0;

@end
