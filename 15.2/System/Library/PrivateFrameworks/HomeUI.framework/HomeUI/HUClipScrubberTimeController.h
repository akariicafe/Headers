@interface HUClipScrubberTimeController : NSObject

@property (nonatomic) double minimumPosterFrameDuration;
@property (nonatomic) double maximumPosterFrameDuration;
@property (nonatomic) double timeScale;
@property (readonly, nonatomic) double maximumGestureScale;
@property (nonatomic) BOOL portraitMode;
@property (nonatomic) BOOL userControlled;

- (id)init;
- (void)dealloc;
- (double)posterFrameWidthForEvent:(id)a0;
- (void)reloadEvents:(id)a0;
- (double)clampGestureScale:(double)a0;
- (double)updateTimeScaleForGestureScale:(double)a0;
- (void)expandTimelineToMaximumZoom;
- (void)shrinkTimelineToMinimumZoom;
- (BOOL)isAtMinimumZoom;
- (double)timelineWidthForEvent:(id)a0;
- (double)_numberOfPosterFrameUnitsForEvent:(id)a0 timeScale:(double)a1;
- (void)updateTimeScaleIfNeeded;
- (double)numberOfPosterFrameUnitsForEvent:(id)a0;
- (double)posterFrameWidthFromCameraLiveSource;

@end
