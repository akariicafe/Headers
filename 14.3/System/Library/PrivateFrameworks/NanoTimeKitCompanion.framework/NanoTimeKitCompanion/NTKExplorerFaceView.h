@class NTKExplorerHandsView, NSString, NTKColorCircularUtilitarianFaceViewComplicationFactory, NTKExplorerDialView, NTKExplorerStatusView;

@interface NTKExplorerFaceView : NTKAnalogFaceView <NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate> {
    NTKColorCircularUtilitarianFaceViewComplicationFactory *_faceViewComplicationFactory;
    NTKExplorerDialView *_dialView;
    NTKExplorerStatusView *_statusView;
    BOOL _observingConnectivity;
    long long _signalAnimationState;
    long long _dotPosition;
}

@property (readonly, nonatomic) NTKExplorerHandsView *timeView;
@property (nonatomic) unsigned long long density;
@property (nonatomic) unsigned long long color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_swatchImageForColorOption:(id)a0 forDevice:(id)a1;
+ (id)_swatchForEditModeDependsOnOptions:(long long)a0 forDevice:(id)a1;
+ (Class)_timeViewClass;

- (void).cxx_destruct;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
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
- (void)_loadLayoutRules;
- (BOOL)_supportsTimeScrubbing;
- (void)_applyShowsCanonicalContent;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)a0;
- (void)_applyFrozen;
- (void)_prepareToZoomWithIconView:(id)a0 minDiameter:(double)a1 maxDiameter:(double)a2;
- (void)_cleanupAfterZoom;
- (void)_configureTimeView:(id)a0;
- (long long)_keylineStyleForComplicationSlot:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_legacyUnscaledKeylineFrameForCustomEditMode:(long long)a0 slot:(id)a1;
- (void)_applyTransitionFraction:(double)a0 fromColor:(unsigned long long)a1 toColor:(unsigned long long)a2;
- (double)_handAlphaForEditMode:(long long)a0;
- (double)_contentAlphaForEditMode:(long long)a0;
- (double)_complicationAlphaForEditMode:(long long)a0;
- (BOOL)_slotSupportsCurvedText:(id)a0;
- (id)_pickerMaskForSlot:(id)a0;
- (void)_setZoomFraction:(double)a0 iconDiameter:(double)a1;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)a0 slot:(id)a1;
- (id)_keylineViewForComplicationSlot:(id)a0;
- (void)_curvedComplicationCircleRadius:(double *)a0 centerAngle:(double *)a1 maxAngularWidth:(double *)a2 circleCenter:(struct CGPoint { double x0; double x1; } *)a3 interior:(BOOL *)a4 forSlot:(id)a5;
- (BOOL)slotUsesCurvedText:(id)a0;
- (struct CGPoint { double x0; double x1; })_contentCenterOffset;
- (double)_contentScaleForEditMode:(long long)a0;
- (void)_applyDensity:(unsigned long long)a0;
- (void)_applyColor:(unsigned long long)a0;
- (void)_applyTransitionFraction:(double)a0 fromDensity:(unsigned long long)a1 toOption:(unsigned long long)a2;

@end
