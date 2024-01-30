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

+ (void)didDismissUINotification:(unsigned long long)a0 forPlannedDestination:(id)a1 dismissalType:(unsigned long long)a2;
+ (BOOL)transitTTLSupportedInCurrentCountry;
+ (id)hypothesizerForPlannedDestination:(id)a0;

- (void)cancelDelayDispatchTimer;
- (BOOL)_wontHypothesizeAgain;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startHypothesizingWithUpdateHandler:(id /* block */)a0;
- (BOOL)wakeForDelay;
- (void)stopHypothesizing;
- (id)description;
- (void)requestRefresh;
- (void)setDoNotWakeForDelay;
- (id)initWithPlannedDestination:(id)a0;
- (void)_delayStartingWithoutXpc;
- (void)onlyPerformLocalUpdates;
- (void)didPostUINotification:(unsigned long long)a0;
- (void)_delayStartingWithXpc;
- (void)_performDelayedStart;

@end
