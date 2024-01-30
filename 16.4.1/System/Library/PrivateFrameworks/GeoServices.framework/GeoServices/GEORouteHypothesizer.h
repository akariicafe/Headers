@class NSObject, GEOPlannedDestination, NSUUID, NSError, GEORouteHypothesis, geo_isolater;
@protocol OS_dispatch_source;

@interface GEORouteHypothesizer : NSObject {
    id /* block */ _updateHandler;
    NSUUID *_uuid;
    geo_isolater *_isolater;
    BOOL _wakeForDelay;
    NSObject<OS_dispatch_source> *_delayDispatchTimer;
}

@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) GEOPlannedDestination *plannedDestination;
@property (readonly, nonatomic) BOOL unableToFindRouteForOriginalTransportType;
@property (readonly, nonatomic) GEORouteHypothesis *currentHypothesis;
@property (readonly, nonatomic) NSError *currentError;
@property (readonly, nonatomic) double willBeginHypothesizingInterval;
@property (readonly, nonatomic) double willEndHypothesizingInterval;

+ (id)hypothesizerForPlannedDestination:(id)a0;
+ (void)didDismissUINotification:(unsigned long long)a0 forPlannedDestination:(id)a1 dismissalType:(unsigned long long)a2;
+ (BOOL)transitTTLSupportedInCurrentCountry;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)_delayStartingWithXpc;
- (void)_delayStartingWithoutXpc;
- (void)_performDelayedStart;
- (BOOL)_wontHypothesizeAgain;
- (void)cancelDelayDispatchTimer;
- (void)didPostUINotification:(unsigned long long)a0;
- (id)initWithPlannedDestination:(id)a0;
- (void)onlyPerformLocalUpdates;
- (void)requestRefresh;
- (void)setDoNotWakeForDelay;
- (void)startHypothesizingWithUpdateHandler:(id /* block */)a0;
- (void)stopHypothesizing;
- (BOOL)wakeForDelay;

@end
