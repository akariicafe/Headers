@class NSArray, AVValueTiming, AVObservationController, AVPlayer;

@interface AVPlayerTimeController : NSObject <AVTimeControlling>

@property (retain, nonatomic) AVValueTiming *timing;
@property (retain, nonatomic) AVValueTiming *minTiming;
@property (retain, nonatomic) AVValueTiming *maxTiming;
@property (readonly, nonatomic, getter=isReadyToPlay) BOOL readyToPlay;
@property (readonly, nonatomic) AVObservationController *observationController;
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

+ (id)keyPathsForValuesAffectingReadyToPlay;
+ (id)keyPathsForValuesAffectingForwardPlaybackEndTime;
+ (id)keyPathsForValuesAffectingMaxTime;
+ (id)keyPathsForValuesAffectingContentDuration;
+ (id)keyPathsForValuesAffectingReversePlaybackEndTime;
+ (id)keyPathsForValuesAffectingSeekableTimeRanges;
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;

- (void)seekToTime:(double)a0 toleranceBefore:(double)a1 toleranceAfter:(double)a2;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })reversePlaybackEndTime;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })forwardPlaybackEndTime;
- (void)stopTimingObservation;
- (id)initWithPlayer:(id)a0;
- (void)startTimingObservation;
- (void)dealloc;
- (void)_updateTiming;
- (void)_updateMinAndMaxTiming;
- (void).cxx_destruct;

@end
