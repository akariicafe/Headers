@class UITapGestureRecognizer, NSString, UIColor, NTKUtilityComplicationFactory, UIView, NTKCharacterTimeView;

@interface NTKCharacterFaceView : NTKFaceView <UIGestureRecognizerDelegate, NTKUtilityComplicationFactoryDelegate> {
    NTKCharacterTimeView *_characterTimeView;
    UIView *_circleView;
    UIView *_handsView;
    NTKUtilityComplicationFactory *_complicationFactory;
    UITapGestureRecognizer *_timeTapRecognizer;
    unsigned char _isContentLoaded : 1;
    long long _prevDataMode;
    unsigned long long _optionCharacter;
    UIColor *_optionClothingColor;
    double _optionClothingDesaturation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_swatchColorForColorOption:(id)a0 forDevice:(id)a1;
+ (id)_swatchForEditModeDependsOnOptions:(long long)a0 forDevice:(id)a1;
+ (void)_prewarmForDevice:(id)a0;

- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (id)_swatchImageForEditOption:(id)a0 mode:(long long)a1 withSelectedOptions:(id)a2;
- (double)_verticalPaddingForStatusBar;
- (void)_configureForEditMode:(long long)a0;
- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (void)_applyOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyTransitionFraction:(double)a0 fromOption:(id)a1 toOption:(id)a2 forCustomEditMode:(long long)a3 slot:(id)a4;
- (id)_keylineViewForCustomEditMode:(long long)a0 slot:(id)a1;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)a0;
- (void)_applyBreathingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyRubberBandingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_enumerateQuadViewsWithBlock:(id /* block */)a0;
- (void)_configureComplicationView:(id)a0 forSlot:(id)a1;
- (void)_loadContentViews;
- (void)_unloadContentViews;
- (void)_prepareWristRaiseAnimation;
- (void)_performWristRaiseAnimation;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (id)_newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (BOOL)_needsForegroundContainerView;
- (void)_loadLayoutRules;
- (BOOL)_supportsTimeScrubbing;
- (BOOL)_usesCustomZoom;
- (void)_applyDataMode;
- (void)_applyShowsCanonicalContent;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)a0;
- (void)_prepareToZoomWithIconView:(id)a0 minDiameter:(double)a1 maxDiameter:(double)a2;
- (void)_cleanupAfterZoom;
- (double)_keylineCornerRadiusForComplicationSlot:(id)a0;
- (void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (BOOL)_slotSupportsCurvedText:(id)a0;
- (id)_pickerMaskForSlot:(id)a0;
- (void)_setZoomFraction:(double)a0 iconDiameter:(double)a1;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)a0 slot:(id)a1;
- (id)_keylineViewForComplicationSlot:(id)a0;
- (void)_curvedComplicationCircleRadius:(double *)a0 centerAngle:(double *)a1 maxAngularWidth:(double *)a2 circleCenter:(struct CGPoint { double x0; double x1; } *)a3 interior:(BOOL *)a4 forSlot:(id)a5;
- (void)applyToForegroundZoomFraction:(double)a0 faceScale:(double)a1;
- (void)_startScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_endScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (long long)_utilitySlotForSlot:(id)a0;
- (BOOL)slotUsesCurvedText:(long long)a0;
- (id)_slotForUtilitySlot:(long long)a0;
- (id)utilityDateComplicationFontForDateStyle:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_keylineFrameForComplicationSlot:(id)a0 selected:(BOOL)a1;
- (BOOL)_fadesComplicationSlot:(id)a0 inEditMode:(long long)a1;
- (void)_applyForegroundAlphaForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (void)_applyDataModeFromOldDataMode:(long long)a0;
- (void)_faceTapped:(id)a0;
- (void)_updateComplicationViewsAlphasWithAnimation:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_tapToSpeakRect;
- (void)_legacyOutputTime:(id)a0;
- (void)_outputTime:(id)a0;
- (void)_stopOutputtingTime;
- (BOOL)_isAnalog;
- (void)_scrubToDate:(id)a0 animated:(BOOL)a1;

@end
