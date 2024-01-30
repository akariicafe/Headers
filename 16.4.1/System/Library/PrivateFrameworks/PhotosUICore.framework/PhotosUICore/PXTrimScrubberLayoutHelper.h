@interface PXTrimScrubberLayoutHelper : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } filmstripFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } filmstripFrameInScrubberSpace;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleFrameInFilmstripSpace;
@property (nonatomic) BOOL needsUpdate;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } durationInsetFilmstripFrame;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewportFrame;
@property (nonatomic) double filmstripScale;
@property (nonatomic) double pivotAnchor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } horizontalTimelineInset;

- (void)_updateIfNeeded;
- (id)init;
- (double)offsetInScrubberSpaceForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (double)offsetInScrubberSpaceForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 fallbackAnchor:(double)a1;
- (double)offsetInViewportSpaceForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (double)offsetInViewportSpaceForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 fallbackAnchor:(double)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timeForOffsetInScrubberSpace:(double)a0;

@end
