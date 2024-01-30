@class AVObservationController, AVPictureInPicturePlaybackState, AVPictureInPictureController;
@protocol AVPictureInPictureSampleBufferPlaybackDelegate;

@interface AVSampleBufferDisplayLayerPlayerController : AVPlayerController

@property (copy, nonatomic) AVPictureInPicturePlaybackState *playbackState;
@property (retain, nonatomic) AVObservationController *sbdlObservationController;
@property (nonatomic, getter=isPictureInPictureAvailable) BOOL pictureInPictureAvailable;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } contentTimeRange;
@property (nonatomic) long long status;
@property (nonatomic) long long timeControlStatus;
@property (weak, nonatomic) AVPictureInPictureController *pictureInPictureController;
@property (weak, nonatomic) id<AVPictureInPictureSampleBufferPlaybackDelegate> playbackDelegate;
@property (nonatomic) struct CGSize { double width; double height; } enqueuedBufferDimensions;

+ (id)keyPathsForValuesAffectingRate;
+ (id)keyPathsForValuesAffectingPictureInPicturePossible;
+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingContentDuration;
+ (id)keyPathsForValuesAffectingContentDimensions;
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;

- (double)rate;
- (BOOL)isPlaying;
- (void).cxx_destruct;
- (double)_effectiveRate;
- (void)dealloc;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_currentSBDLTime;
- (BOOL)isPictureInPicturePossible;
- (void)_updateStatus;
- (void)setPlaying:(BOOL)a0;
- (struct CGSize { double x0; double x1; })contentDimensions;
- (double)contentDurationWithinEndTimes;
- (double)contentDuration;
- (void)_startObservation;
- (void)seekByTimeInterval:(double)a0 toleranceBefore:(double)a1 toleranceAfter:(double)a2;
- (void)togglePlaybackEvenWhenInBackground:(id)a0;
- (void)invalidatePlaybackState;
- (double)currentTimeWithinEndTimes;
- (void)setPictureInPictureInterrupted:(BOOL)a0;

@end
