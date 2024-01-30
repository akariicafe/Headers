@class UIColor, NTKUtilityComplicationFactory, UIView, UITapGestureRecognizer;

@interface NTKTimelapseFaceView : NTKAVListingFaceBaseView {
    unsigned long long _theme;
    UIView *_cornerView;
    UITapGestureRecognizer *_tapToPlayGesture;
    NTKUtilityComplicationFactory *_complicationFactory;
    unsigned long long _deviceSizeClass;
    UIColor *_foregroundColor;
    UIColor *_shadowColor;
    UIView *_topGradientView;
    UIView *_bottomGradientView;
    unsigned char _isUsingLegibility : 1;
    unsigned char _isComplicationColorApplied : 1;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (id)_posterImageView;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (id)_swatchImageForEditOption:(id)a0 mode:(long long)a1 withSelectedOptions:(id)a2;
- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (void)_applyOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (id)_keylineViewForCustomEditMode:(long long)a0 slot:(id)a1;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)a0;
- (void)_configureComplicationView:(id)a0 forSlot:(id)a1;
- (void)_prepareForEditing;
- (id)_newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (void)_loadLayoutRules;
- (void)_applyDataMode;
- (void)_handleWristRaiseScreenWake;
- (void)_handleOrdinaryScreenWake;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)a0;
- (long long)_complicationPickerStyleForSlot:(id)a0;
- (id)_nextListing;
- (void)_resetVideoForListing;
- (void)_performPreloadVideoTask;
- (id)_onDeckPosterImageView;
- (void)_playQueuedUpVideo;
- (BOOL)_timeLabelUsesLegibility;
- (long long)_utilitySlotForSlot:(id)a0;
- (void)setShouldShowUnsnapshotableContent:(BOOL)a0;
- (void)_handleTapToPlayVideoGesture:(id)a0;
- (id)_posterImageViewWithTheme:(unsigned long long)a0;
- (id)_viewForEditOption:(id)a0;
- (void)videoPlayerViewDidBeginPlaying:(id)a0;
- (void)_configureComplicationFactory;
- (void)_setDateAttributes:(id)a0 animated:(BOOL)a1;
- (void)_applyComplicationContentSpecificAttributesAnimated:(BOOL)a0;
- (void)_applyScrubbingForegroundColor:(id)a0 shadowColor:(id)a1;
- (void)_startScrubbingAnimationFromUIViewAnimateWithDuration;
- (void)_endScrubbingAnimationFromUIViewAnimateWithDuration;
- (id)_newTopGradientViewWithColor:(id)a0;
- (id)_newBottomGradientViewWithColor:(id)a0;
- (id)_onDeckPosterImageViewWithTheme:(unsigned long long)a0;

@end
