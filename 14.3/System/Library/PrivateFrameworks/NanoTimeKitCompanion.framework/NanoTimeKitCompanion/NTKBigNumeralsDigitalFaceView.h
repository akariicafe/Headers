@class NSString;

@interface NTKBigNumeralsDigitalFaceView : NTKFaceView <NTKBigNumeralsDigitalTimeViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_swatchColorForColorOption:(id)a0 forDevice:(id)a1;
+ (id)_swatchImageForColorOption:(id)a0 forDevice:(id)a1;
+ (id)_swatchForEditModeDependsOnOptions:(long long)a0 forDevice:(id)a1;

- (void)layoutSubviews;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)_loadSnapshotContentViews;
- (void)_createTimeView;
- (void)_unloadSnapshotContentViews;
- (void)_removeTimeView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_keylineFrameForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_swatchImageForEditOption:(id)a0 mode:(long long)a1 withSelectedOptions:(id)a2;
- (id)_renderTimeViewSwatchImageForStyle:(unsigned long long)a0 typeface:(unsigned long long)a1 color:(unsigned long long)a2;
- (void)bigNumeralsDigitalTimeViewDidChangeTime;
- (double)_verticalPaddingForStatusBar;
- (void)_prepareForStatusChange:(BOOL)a0;
- (void)_configureForEditMode:(long long)a0;
- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2;
- (void)_applyOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyTransitionFraction:(double)a0 fromOption:(id)a1 toOption:(id)a2 forCustomEditMode:(long long)a3 slot:(id)a4;
- (void)_cleanupAfterTransitionToOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)a0 slot:(id)a1;
- (id)_keylineViewForCustomEditMode:(long long)a0 slot:(id)a1;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)a0;
- (void)_applyBreathingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyRubberBandingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;

@end
