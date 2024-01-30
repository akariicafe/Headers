@class NTKZeusAnalogScene, NTKZeusColorPalette, UIView;

@interface NTKZeusAnalogFaceView : NTKSpriteKitAnalogFaceView {
    BOOL _isEditing;
    BOOL _isHandsVisibleInColorEditing;
    BOOL _isStatusBarIconShadowNeeded;
    NTKZeusColorPalette *_palette;
    unsigned long long _density;
    unsigned long long _faceColor;
    UIView *_cornerView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _upperComplicationOverrideFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lowerComplicationOverrideFrame;
}

@property (readonly, nonatomic) NTKZeusAnalogScene *analogScene;

+ (id)_swatchColorForColorOption:(id)a0 forDevice:(id)a1;
+ (id)_swatchImageForColorOption:(id)a0 forDevice:(id)a1;
+ (id)_swatchForEditModeDependsOnOptions:(long long)a0 forDevice:(id)a1;
+ (id)_supportedComplicationSlots;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_sceneSize;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (id)_swatchImageForEditOption:(id)a0 mode:(long long)a1 withSelectedOptions:(id)a2;
- (double)_verticalPaddingForStatusBar;
- (void)_prepareForStatusChange:(BOOL)a0;
- (void)_configureForEditMode:(long long)a0;
- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (void)_applyOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyTransitionFraction:(double)a0 fromOption:(id)a1 toOption:(id)a2 forCustomEditMode:(long long)a3 slot:(id)a4;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_keylineViewForCustomEditMode:(long long)a0 slot:(id)a1;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)a0;
- (void)_applyBreathingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyRubberBandingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (id)_newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2;
- (BOOL)_needsForegroundContainerView;
- (void)_loadLayoutRules;
- (void)setOverrideDate:(id)a0 duration:(double)a1;
- (long long)_complicationPickerStyleForSlot:(id)a0;
- (void)_configureTimeView:(id)a0;
- (BOOL)_wantsStatusBarIconShadow;
- (struct CGPoint { double x0; double x1; })_timeTravelStatusModuleCenter;
- (double)_backgroundAlphaForEditMode:(long long)a0;
- (BOOL)_fadesComplicationSlot:(id)a0 inEditMode:(long long)a1;
- (void)_updateDateComplicationPositionIfNecessary;
- (void)_loadScene;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForComplicationDisplayWrapper:(id)a0 inSlot:(id)a1;
- (double)_secondHandAlphaForDensity:(unsigned long long)a0 isEditing:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_lowerComplicationFrameForStyle:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_upperComplicationFrameForStyle:(unsigned long long)a0;
- (void)_setStatusBarIconShadowNeeded:(BOOL)a0;
- (double)_handAlphaForEditing:(BOOL)a0;
- (double)_numbersAlphaForEditMode:(long long)a0;

@end
