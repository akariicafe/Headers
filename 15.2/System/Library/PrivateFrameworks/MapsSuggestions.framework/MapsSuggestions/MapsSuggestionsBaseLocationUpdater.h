@class NSString, MapsSuggestionsObservers, NSObject;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsBaseLocationUpdater : NSObject <MapsSuggestionsLocationUpdater> {
    NSString *_name;
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    MapsSuggestionsObservers *_locationObservers;
    MapsSuggestionsObservers *_visitObservers;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)countLocationObservers;
- (void)considerMyNewVisit:(id)a0;
- (void)awaitQueue;
- (BOOL)hasObservers;
- (id)restartLocationUpdatesForDelegate:(id)a0;
- (id)initWithName:(id)a0 queue:(id)a1;
- (void)considerMyAllowanceAsLimited:(BOOL)a0;
- (void)stopLocationUpdatesForDelegate:(id)a0;
- (void).cxx_destruct;
- (id)startLocationUpdatesForDelegate:(id)a0;
- (void)considerMyNewLocation:(id)a0;
- (void)dealloc;
- (id).cxx_construct;
- (void)onStartImplementation;
- (void)onStopImplementation;
- (id)dispatchQueue;

@end
