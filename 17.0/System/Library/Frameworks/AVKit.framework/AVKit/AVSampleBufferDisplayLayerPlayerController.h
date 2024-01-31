@class AVPictureInPicturePlaybackState, AVPictureInPictureController, AVSampleBufferDisplayLayerPlaybackDelegateAdapter, AVValueTiming, AVObservationController;
@protocol AVPictureInPictureSampleBufferPlaybackDelegate;

@interface AVSampleBufferDisplayLayerPlayerController : AVPlayerController {
    AVValueTiming *_timing;
}

@property (copy, nonatomic) AVPictureInPicturePlaybackState *playbackState;
@property (retain, nonatomic) AVObservationController *sbdlObservationController;
@property (nonatomic, getter=isPictureInPictureAvailable) BOOL pictureInPictureAvailable;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } contentTimeRange;
@property (nonatomic) long long status;
@property (nonatomic) long long timeControlStatus;
@property (retain, nonatomic) AVSampleBufferDisplayLayerPlaybackDelegateAdapter *playbackDelegateAdapter;
@property (weak, nonatomic) AVPictureInPictureController *pictureInPictureController;
@property (weak, nonatomic) id<AVPictureInPictureSampleBufferPlaybackDelegate> playbackDelegate;
@property (nonatomic) struct CGSize { double width; double height; } enqueuedBufferDimensions;

+ (id)keyPathsForValuesAffectingRate;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingPictureInPicturePossible;
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;
+ (id)keyPathsForValuesAffectingContentDimensions;
+ (id)keyPathsForValuesAffectingTiming;
+ (id)keyPathsForValuesAffectingTimeControlStatus;
+ (id)keyPathsForValuesAffectingContentDuration;
+ (id)keyPathsForValuesAffectingMaxTiming;
+ (id)keyPathsForValuesAffectingPaused;
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+ (id)keyPathsForValuesAffectingPlaying;

- (id)timing;
- (id)init;
- (void)dealloc;
- (void)setPlaying:(BOOL)a0;
- (struct CGSize { double x0; double x1; })contentDimensions;
- (void)seekByTimeInterval:(double)a0 toleranceBefore:(double)a1 toleranceAfter:(double)a2;
- (id)minTiming;
- (void)_updateStatus;
- (double)contentDuration;
- (BOOL)hasLiveStreamingContent;
- (void)setPictureInPictureInterrupted:(BOOL)a0;
- (double)_effectiveRate;
- (id)maxTiming;
- (void)_startObservation;
- (void)_updatePlaybackStateTiming;
- (double)currentTimeWithinEndTimes;
- (double)contentDurationWithinEndTimes;
- (void).cxx_destruct;
- (BOOL)isPictureInPicturePossible;
- (void)pauseForAllCoordinatedPlaybackParticipants:(BOOL)a0;
- (BOOL)isPlaying;
- (void)togglePlaybackEvenWhenInBackground:(id)a0;
- (BOOL)hasSeekableLiveStreamingContent;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_currentSBDLTime;
- (void)_updateBackgroundAudioPlaybackPolicy;
- (void)invalidatePlaybackState;
- (double)rate;

@end
