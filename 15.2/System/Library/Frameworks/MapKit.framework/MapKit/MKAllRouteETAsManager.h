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

- (id)routeETAForTransportType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateETA;

@end
