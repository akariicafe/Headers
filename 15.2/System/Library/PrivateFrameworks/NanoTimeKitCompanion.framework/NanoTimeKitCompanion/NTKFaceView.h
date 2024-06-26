@class NSMutableDictionary, UIImage, NSDate, NTKInterpolatedColorPalette, NTKExtraLargeTimeView, NTKFaceColorPalette, CAFilter, UIView, UIColor, NSString, NSTimer, NSMutableSet, NTKContainerView, CLKDevice, NTKTimeTravelModuleView, UIImageView;
@protocol NTKFaceViewDelegate, NTKTimeView, NTKFaceViewComplicationFactory;

@interface NTKFaceView : UIView <PUICCrownInputSequencerDelegate, NTKTimeTravelModuleViewTapClient, CLKUIQuadViewHierarchyObserver, NTKContainerViewLayoutDelegate, CLKMonochromeFilterProvider, NTKComplicationDisplayWrapperViewAnimationDelegate, NTKTimeView, NTKClockHardwareInput> {
    double _accumulatedTimeTravelEntryRotation;
    NSTimer *_accumulateTimeTravelEntryRotationTimeoutTimer;
    NSTimer *_fastCrownModeTimeoutTimer;
    BOOL _fastCrownMode;
    BOOL _transitioningBetweenLiveAndScrubbing;
    BOOL _wasScrubbingAtStartOfTransition;
    BOOL _canHandleHardwareEvents;
    NSDate *_timeTravelEnterDate;
    NSDate *_scrubDate;
    NTKTimeTravelModuleView *_timeTravelModuleView;
    UIView *_timeTravelCaptionView;
    UIImage *_timeTravelCaptionImage;
    double _timeTravelDistanceToYesterdayStart;
    double _timeTravelDistanceToTomorrowEnd;
    NSDate *_yesterdayStart;
    NSDate *_tomorrowEnd;
    NSTimer *_crownIdleTimer;
    double _lastCrownOffset;
    NSDate *_analyticsTimeTravelSessionStart;
    double _analyticsTimeTravelMaximumOffset;
    BOOL _statusIconVisible;
    NTKExtraLargeTimeView *_sensitiveUIShieldView;
    NTKFaceColorPalette *_faceColorPalette;
    NTKInterpolatedColorPalette *_interpolatedColorPalette;
    NSMutableSet *_allSubQuadViews;
    NSMutableDictionary *_complicationDisplayWrappers;
    NSMutableDictionary *_complicationLayouts;
    NSMutableSet *_hiddenComplicationSlots;
    NSString *_timeTravelCaptionKey;
    struct CGSize { double width; double height; } _boundsSizeForComputedLayouts;
    NSDate *_overrideDate;
    BOOL _needsRender;
    BOOL _needsImageQueueDiscardOnRender;
    BOOL _removedFromWindowDuringThisTransaction;
    BOOL _unadornedSnapshotRemoved;
    float _complicationEditingSaturationValue;
    CAFilter *_complicationEditingSaturationFilter;
}

@property (class, readonly, nonatomic) long long uiSensitivity;

@property (nonatomic, getter=isEveryComplicationHidden) BOOL everyComplicationHidden;
@property (retain, nonatomic) UIColor *alternateComplicationColor;
@property (retain, nonatomic) UIColor *complicationColor;
@property (retain, nonatomic) UIColor *interpolatedComplicationColor;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) UIView<NTKTimeView> *timeView;
@property (retain, nonatomic) UIView *rootContainerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *complicationContainerView;
@property (readonly, nonatomic) NTKContainerView *foregroundContainerView;
@property (readonly, nonatomic) BOOL editing;
@property (readonly, nonatomic) long long fromEditMode;
@property (readonly, nonatomic) long long toEditMode;
@property (readonly, nonatomic) double editModeTransitionFraction;
@property (readonly, nonatomic) double alphaForDimmedState;
@property (readonly, nonatomic) NSDate *currentDisplayDate;
@property (readonly, nonatomic) long long faceStyle;
@property (readonly, nonatomic) CLKDevice *device;
@property (nonatomic) BOOL shouldShowUnsnapshotableContent;
@property (nonatomic) long long dataMode;
@property (nonatomic) BOOL showsCanonicalContent;
@property (nonatomic) BOOL showContentForUnadornedSnapshot;
@property (nonatomic) BOOL showsLockedUI;
@property (weak, nonatomic) id<NTKFaceViewDelegate> delegate;
@property (retain, nonatomic) UIView *unadornedSnapshotView;
@property (retain, nonatomic) UIImageView *switcherSnapshotView;
@property (readonly, nonatomic) BOOL zooming;
@property (readonly, nonatomic) NTKFaceColorPalette *faceColorPalette;
@property (readonly, nonatomic) NTKInterpolatedColorPalette *interpolatedColorPalette;
@property (retain, nonatomic) id<NTKFaceViewComplicationFactory> complicationFactory;
@property (copy, nonatomic) NSString *resourceDirectory;
@property (nonatomic, getter=isFrozen) BOOL frozen;
@property (nonatomic, getter=isSlow) BOOL slow;
@property (readonly, nonatomic) BOOL monochromeRichComplicationsEnabled;
@property (readonly, nonatomic) BOOL orbing;
@property (nonatomic) BOOL complicationsShowEditingContent;
@property (retain, nonatomic) NSMutableDictionary *editConfigurations;
@property (retain, nonatomic) NSString *selectedComplicationSlot;
@property (readonly) BOOL timeScrubbing;
@property (nonatomic) long long detailMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_prewarmSharedData;
+ (id)newFaceViewForFace:(id)a0;
+ (id)swatchForEditModeDependsOnOptions:(long long)a0 forDevice:(id)a1;
+ (long long)numberOfDetailModesForFaceStyle:(long long)a0;
+ (id)_swatchForEditModeDependsOnOptions:(long long)a0 forDevice:(id)a1;
+ (id)pigmentFromOption:(id)a0;
+ (id)_swatchImageForColorOption:(id)a0 forDevice:(id)a1 color:(id)a2 size:(struct CGSize { double x0; double x1; })a3;
+ (void)_prewarmForDevice:(id)a0;

- (void)layoutSubviews;
- (void)setNeedsRender;
- (void)layoutContainerView:(id)a0;
- (void).cxx_destruct;
- (BOOL)_wheelChangedWithEvent:(id)a0;
- (void)setTimeOffset:(double)a0;
- (BOOL)canBecomeFirstResponder;
- (void)willMoveToWindow:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (long long)complicationPickerStyleForSlot:(id)a0;
- (void)curvedComplicationCircleRadius:(double *)a0 centerAngle:(double *)a1 maxAngularWidth:(double *)a2 circleCenter:(struct CGPoint { double x0; double x1; } *)a3 interior:(BOOL *)a4 forSlot:(id)a5;
- (id)keylineViewForComplicationSlot:(id)a0;
- (BOOL)slotSupportsCurvedText:(id)a0;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)_configureComplicationView:(id)a0 forSlot:(id)a1;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (id)complicationLayoutforSlot:(id)a0;
- (void)_prepareWristRaiseAnimation;
- (void)_performWristRaiseAnimation;
- (id)detachedComplicationDisplayWrapperForSlot:(id)a0;
- (void)_applyBreathingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyRubberBandingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (id)_swatchImageForColorOption:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)filterForView:(id)a0 style:(long long)a1;
- (id)filterForView:(id)a0 style:(long long)a1 fraction:(double)a2;
- (id)colorForView:(id)a0 accented:(BOOL)a1;
- (id)interpolatedColorForView:(id)a0;
- (void)screenWillTurnOnAnimated:(BOOL)a0;
- (void)screenDidTurnOffAnimated:(BOOL)a0;
- (id)_detachedComplicationDisplays;
- (id)_newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (double)_verticalPaddingForStatusBar;
- (BOOL)_needsForegroundContainerView;
- (void)performScrollTestNamed:(id)a0 completion:(id /* block */)a1;
- (id)_additionalPrelaunchApplicationIdentifiers;
- (void)_loadLayoutRules;
- (BOOL)_wantsStatusBarHidden;
- (BOOL)_supportsTimeScrubbing;
- (void)_applyDataMode;
- (void)_handleWristRaiseScreenWake;
- (BOOL)presentedViewControllerShouldBecomeFirstResponder:(id)a0;
- (void)_handleOrdinaryScreenWake;
- (void)_prepareForSnapshotting;
- (void)_finalizeForSnapshotting:(id /* block */)a0;
- (void)_applyOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_cleanupAfterTransitionComplicationSlot:(id)a0 selectedComplication:(id)a1;
- (void)_applyShowsCanonicalContent;
- (void)_applyShowsLockedUI;
- (void)_becameActiveFace;
- (void)_becameInactiveFace;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_applyTransitionFraction:(double)a0 fromOption:(id)a1 toOption:(id)a2 forCustomEditMode:(long long)a3 slot:(id)a4;
- (void)_prepareForOrb;
- (void)_cleanupAfterOrb:(BOOL)a0;
- (void)setNormalComplicationDisplayWrapper:(id)a0 forSlot:(id)a1;
- (void)_applyFrozen;
- (void)_applySlow;
- (void)_startScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_endScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (id)normalComplicationDisplayWrapperForSlot:(id)a0;
- (void)enumerateComplicationDisplayWrappersWithBlock:(id /* block */)a0;
- (void)setOverrideDate:(id)a0 duration:(double)a1;
- (void)prepareForEditing;
- (void)cleanupAfterEditing;
- (double)_faceEditingScaleForEditMode:(long long)a0 slot:(id)a1;
- (void)populateFaceViewEditOptionsFromFace:(id)a0;
- (double)horizontalPaddingForStatusBar;
- (double)verticalPaddingForStatusBar;
- (BOOL)wantsStatusBarIconShadow;
- (void)prepareForOrb;
- (void)cleanupAfterOrb:(BOOL)a0;
- (id)blurSourceImage;
- (BOOL)supportsUnadornedSnapshot;
- (void)loadContentToReplaceUnadornedSnapshot;
- (void)handleUnadornedSnapshotRemoved;
- (BOOL)complicationIsHiddenAtSlot:(id)a0;
- (id)_complicationSlotsHiddenByCurrentConfiguration;
- (void)setComplicationHidden:(BOOL)a0 atSlot:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })keylineFrameForComplicationSlot:(id)a0 selected:(BOOL)a1;
- (BOOL)wantsStatusBarHidden;
- (id)allVisibleComplicationsForCurrentConfiguration;
- (void)prepareToZoom;
- (void)cleanupAfterZoom;
- (BOOL)_handlePhysicalButton:(unsigned long long)a0 event:(unsigned long long)a1;
- (void)prepareWristRaiseAnimation;
- (void)performWristRaiseAnimation;
- (void)handleWristRaiseScreenWake;
- (void)handleOrdinaryScreenWake;
- (void)prepareForStatusChange:(BOOL)a0;
- (void)setDetachedComplicationDisplayWrapper:(id)a0 forSlot:(id)a1;
- (void)configureComplicationViewDisplayWrapper:(id)a0 forSlot:(id)a1;
- (id)newLegacyComplicationViewForSlot:(id)a0 family:(long long)a1 complication:(id)a2;
- (long long)legacyComplicationLayoutOverrideForSlot:(id)a0 complication:(id)a1;
- (id)closestVisibleSlotToSlot:(id)a0 editMode:(long long)a1;
- (id)optionForCustomEditMode:(long long)a0 slot:(id)a1;
- (void)setOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (BOOL)_wantsOpportunisticLiveFaceLoading;
- (long long)_swatchImageContentMode;
- (id)swatchImageForEditOption:(id)a0 mode:(long long)a1 withSelectedOptions:(id)a2 refreshHandler:(id /* block */)a3;
- (long long)swatchImageContentMode;
- (void)scrubToDate:(id)a0 animated:(BOOL)a1;
- (void)startScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)endScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_layoutForegroundContainerView;
- (double)_editSpeedForCustomEditMode:(long long)a0 slot:(id)a1;
- (void)_configureForEditMode:(long long)a0;
- (id)createFaceColorPalette;
- (BOOL)_fadesComplicationSlot:(id)a0 inEditMode:(long long)a1;
- (long long)_complicationPickerStyleForSlot:(id)a0;
- (double)_keylineCornerRadiusForComplicationSlot:(id)a0;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)a0;
- (BOOL)_slotSupportsCurvedText:(id)a0;
- (void)_applyEditConfigurationsWithForce:(BOOL)a0;
- (id)_keylineViewForComplicationSlot:(id)a0;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)a0 slot:(id)a1;
- (double)_minimumBreathingScaleForComplicationSlot:(id)a0;
- (void)_curvedComplicationCircleRadius:(double *)a0 centerAngle:(double *)a1 maxAngularWidth:(double *)a2 circleCenter:(struct CGPoint { double x0; double x1; } *)a3 interior:(BOOL *)a4 forSlot:(id)a5;
- (void)_cleanupAfterTransitionToOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (long long)_keylineStyleForComplicationSlot:(id)a0;
- (BOOL)_supportsUnadornedSnapshot;
- (void)layoutComplicationViews;
- (void)_scrubToDate:(id)a0 animated:(BOOL)a1;
- (BOOL)_wantsTimeTravelStatusModule;
- (double)_timeTravelStatusModuleCaptionConstraintPadding;
- (double)_timeTravelCaptionLabelMaxWidth;
- (void)_layoutTimeTravelStatusModule:(id)a0;
- (void)_layoutTimeTravelCaptionView:(id)a0;
- (void)_updateForResourceDirectoryChange:(id)a0;
- (id)_defaultKeylineViewForComplicationSlot:(id)a0;
- (void)applyTransitionFraction:(double)a0 fromComplication:(id)a1 toComplication:(id)a2 slot:(id)a3;
- (void)_handleLocaleDidChange;
- (void)reloadSnapshotContentViews;
- (id)_timeTravelCaptionFontSizeOverrides;
- (void)_loadContentToReplaceUnadornedSnapshot;
- (id)_complicationContainerViewForSlot:(id)a0;
- (BOOL)_canStartTimeScrubbing;
- (BOOL)_isAnalog;
- (id)swatchImageForColorOption:(id)a0;
- (BOOL)_shouldHideUI;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })timeTravelModuleTouchInsets;
- (void)performTimeTravelModuleTapAction;
- (void)updateRichCornerComplicationsInnerColor:(id)a0 outerColor:(id)a1;
- (id)swatchImageForColorOption:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)swatchPrimaryColorForColorOption:(id)a0;
- (void)_disableCrown;
- (void)_prepareToZoom;
- (void)_cleanupAfterZoom;
- (void)_enableCrown;
- (void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (unsigned long long)_detentTypeForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_swatchImageForEditOption:(id)a0 mode:(long long)a1 withSelectedOptions:(id)a2;
- (id)_keylineViewForCustomEditMode:(long long)a0 slot:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_relativeKeylineFrameForCustomEditMode:(long long)a0 slot:(id)a1;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)a0 slot:(id)a1;
- (double)_horizontalPaddingForStatusBar;
- (void)_reorderSwitcherSnapshotView;
- (void)_prepareForStatusChange:(BOOL)a0;
- (id)_timeTravelCaptionCacheKey;
- (void)endScrubbingAnimated:(BOOL)a0;
- (void)_updateComplicationMaxSize;
- (void)_adjustUIForBoundsChange;
- (void)_layoutComplicationViews;
- (void)_bringForegroundViewsToFront;
- (void)_updateFaceColorPaletteWithOption:(id)a0 mode:(long long)a1;
- (void)_updateTimeOffset;
- (void)_updateStatusIconVisibility;
- (void)setOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2 forceApply:(BOOL)a3;
- (void)hideAppropriateComplicationsForCurrentConfigurationInEditMode:(long long)a0;
- (void)_updateMaxSizeForDisplayWrapper:(id)a0 slot:(id)a1;
- (void)_layoutComplicationViewForSlot:(id)a0;
- (void)_updateSaturationForComplicationEditing;
- (void)setNeedsRenderWithAdditionalWork:(id /* block */)a0;
- (BOOL)renderIfNeeded;
- (void)_setupComplicationViewsIfHidden;
- (void)_teardownComplicationViewsIfNeeded;
- (void)populateFaceViewEditOptionsFromFace:(id)a0 forced:(BOOL)a1;
- (void)_setTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (void)_setComplicationAlphaForTransitionFraction:(double)a0 fromOption:(id)a1 toOption:(id)a2 customEditMode:(long long)a3 slot:(id)a4;
- (id)_keylineViewForCustomEditMode:(long long)a0 slot:(id)a1 selectedSlot:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_keylineFrameForEditMode:(long long)a0 option:(id)a1 slot:(id)a2 selectedSlot:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_keylineFrameForCustomEditMode:(long long)a0 option:(id)a1 slot:(id)a2 selectedSlot:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_keylineFrameFromRelativeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forEditingMode:(long long)a1 option:(id)a2 slot:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })faceViewFrameForEditMode:(long long)a0 option:(id)a1 slot:(id)a2;
- (void)shiftSelectedComplicationSlotIfHidden;
- (id)closestVisibleComplicationSlotToSlot:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_keylineFrameForComplicationSlot:(id)a0 selected:(BOOL)a1;
- (void)_getKeylineFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1 forComplicationSlot:(id)a2 selected:(BOOL)a3;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_displayEditingTransformForComplicationSlot:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_faceViewFrameForEditMode:(long long)a0 option:(id)a1 slot:(id)a2;
- (id)_swatchImageForEditOption:(id)a0 mode:(long long)a1 withSelectedOptions:(id)a2 refreshHandler:(id /* block */)a3;
- (id)_blurSourceImage;
- (id)_editOptionThatHidesAllComplications;
- (id)_complicationSlotsHiddenByEditOption:(id)a0;
- (double)_alphaForComplicationSlot:(id)a0 inEditOption:(id)a1 ofEditMode:(long long)a2;
- (id)_swatchColorForColorOption:(id)a0;
- (BOOL)_wantsStatusBarIconShadow;
- (id)_layoutRuleForComplicationSlot:(id)a0 withOverride:(long long)a1 inEditMode:(long long)a2;
- (id)layoutRuleForComplicationSlot:(id)a0 inState:(long long)a1 layoutOverride:(long long)a2;
- (struct CGSize { double x0; double x1; })_maxSizeForComplicationSlot:(id)a0 layoutOverride:(long long)a1;
- (void)_layoutComplicationViewWithWrapper:(id)a0 forSlot:(id)a1;
- (void)_didLayoutComplicationViews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForComplicationDisplayWrapper:(id)a0 inSlot:(id)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_displayContentTransformForComplicationSlot:(id)a0;
- (id)_createTimeTravelCaptionImage;
- (id)_timeTravelCaptionAttributedText;
- (id)_baseTimeTravelCaptionImageNameForEnglishOnly;
- (void)_resetSequencerBoundaries;
- (void)applyRubberBandingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyTransitionFraction:(double)a0 fromComplication:(id)a1 toComplication:(id)a2 slot:(id)a3;
- (struct CGPoint { double x0; double x1; })_timeTravelStatusModuleCenter;
- (BOOL)_wantsDimWithDesaturationFilterDuringComplicationEditing;
- (id)_additonalViewsToApplyDesaturationDuringComplicationEditing;
- (id)_allViewsWithComplicationEditingDesaturationFilter;
- (void)_addSaturationFilterToViews:(id)a0;
- (void)quadViewWillEnterSubtree:(id)a0;
- (void)quadViewWillLeaveSubtree:(id)a0;
- (BOOL)complicationDisplayWrapperView:(id)a0 shouldStartCustomDataAnimationFromEarlierView:(id)a1 laterView:(id)a2 isForward:(BOOL)a3 animationType:(unsigned long long)a4;
- (void)complicationDisplayWrapperView:(id)a0 updateCustomDataAnimationFromEarlierView:(id)a1 laterView:(id)a2 isForward:(BOOL)a3 animationType:(unsigned long long)a4 animationDuration:(double)a5 animationFraction:(float)a6;
- (void)_outputTime:(id)a0;
- (void)_stopOutputtingTime;
- (BOOL)needsImageQueueDiscardOnRender;
- (void)configureForEditMode:(long long)a0;
- (void)configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (void)setTransitionFraction:(double)a0 fromOption:(id)a1 toOption:(id)a2 customEditMode:(long long)a3 slot:(id)a4;
- (void)cleanupAfterTransitionToOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (id)keylineViewForCustomEditMode:(long long)a0 slot:(id)a1 selectedSlot:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })keylineFrameForCustomEditMode:(long long)a0 slot:(id)a1 selectedSlot:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })keylineFrameForCustomEditMode:(long long)a0 option:(id)a1 slot:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_keylineFrameForCustomEditMode:(long long)a0 slot:(id)a1;
- (void)_keylineSelectionChangingTo:(id)a0 editMode:(long long)a1;
- (BOOL)keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)a0;
- (unsigned long long)keylineLabelAlignmentForCustomEditMode:(long long)a0 slot:(id)a1;
- (double)editSpeedForCustomEditMode:(long long)a0 slot:(id)a1;
- (unsigned long long)detentTypeForCustomEditMode:(long long)a0 slot:(id)a1;
- (void)applyBreathingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)cleanupAfterTransitionComplicationSlot:(id)a0 selectedComplication:(id)a1;
- (id)customEditingViewController;
- (void)applyBreathingFraction:(double)a0 forComplicationSlot:(id)a1;
- (void)applyRubberBandingFraction:(double)a0 forComplicationSlot:(id)a1;
- (BOOL)isAnalog;
- (void)invalidateComplicationLayout;
- (void)enumerateQuadViewsWithBlock:(id /* block */)a0;
- (id)_accessPrewarmedData;
- (BOOL)_usesCustomZoom;
- (BOOL)_usesSimplifiedZoom;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_keylineFrameForCustomEditMode:(long long)a0 option:(id)a1 slot:(id)a2;
- (void)layoutComplicationViewWithWrapper:(id)a0 forSlot:(id)a1;
- (void)_setupTimeTravel;
- (void)startScrubbingAnimated:(BOOL)a0;
- (void)_prepareScrubbingSequencerBoundaries;
- (void)_setComplicationEditingSaturationValue:(float)a0;
- (void)changeComplicationsAlpha:(double)a0;

@end
