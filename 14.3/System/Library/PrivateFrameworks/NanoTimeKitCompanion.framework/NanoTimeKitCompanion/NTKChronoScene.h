@class SKNode, NTKChronoLowerSubDial, SKLabelNode, NTKChronoPalette, NSMutableDictionary, SKEffectNode, NTKVariantNode, NSMutableArray, NTKChronoUpperSubDial;

@interface NTKChronoScene : NTKAnalogScene {
    SKNode *_currentMode;
    NTKVariantNode *_timeVariantNode;
    NSMutableDictionary *_chronoVariantNodes;
    SKNode *_subdials;
    SKLabelNode *_timeScaleLabel;
    NSMutableArray *_informationTransitions;
}

@property (nonatomic) BOOL rasterizeForEditing;
@property (retain, nonatomic) NTKChronoUpperSubDial *upperSubdial;
@property (retain, nonatomic) NTKChronoLowerSubDial *lowerSubdial;
@property (readonly, nonatomic) NTKChronoPalette *palette;
@property (readonly, nonatomic) unsigned long long timeScale;
@property (readonly, nonatomic) SKEffectNode *chronoMode;
@property (readonly, nonatomic) SKEffectNode *timeMode;

- (void).cxx_destruct;
- (void)_configureForEditMode:(long long)a0;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (double)_backgroundAlphaForEditMode:(long long)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 forDevice:(id)a1;
- (id)scrubbingObscuredCollectionNodes;
- (void)applyPalette:(id)a0 fully:(BOOL)a1;
- (void)applyTimeScale:(unsigned long long)a0;
- (void)applyTransitionFraction:(double)a0 fromTimeScale:(unsigned long long)a1 toTimeScale:(unsigned long long)a2;
- (void)fadeInLowerSubdialAnimated:(BOOL)a0;
- (void)showTimeModeAnimated:(BOOL)a0;
- (void)fadeOutLowerSubdialAnimated:(BOOL)a0;
- (void)showChronoModeAnimated:(BOOL)a0;
- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2 withScale:(double)a3;
- (id)auxiliaryScrubbingObscuredNodes;
- (void)_applyTransitionFraction:(double)a0 fromOption:(id)a1 toOption:(id)a2 forCustomEditMode:(long long)a3;
- (id)activeVariantNodes;
- (id)_createDensityVariantWitElements:(id)a0 parent:(id)a1 hidden:(BOOL)a2;
- (id)_chronoVariantForTimeScale:(unsigned long long)a0;
- (void)updateUpperDial;
- (void)setRegularDeviceLowerDialLabelPositions;
- (id)_nameFromTimeScale:(unsigned long long)a0;
- (double)timeScaleLabelPositionFromTimeScale:(unsigned long long)a0;
- (void)updateTimeScaleLabelWithTimeScale:(unsigned long long)a0;
- (BOOL)_getTicks:(id *)a0 labels:(id *)a1 otherNodes:(id *)a2 fromParentNode:(id)a3;
- (void)hideMode:(id)a0 animate:(BOOL)a1;
- (void)showMode:(id)a0 animate:(BOOL)a1;
- (void)fadeTimeScaleLabelWithMode:(id)a0;
- (void)setCurrentMode:(id)a0 animate:(BOOL)a1;
- (void)ensureTimeScaleTransitionHasCompleted;
- (void)updateTimeScaleLabel;
- (void)transitionTimeScaleLabelWithFraction:(double)a0 fromTimeScale:(unsigned long long)a1 toTimeScale:(unsigned long long)a2;
- (void)transitionWith:(double)a0 fromMode60:(id)a1 toMode30:(id)a2;
- (void)transitionWith:(double)a0 fromMode30:(id)a1 toMode6:(id)a2;
- (void)transitionWith:(double)a0 fromMode6:(id)a1 toMode3:(id)a2;
- (void)_applyPalette:(id)a0 toVariantNode:(id)a1;
- (id)_localizedStringForTimeScaleSeconds:(unsigned long long)a0;
- (BOOL)isTimeMode;
- (double)_subdialAlphaForEditMode:(long long)a0;
- (BOOL)_showTimeForEditMode:(long long)a0;
- (id)_addChronoVariantWithElements:(id)a0 forTimeScale:(unsigned long long)a1;
- (id)timeScaleName;
- (double)timeScaleLabelPosition;

@end
