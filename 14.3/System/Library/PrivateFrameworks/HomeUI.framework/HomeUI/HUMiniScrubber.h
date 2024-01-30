@class UIImageView, UIView;

@interface HUMiniScrubber : UISlider

@property (weak, nonatomic) UIImageView *currentThumbView;
@property (readonly, nonatomic) UIView *loadedTrackOverlayView;

+ (void)applyPrimaryGlyphTintToView:(id)a0;
+ (void)configureSlider:(id)a0 thumbView:(id)a1 loadedTrackView:(id)a2;
+ (void)applyLoadedTrackTintToView:(id)a0;
+ (void)applyBaseTrackTintToView:(id)a0;
+ (void)configureView:(id)a0 withBackgroundFillOfColor:(id)a1 opacity:(double)a2 filter:(id)a3;
+ (void)configureView:(id)a0 forTintEffectWithColor:(id)a1 filterType:(id)a2;
+ (void)applySecondaryGlyphTintToView:(id)a0;
+ (void)applyCompletedTrackTintToView:(id)a0;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })minimumValueImageRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 value:(float)a2;
- (id)createThumbView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maximumValueImageRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
