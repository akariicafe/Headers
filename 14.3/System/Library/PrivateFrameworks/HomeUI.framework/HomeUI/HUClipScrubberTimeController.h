@interface HUClipScrubberTimeController : NSObject

@property (nonatomic) double minimumDuration;
@property (nonatomic) double maximumDuration;
@property (nonatomic) double timeScale;
@property (readonly, nonatomic) double maximumGestureScale;
@property (nonatomic) BOOL portraitMode;
@property (nonatomic) BOOL userControlled;

- (id)init;
- (double)posterFrameWidthForEvent:(id)a0;
- (void)reloadEvents:(id)a0;
- (double)timeScaleForGestureScale:(double)a0;
- (double)timeScaleForGestureScale:(double)a0 maxDuration:(double)a1;
- (BOOL)isAtMinimumZoom;
- (void)expandTimelineToMaximumZoom;
- (void)shrinkTimelineToMinimumZoom;
- (double)timelineWidthForEvent:(id)a0;
- (void)updateTimeScaleIfNeeded;
- (double)posterFrameWidthFromCameraLiveSource;

@end
