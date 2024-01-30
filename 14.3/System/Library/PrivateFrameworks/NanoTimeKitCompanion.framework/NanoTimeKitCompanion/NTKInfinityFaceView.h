@class UIColor, NTKInfinityController, NTKInfinityListing, NTKFaceViewComplicationFactory, UILabel, UIView;

@interface NTKInfinityFaceView : NTKAVListingFaceBaseView {
    unsigned char _tapPromptedVideoChange : 1;
    UIView *_cornerView;
    UILabel *_reviewLabel;
    long long _previousDataMode;
    NTKFaceViewComplicationFactory *_faceViewComplicationFactory;
    NTKInfinityController *_controller;
    NTKInfinityListing *_currentQueueListing;
    UIColor *_currentComplicationColor;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didAddSubview:(id)a0;
- (void)layoutSubviews;
- (id)videoPlayerView;
- (void)_handleSingleTap:(id)a0;
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
- (id)_newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (void)_loadLayoutRules;
- (BOOL)_supportsTimeScrubbing;
- (void)_applyDataMode;
- (void)_handleWristRaiseScreenWake;
- (void)_handleOrdinaryScreenWake;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)a0;
- (void)_layoutForegroundContainerView;
- (long long)_complicationPickerStyleForSlot:(id)a0;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)a0 slot:(id)a1;
- (id)_nextListing;
- (void)_performPreloadVideoTask;
- (void)_updatePaused;
- (id)_onDeckPosterImageView;
- (void)_selectDefaultListing;
- (BOOL)_fadesComplicationSlot:(id)a0 inEditMode:(long long)a1;
- (void)handleScreenBlanked;
- (id)_viewForEditOption:(id)a0;
- (double)_rightSideMarginForDigitalTimeHeroPosition;
- (void)videoPlayerViewDidBeginPlaying:(id)a0;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)a0;
- (double)_timeLabelAlphaForEditMode:(long long)a0;
- (BOOL)_shouldFadeToTransitionView;
- (BOOL)_wantsTimeTravelStatusModule;
- (void)videoPlayerViewDidBeginPlayingQueuedVideo:(id)a0;
- (void)_updateReviewLabel;
- (id)_editingComplicationColor;
- (void)_updateComplicationWithColor:(id)a0 animated:(BOOL)a1;
- (BOOL)_shouldQueueKeepAlive;
- (id)_posterImageViewForStyle:(unsigned long long)a0;
- (void)setTransitionFraction:(double)a0 fromOption:(id)a1 toOption:(id)a2 customEditMode:(long long)a3 slot:(id)a4;
- (id)_currentPosterImageView;
- (void)updateReviewDirection:(id)a0;
- (double)_adjustmentForBottomTimeLayout;

@end
