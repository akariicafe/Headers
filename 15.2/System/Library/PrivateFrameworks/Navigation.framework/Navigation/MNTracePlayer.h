@class NSHashTable, NSString, MNTracePlayerTimelineStream, MNTrace, MNLocation, MNTracePlayerETAUpdater, MNTracePlayerScheduler, MNSessionUpdateManager;

@interface MNTracePlayer : NSObject <MNTracePlayerSchedulerDelegate, MNTimeProvider> {
    double _traceStartTimestamp;
    NSHashTable *_observers;
    MNTracePlayerScheduler *_scheduler;
    MNTracePlayerTimelineStream *_locationStream;
    MNLocation *_lastReportedLocation;
    MNTracePlayerTimelineStream *_directionsStream;
    MNTracePlayerETAUpdater *_etaUpdater;
    MNTracePlayerTimelineStream *_etaUpdatesStream;
}

@property (readonly, nonatomic) MNTrace *trace;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) BOOL isPaused;
@property (readonly, nonatomic) double position;
@property (readonly, nonatomic) double duration;
@property (nonatomic) double speedMultiplier;
@property (nonatomic) BOOL shouldPlayETARequests;
@property (readonly, nonatomic) MNSessionUpdateManager *sessionUpdater;
@property (nonatomic) BOOL forceDirectionsResponsesFromTrace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double currentTime;

- (id)initWithPath:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (void)pause;
- (void)resume;
- (void)dealloc;
- (void)stop;
- (void)startAtLocationIndex:(unsigned long long)a0;
- (BOOL)requestDirectionsNearTimestamp:(double)a0 withHandler:(id /* block */)a1 errorHandler:(id /* block */)a2;
- (void)tracePlayerScheduler:(id)a0 didUpdatePosition:(double)a1;
- (id)initWithTrace:(id)a0;
- (id)initWithPath:(id)a0 outError:(id *)a1;
- (void)_createTimelineStreams;
- (id)_locationWithCurrentDate:(id)a0;
- (double)_responseTimeForRequestAtIndex:(unsigned long long)a0;
- (void)jumpToTime:(double)a0;
- (BOOL)requestDirectionsWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)jumpToLocationAtIndex:(unsigned long long)a0;
- (void)skipByTimeInterval:(double)a0;
- (void)jumpToBookmarkAtIndex:(unsigned long long)a0;

@end
