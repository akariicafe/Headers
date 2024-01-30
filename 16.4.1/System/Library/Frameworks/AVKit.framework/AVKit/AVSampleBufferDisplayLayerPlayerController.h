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

+ (id)keyPathsForValuesAffectingMaxTiming;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingTimeControlStatus;
+ (id)keyPathsForValuesAffectingPaused;
+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingPictureInPicturePossible;
+ (id)keyPathsForValuesAffectingContentDimensions;
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;
+ (id)keyPathsForValuesAffectingContentDuration;
+ (id)keyPathsForValuesAffectingRate;
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+ (id)keyPathsForValuesAffectingTiming;

- (void)setPlaying:(BOOL)a0;
- (void)invalidatePlaybackState;
- (double)rate;
- (void)pauseForAllCoordinatedPlaybackParticipants:(BOOL)a0;
- (void)_startObservation;
- (void)setPictureInPictureInterrupted:(BOOL)a0;
- (void)_updatePlaybackStateTiming;
- (double)currentTimeWithinEndTimes;
- (BOOL)isPictureInPicturePossible;
- (BOOL)hasSeekableLiveStreamingContent;
- (double)_effectiveRate;
- (id)timing;
- (id)minTiming;
- (void)seekByTimeInterval:(double)a0 toleranceBefore:(double)a1 toleranceAfter:(double)a2;
- (void)_updateStatus;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })contentDimensions;
- (BOOL)isPlaying;
- (id)maxTiming;
- (BOOL)hasLiveStreamingContent;
- (id)init;
- (void)_updateBackgroundAudioPlaybackPolicy;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_currentSBDLTime;
- (double)contentDuration;
- (void).cxx_destruct;
- (double)contentDurationWithinEndTimes;
- (void)togglePlaybackEvenWhenInBackground:(id)a0;

@end
