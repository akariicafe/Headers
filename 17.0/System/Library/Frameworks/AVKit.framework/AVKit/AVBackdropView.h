@interface AVBackdropView : AVView

+ (void)applyBaseTrackTintToView:(id)a0;
+ (void)removeAllFiltersFromView:(id)a0;
+ (void)applySecondaryGlyphTintToView:(id)a0;
+ (id)secondaryMaterialOverlayView;
+ (void)applyPrimaryGlyphTintToView:(id)a0;
+ (void)applyCompletedTrackTintToView:(id)a0;
+ (void)applyGlyphTintColor:(id)a0 toView:(id)a1;
+ (id)secondaryGlyphTintColor;
+ (void)configureView:(id)a0 forTintEffectWithColor:(id)a1 filterType:(id)a2;
+ (void)configureView:(id)a0 withBackgroundFillOfColor:(id)a1 opacity:(double)a2 filter:(id)a3;
+ (void)applyLoadedTrackTintToView:(id)a0;
+ (void)configureSlider:(id)a0 thumbView:(id)a1 loadedTrackView:(id)a2 withTimelineMarkers:(id)a3;
+ (void)configureSlider:(id)a0 thumbView:(id)a1 loadedTrackView:(id)a2;

@end
