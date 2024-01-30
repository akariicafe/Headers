@class GEORoadMatcher, NSDate, GEOTransitRouteMatcher, MNLocation;

@interface MNTransitLocationTracker : MNSteppingLocationTracker {
    GEOTransitRouteMatcher *_transitRouteMatcher;
    GEORoadMatcher *_roadMatcher;
    NSDate *_lastLocationTimestamp;
    NSDate *_lastAccurateLocationDate;
    MNLocation *_lastMatchedLocation;
    NSDate *_startDate;
    BOOL _hasArrived;
}

@property (nonatomic) BOOL debugSnapToTransitLines;

- (void).cxx_destruct;
- (int)transportType;
- (void)stopTracking;
- (void)startTracking;
- (id)_matchedLocationForLocation:(id)a0;
- (id)initWithNavigationSession:(id)a0;
- (BOOL)_isInaccurateLocation:(id)a0;
- (id)_locationForInaccurateLocation:(id)a0;
- (double)_timeToDisplayStaleGPSLocation;
- (id)_correctedLocationForLocation:(id)a0;
- (id)_roadMatchForOffRouteLocation:(id)a0 routeMatch:(id)a1;

@end
