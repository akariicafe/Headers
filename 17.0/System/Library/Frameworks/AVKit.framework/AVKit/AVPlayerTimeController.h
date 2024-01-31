@class NSObject, NSArray, AVValueTiming, AVObservationController, AVPlayer;
@protocol OS_dispatch_queue;

@interface AVPlayerTimeController : NSObject <AVTimeControlling> {
    NSObject<OS_dispatch_queue> *_seekQueue;
    BOOL _pendingSeek;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _toleranceBefore;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _toleranceAfter;
}

@property (retain, nonatomic) AVValueTiming *timing;
@property (retain, nonatomic) AVValueTiming *minTiming;
@property (retain, nonatomic) AVValueTiming *maxTiming;
@property (readonly, nonatomic, getter=isReadyToPlay) BOOL readyToPlay;
@property (readonly, nonatomic) AVObservationController *observationController;
@property (nonatomic, getter=isSeekingInternal) BOOL seekingInternal;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } seekToTimeInternal;
@property (retain, nonatomic) AVPlayer *player;
@property (readonly, nonatomic) double minTime;
@property (readonly, nonatomic) double maxTime;
@property (readonly, nonatomic) double contentDuration;
@property (readonly, nonatomic) double contentDurationWithinEndTimes;
@property (readonly, nonatomic) NSArray *seekableTimeRanges;
@property (readonly, getter=isCompletelySeekable) BOOL completelySeekable;
@property (readonly, nonatomic) BOOL hasSeekableLiveStreamingContent;
@property (readonly, nonatomic) BOOL canSeek;
@property (readonly, nonatomic, getter=isSeeking) BOOL seeking;
@property (readonly, nonatomic) double seekToTime;

+ (id)keyPathsForValuesAffectingContentDuration;
+ (id)keyPathsForValuesAffectingForwardPlaybackEndTime;
+ (id)keyPathsForValuesAffectingReversePlaybackEndTime;
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+ (id)keyPathsForValuesAffectingSeekableTimeRanges;
+ (id)keyPathsForValuesAffectingMaxTime;
+ (id)keyPathsForValuesAffectingReadyToPlay;

- (void)dealloc;
- (id)initForIFramesWithPlayerItem:(id)a0;
- (void)startTimingObservation;
- (void)stopTimingObservation;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })reversePlaybackEndTime;
- (void)_updateMinAndMaxTiming;
- (id)initWithPlayer:(id)a0;
- (void)_updateTiming;
- (void).cxx_destruct;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })forwardPlaybackEndTime;
- (void)seekToTime:(double)a0 toleranceBefore:(double)a1 toleranceAfter:(double)a2;
- (void)_commonInit;

@end
