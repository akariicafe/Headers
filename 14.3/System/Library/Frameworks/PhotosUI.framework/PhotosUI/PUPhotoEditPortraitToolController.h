@class NSMutableDictionary, NSDictionary, CEKApertureButton, PFCoalescer, NSMutableArray, UIView, _PULightingGradientView, NSString, CEKLightingNameBadge, CEKLightingControl, NSArray, CEKSlider, PXUIButton, PUPhotoEditApertureToolbar, NSNumber;

@interface PUPhotoEditPortraitToolController : PUPhotoEditToolController <PUPhotoEditApertureToolbarDelegate, CEKLightingControlDelegate, CEKSliderDelegate, PXChangeObserver> {
    CEKApertureButton *_apertureButton;
    PXUIButton *_lightingIntensityButton;
    UIView *_lightingContainer;
    UIView *_apertureContainer;
    NSMutableArray *_containerConstraints;
    long long _initialLightingType;
    double _initialLightingIntensity;
    PXUIButton *_depthToolbarButton;
    _PULightingGradientView *_lightingGradient;
    CEKLightingNameBadge *_lightingNameBadge;
    NSArray *_lightingNameBadgeConstraints;
    NSArray *_lightingControlConstraints;
    CEKSlider *_lightingSlider;
    PFCoalescer *_apertureUpdateCoalescer;
    NSMutableArray *_toolConstraints;
    NSDictionary *_cachedPortraitEffectSettings;
    NSNumber *_cachedSpillMatteAllowed;
    BOOL _isStageLightEnabled;
    NSMutableDictionary *_lightingIntensityCache;
}

@property (readonly, nonatomic) PUPhotoEditApertureToolbar *apertureToolbar;
@property (readonly, nonatomic) CEKLightingControl *lightingControl;
@property (nonatomic) long long toolSelection;
@property (nonatomic) unsigned long long majorVersion;
@property (nonatomic) unsigned long long minorVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)lightingControlDidChangeExpanded:(id)a0;
- (void).cxx_destruct;
- (BOOL)wantsSecondaryToolbarVisible;
- (void)dealloc;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)leadingToolbarViews;
- (void)apertureToolbar:(id)a0 didChangeValue:(double)a1;
- (BOOL)apertureToolbarShouldRotateLabelsWithOrientation:(id)a0;
- (void)_updateToolContainerConstraints;
- (void)_updateToolConstraints;
- (BOOL)_canRenderPortraitEffect;
- (void)setToolSelection:(long long)a0 animated:(BOOL)a1;
- (void)_updateToolVisibilityAnimated:(BOOL)a0;
- (BOOL)_shouldShowPortraitV2;
- (void)_updateApertureSliderLength;
- (void)_refreshFromValuesCalculator;
- (BOOL)_setupDepthControlsIfNeeded;
- (BOOL)_setupLightingControlsIfNeeded;
- (BOOL)_setupApertureControlsIfNeeded;
- (void)_handlePortraitNavigationButtons:(id)a0;
- (void)_handleDepthEffectButton:(id)a0;
- (void)_updateNavigationButtonsAnimated:(BOOL)a0;
- (void)_refreshLightingWithCompositionController:(id)a0;
- (void)_updateLightingSliderAnimated:(BOOL)a0;
- (id)_depthButtonTitle;
- (id)accessibilityHUDItemForButton:(id)a0;
- (void)_setShowLightingControl:(BOOL)a0 animated:(BOOL)a1;
- (void)setPhotoEditSpec:(id)a0;
- (void)_updateLabelOrientation;
- (void)_updateLightingNameBadgeForOrientation:(long long)a0 expanded:(BOOL)a1;
- (void)_updateCompositionWithApertureValue;
- (void)_updateCompositionWithLightingIntensity;
- (void)_updateIntensityForLightingType:(long long)a0;
- (void)_updateLightingIntensityCache;
- (id)localizedName;
- (void)updateViewConstraints;
- (void)setupWithAsset:(id)a0 compositionController:(id)a1 editSource:(id)a2 overcaptureEditSource:(id)a3 valuesCalculator:(id)a4;
- (id)toolbarIcon;
- (id)centerToolbarView;
- (BOOL)canResetToDefaultValue;
- (BOOL)wantsZoomAndPanEnabled;
- (BOOL)installTogglePreviewGestureRecognizer:(id)a0;
- (BOOL)installLivePhotoPlaybackGestureRecognizer:(id)a0;
- (long long)toolControllerTag;
- (void)willBecomeActiveTool;
- (void)setLayoutOrientation:(long long)a0 withTransitionCoordinator:(id)a1;
- (void)compositionControllerDidChangeForAdjustments:(id)a0;
- (void)sliderWillBeginScrolling:(id)a0;
- (void)sliderDidScroll:(id)a0;
- (void)sliderWillEndScrolling:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)sliderDidEndScrolling:(id)a0;
- (void)lightingControl:(id)a0 willChangeExpanded:(BOOL)a1;
- (void)lightingControlDidChangeSelectedLightingType:(id)a0;
- (void)setBackdropViewGroupName:(id)a0;
- (void)viewDidLoad;

@end
