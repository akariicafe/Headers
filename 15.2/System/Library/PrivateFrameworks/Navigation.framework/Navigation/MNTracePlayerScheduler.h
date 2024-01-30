@class NSTimer, NSMutableArray, MNTracePlayerTimelineStream;
@protocol MNTracePlayerSchedulerDelegate;

@interface MNTracePlayerScheduler : NSObject {
    NSTimer *_timer;
    double _lastTimerScheduleTime;
    NSMutableArray *_timelineStreams;
    MNTracePlayerTimelineStream *_nextTimelineStream;
}

@property (weak, nonatomic) id<MNTracePlayerSchedulerDelegate> delegate;
@property (nonatomic) double speedMultiplier;
@property (nonatomic) double position;

- (void).cxx_destruct;
- (id)init;
- (void)pause;
- (void)_update;
- (void)resume;
- (void)dealloc;
- (void)_timerUpdated:(id)a0;
- (void)addTimelineStream:(id)a0;
- (void)removeTimelineStream:(id)a0;
- (void)removeAllTimelineStreams;

@end
