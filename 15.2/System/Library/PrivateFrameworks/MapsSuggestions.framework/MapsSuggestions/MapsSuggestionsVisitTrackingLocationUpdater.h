@class CLVisit, NSString, CLLocation, NSObject, MapsSuggestionsObservers;
@protocol OS_dispatch_queue, MapsSuggestionsLocationUpdater;

@interface MapsSuggestionsVisitTrackingLocationUpdater : NSObject <MapsSuggestionsLocationUpdater, MapsSuggestionsLocationVisitUpdaterDelegate> {
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    id<MapsSuggestionsLocationUpdater> _wrappedLocationUpdater;
    CLLocation *_latestLocation;
    CLVisit *_currentVisit;
    MapsSuggestionsObservers *_locationObservers;
    MapsSuggestionsObservers *_visitObservers;
    double _distanceBuffer;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isDefinitelyOutsideOfVisit:(id)a0 location:(id)a1 allowingBuffer:(double)a2;

- (void)awaitQueue;
- (id)restartLocationUpdatesForDelegate:(id)a0;
- (void)didUpdateLocation:(id)a0;
- (void)stopLocationUpdatesForDelegate:(id)a0;
- (void).cxx_destruct;
- (void)didLoseLocationPermission;
- (id)startLocationUpdatesForDelegate:(id)a0;
- (void)dealloc;
- (id).cxx_construct;
- (void)didEnterVisit:(id)a0;
- (void)didLeaveVisit:(id)a0;
- (id)initDecoratingLocationUpdater:(id)a0;

@end
