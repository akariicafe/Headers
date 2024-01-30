@class NSString, CLLocation, MapsSuggestionsCanKicker;
@protocol MapsSuggestionsLocationUpdater;

@interface MapsSuggestionsLocationChangedTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsLocationUpdaterDelegate> {
    CLLocation *_previousLocation;
    double _minDistance;
    id<MapsSuggestionsLocationUpdater> _locationUpdater;
    MapsSuggestionsCanKicker *_locationForceUpdate;
    id<MapsSuggestionsLocationUpdater> _forcingLocationUpdater;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didAddFirstObserver;
- (void)changeMinDistance:(double)a0;
- (void)startWithMinimumDistance:(double)a0;
- (void)didUpdateLocation:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocationUpdater:(id)a0 forcingLocationUpdater:(id)a1;
- (void)restartWithUpdateTime:(double)a0;
- (void)didLoseLocationPermission;
- (void)startWithMinimumUpdateTime:(double)a0 minimumDistance:(double)a1;
- (id)initWithLocationUpdater:(id)a0;
- (void)_forceLocationUpdate;
- (void)didRemoveLastObserver;
- (void)stop;

@end
