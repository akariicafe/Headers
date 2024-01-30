@class GEOComposedRouteStep;

@interface _GEORouteMatchUpdater_FerryProgression : _GEORouteMatchUpdater {
    GEOComposedRouteStep *_boardStep;
    GEOComposedRouteStep *_alightStep;
    struct { double latitude; double longitude; } _alightLocationCoordinate;
    double _startProgressionDistanceToDestination;
    unsigned long long _progressionCount;
}

- (void).cxx_destruct;
- (unsigned long long)priority;
- (id)initWithRoute:(id)a0 tripSegment:(id)a1;
- (BOOL)updateRouteMatch:(id)a0 previousRouteMatch:(id)a1 forLocation:(id)a2;

@end
