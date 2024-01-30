@class AVPictureInPicturePlaybackState, AVPictureInPictureController, AVSampleBufferDisplayLayerPlaybackDelegateAdapter, AVObservationController;
@protocol AVPictureInPictureSampleBufferPlaybackDelegate;

@interface AVSampleBufferDisplayLayerPlayerController : AVPlayerController

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

+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;
+ (id)keyPathsForValuesAffectingPictureInPicturePossible;
+ (id)keyPathsForValuesAffectingContentDuration;
+ (id)keyPathsForValuesAffectingContentDimensions;
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+ (id)keyPathsForValuesAffectingRate;

- (double)rate;
- (BOOL)isPlaying;
- (void).cxx_destruct;
- (id)init;
- (void)seekByTimeInterval:(double)a0 toleranceBefore:(double)a1 toleranceAfter:(double)a2;
- (BOOL)hasSeekableLiveStreamingContent;
- (BOOL)hasLiveStreamingContent;
- (void)togglePlaybackEvenWhenInBackground:(id)a0;
- (double)currentTimeWithinEndTimes;
- (BOOL)isPictureInPicturePossible;
- (void)setPictureInPictureInterrupted:(BOOL)a0;
- (void)dealloc;
- (void)_updateStatus;
- (struct CGSize { double x0; double x1; })contentDimensions;
- (double)contentDuration;
- (double)contentDurationWithinEndTimes;
- (void)setPlaying:(BOOL)a0;
- (void)_startObservation;
- (void)invalidatePlaybackState;
- (void)pauseForAllCoordinatedPlaybackParticipants:(BOOL)a0;
- (double)_effectiveRate;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_currentSBDLTime;
- (void)_updateBackgroundAudioPlaybackPolicy;

@end
