@class NSString, CLLocation, MapsSuggestionsCanKicker;
@protocol MapsSuggestionsLocationUpdater;

@interface MapsSuggestionsLocationChangedTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsLocationUpdaterDelegate> {
    CLLocation *_previousLocation;
    double _minDistance;
    id<MapsSuggestionsLocationUpdater> _locationUpdater;
    MapsSuggestionsCanKicker *_locationForceUpdate;
    double _locationForceUpdateTime;
    id<MapsSuggestionsLocationUpdater> _forcingLocationUpdater;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didAddFirstObserver;
- (void)stop;
- (void)didRemoveLastObserver;
- (void)didUpdateLocation:(id)a0;
- (void).cxx_destruct;
- (void)didLoseLocationPermission;
- (void)_forceLocationUpdate;
- (void)changeMinDistance:(double)a0;
- (id)initWithLocationUpdater:(id)a0;
- (id)initWithLocationUpdater:(id)a0 forcingLocationUpdater:(id)a1;
- (void)restartWithUpdateTime:(double)a0;
- (void)startWithMinimumDistance:(double)a0;
- (void)startWithMinimumUpdateTime:(double)a0 minimumDistance:(double)a1;

@end
