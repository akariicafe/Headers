@class GEOMapRegion, NSDate, GEOCommonOptions, GEOComposedRoute, GEODirectionsRequest, GEORouteAttributes, GEOComposedWaypoint, NSMutableArray, GEORouteMatch, GEOLocation, GEODirectionsRequestFeedback;
@protocol GEORouteHypothesizerUpdaterDelegate;

@interface GEORouteHypothesizerUpdater : NSObject <NSSecureCoding> {
    GEOComposedWaypoint *_source;
    GEOComposedWaypoint *_destination;
    GEODirectionsRequest *_currentRequest;
    GEOCommonOptions *_commonOptions;
    GEOLocation *_originLocation;
    GEOLocation *_lastMatchedLocation;
    GEOMapRegion *_arrivalMapRegion;
    NSMutableArray *_rerouteEntries;
    BOOL _shouldThrottleReroutes;
    NSDate *_lastRerouteDate;
    unsigned long long _numThrottledReroutes;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _requestLock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) id<GEORouteHypothesizerUpdaterDelegate> delegate;
@property (retain, nonatomic) GEODirectionsRequestFeedback *feedback;
@property (readonly, nonatomic) GEORouteAttributes *routeAttributes;
@property (readonly, nonatomic) GEOComposedRoute *route;
@property (readonly, nonatomic) GEORouteMatch *routeMatch;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) BOOL isTraveling;
@property (readonly, nonatomic) BOOL hasArrived;
@property (nonatomic) BOOL isNavd;

- (int)_transportType;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_checkForArrival:(id)a0 routeMatch:(id)a1;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)cancelCurrentRequest;
- (void)updateForLocation:(id)a0;
- (id)routeMatchForLocation:(id)a0;
- (void)_requestNewRouteFromLocation:(id)a0 usualRouteData:(id)a1;
- (void)_updateScoreForLocation:(id)a0;
- (id)initWithSource:(id)a0 destination:(id)a1 routeAttributes:(id)a2;
- (void)startUpdatingFromLocation:(id)a0 usualRouteData:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
