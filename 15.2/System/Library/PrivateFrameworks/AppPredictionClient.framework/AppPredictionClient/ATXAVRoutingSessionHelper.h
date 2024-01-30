@class ATXAVRouteInfo, AVRoutingSessionManager;

@interface ATXAVRoutingSessionHelper : NSObject {
    float _threshold;
    AVRoutingSessionManager *_avRoutingSessionManager;
    ATXAVRouteInfo *_internalPredictedRouteInfo;
}

@property (readonly, nonatomic) float acceptThreshod;
@property (readonly, nonatomic) ATXAVRouteInfo *predictedRouteInfo;

- (id)_filterTopRouteFromRoutes:(id)a0 withAcceptThreshold:(float)a1;
- (id)_predictedRouteWithAcceptThreshold:(float)a0;
- (id)_predictedRouteInfoWithAcceptThreshold:(float)a0 prefersLikelyDestinationsOverCurrentRoutingSession:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (id)_atxAVRouteInfoWithRoute:(id)a0;
- (id)initWithAcceptThreshold:(float)a0 avRoutingSessionManager:(id)a1;
- (id)_selectedOrPendingRoute;

@end
