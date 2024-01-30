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

- (void)pause;
- (void)_update;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)_timerUpdated:(id)a0;
- (void)addTimelineStream:(id)a0;
- (void)removeAllTimelineStreams;
- (void)removeTimelineStream:(id)a0;

@end
