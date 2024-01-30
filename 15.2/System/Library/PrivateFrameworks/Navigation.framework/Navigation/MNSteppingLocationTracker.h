@class NSString, MNArrivalUpdater, GEORouteMatcher;

@interface MNSteppingLocationTracker : MNLocationTracker <MNArrivalUpdaterDelegate> {
    GEORouteMatcher *_routeMatcher;
    MNArrivalUpdater *_arrivalUpdater;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateLocation:(id)a0;
- (void)stopTracking;
- (void).cxx_destruct;
- (int)transportType;
- (void)startTracking;
- (id)_matchedLocationForLocation:(id)a0;
- (id)initWithNavigationSession:(id)a0;
- (id)matchedLocationForLocation:(id)a0;
- (void)resetForTracePlayerAtLocation:(id)a0;
- (void)arrivalUpdaterDidArrive:(id)a0 atEndOfLegAtIndex:(unsigned long long)a1;

@end
