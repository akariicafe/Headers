@class NTKExtragalacticContentView;

@interface NTKExtragalacticFaceView : NTKFaceView

@property (retain, nonatomic) NTKExtragalacticContentView *extragalacticContentView;
@property (nonatomic) double breathingFraction;
@property (nonatomic) double rubberbandingFraction;
@property (nonatomic) double backgroundAlpha;

+ (id)_swatchForEditModeDependsOnOptions:(long long)a0 forDevice:(id)a1;
+ (BOOL)_backgroundAlphaForOption:(id)a0;

- (void)setTimeOffset:(double)a0;
- (void).cxx_destruct;
- (void)_applyBreathingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyOption:(id)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (BOOL)_applyRoundedCornerOverlay;
- (void)_applyRubberBandingFraction:(double)a0 forCustomEditMode:(long long)a1 slot:(id)a2;
- (void)_applyTransitionFraction:(double)a0 fromOption:(id)a1 toOption:(id)a2 forCustomEditMode:(long long)a3 slot:(id)a4;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)a0;
- (void)_loadSnapshotContentViews;
- (void)_prepareForSnapshotting;
- (void)_prepareSwatchImagesForSelectedOptions:(id)a0;
- (id)_swatchImageForEditOption:(id)a0 mode:(long long)a1 withSelectedOptions:(id)a2;
- (void)_unloadSnapshotContentViews;
- (id)createFaceColorPalette;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)screenDidTurnOffAnimated:(BOOL)a0;
- (void)screenWillTurnOnAnimated:(BOOL)a0;
- (void)setOverrideDate:(id)a0 duration:(double)a1;
- (void)_applyBreathingAndRubberbanding;
- (void)_applyPalette:(id)a0;
- (id)extragalacticPalette;

@end
