@class NSString, GEORouteHypothesizer, EKTravelEngineHypothesis, CADRouteHypothesis;

@interface CALNGEORouteHypothesizer : NSObject <CALNRouteHypothesizer>

@property (readonly, nonatomic) GEORouteHypothesizer *routeHypothesizer;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) EKTravelEngineHypothesis *currentHypothesis;
@property (readonly, nonatomic) id /* block */ updateHandler;
@property (retain, nonatomic) CADRouteHypothesis *currentCADRouteHypothesis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)requestRefresh;
- (void)stopHypothesizing;
- (void)startHypothesizingWithUpdateHandler:(id /* block */)a0;
- (void)didPostUINotification:(unsigned long long)a0;
- (id)initWithRouteHypothesizer:(id)a0;

@end
