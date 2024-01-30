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

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_update;
- (void)pause;
- (void)resume;
- (void)_timerUpdated:(id)a0;
- (void)addTimelineStream:(id)a0;
- (void)removeTimelineStream:(id)a0;
- (void)removeAllTimelineStreams;

@end
