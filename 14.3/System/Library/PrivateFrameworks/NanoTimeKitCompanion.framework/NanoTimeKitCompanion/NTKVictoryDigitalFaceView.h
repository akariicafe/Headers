@class UIColor, NSString, NTKUtilityComplicationFactory, NTKComplicationDisplayWrapperView;

@interface NTKVictoryDigitalFaceView : NTKFaceView <NTKVictoryDigitalTimeViewDelegate> {
    NTKUtilityComplicationFactory *_utilityComplicationFactory;
    UIColor *_complicationForegroundColor;
    UIColor *_complicationPlatterColor;
    NTKComplicationDisplayWrapperView *_logoWrapperView;
    struct CGPoint { double x; double y; } _logoPlatterCenter;
    double _currentLogoPlatterXOffset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_swatchImageForColorOption:(id)a0 forDevice:(id)a1;
+ (id)_swatchForEditModeDependsOnOptions:(long long)a0 forDevice:(id)a1;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_keylineFrameForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_swatchImageForEditOption:(id)a0 mode:(long long)a1 withSelectedOptions:(id)a2;
- (double)_verticalPaddingForStatusBar;
- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (void)_applyOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyTransitionFraction:(double)a0 fromOption:(id)a1 toOption:(id)a2 forCustomEditMode:(long long)a3 slot:(id)a4;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_keylineViewForCustomEditMode:(long long)a0 slot:(id)a1;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)a0;
- (void)_applyBreathingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyRubberBandingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_configureComplicationView:(id)a0 forSlot:(id)a1;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (id)_newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (BOOL)_needsForegroundContainerView;
- (id)_additionalPrelaunchApplicationIdentifiers;
- (void)_loadLayoutRules;
- (BOOL)_supportsTimeScrubbing;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)a0;
- (long long)_keylineStyleForComplicationSlot:(id)a0;
- (double)_complicationAlphaForEditMode:(long long)a0;
- (void)_updateImageToBlur;
- (void)_endScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (long long)_utilitySlotForSlot:(id)a0;
- (double)_keylinePaddingForState:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_keylineFrameForComplicationSlot:(id)a0 selected:(BOOL)a1;
- (void)_layoutTimeTravelCaptionView:(id)a0;
- (double)_keylineEdgeGapForState:(long long)a0;
- (void)_scrubToDate:(id)a0 animated:(BOOL)a1;
- (double)_timeTravelStatusModuleCaptionConstraintPadding;
- (void)_layoutTimeTravelStatusModule:(id)a0;
- (double)_timeAlphaForEditMode:(long long)a0;
- (void)_setupLogoViews;
- (void)_logoTapped;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_timeViewFrame;
- (void)_positionLogoPlatterView;
- (void)_applyColor:(id)a0 platterColor:(id)a1 toComplicationView:(id)a2;
- (void)_applyTransitionFraction:(double)a0 fromColor:(id)a1 toColor:(id)a2 fromDigitsColor:(id)a3 toDigitsColor:(id)a4 fromPlatterColor:(id)a5 toPlatterColor:(id)a6 fromBackgroundColor:(id)a7 toBackgroundColor:(id)a8 slot:(id)a9;
- (double)_bottomComplicationAlphaForEditMode:(long long)a0;
- (double)_logoPlatterAlphaForEditMode:(long long)a0;
- (double)_logoPlatterXOffsetForEditMode:(long long)a0;
- (void)victoryDigitalTimeViewDidChangeTime:(id)a0;

@end
