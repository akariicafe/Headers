@class UITapGestureRecognizer, NTKDigitialUtilitarianFaceViewComplicationFactory;

@interface NTKVideoFaceView : NTKAVListingFaceBaseView {
    NTKDigitialUtilitarianFaceViewComplicationFactory *_faceViewComplicationFactory;
    unsigned long long _theme;
    UITapGestureRecognizer *_tapToPlayGesture;
    unsigned char _isUsingDefaultListing : 1;
    unsigned char _isComplicationColorApplied : 1;
    unsigned char _isComplicationColorGray : 1;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)_posterImageView;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (id)_swatchImageForEditOption:(id)a0 mode:(long long)a1 withSelectedOptions:(id)a2;
- (void)_applyOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (id)_keylineViewForCustomEditMode:(long long)a0 slot:(id)a1;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)a0;
- (void)_configureComplicationView:(id)a0 forSlot:(id)a1;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (id)_detachedComplicationDisplays;
- (id)_newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (void)_loadLayoutRules;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)a0;
- (long long)_complicationPickerStyleForSlot:(id)a0;
- (double)_keylineCornerRadiusForComplicationSlot:(id)a0;
- (double)keylineStyleForComplicationSlot:(id)a0;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)a0 slot:(id)a1;
- (id)_nextListing;
- (void)_performPreloadVideoTask;
- (void)_updatePaused;
- (id)_onDeckPosterImageView;
- (void)_selectDefaultListing;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_keylineFrameForComplicationSlot:(id)a0 selected:(BOOL)a1;
- (BOOL)_fadesComplicationSlot:(id)a0 inEditMode:(long long)a1;
- (id)_complicationForegroundColor;
- (double)_timeTravelYAdjustment;
- (void)_handleTapToPlayVideoGesture:(id)a0;
- (id)_posterImageViewWithTheme:(unsigned long long)a0;
- (id)_defaultListing;
- (BOOL)_shouldDelayBeforePlayingNextVideo;
- (double)_minimumBreathingScaleForComplicationSlot:(id)a0;
- (id)_viewForEditOption:(id)a0;
- (double)_rightSideMarginForDigitalTimeHeroPosition;
- (void)videoPlayerViewDidBeginPlaying:(id)a0;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)a0;

@end
