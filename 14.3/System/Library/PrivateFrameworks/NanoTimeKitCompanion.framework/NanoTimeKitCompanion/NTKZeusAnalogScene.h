@class NTKZeusColorPalette, NSCalendar, NSArray, SKNode, NSDate, SKSpriteNode;

@interface NTKZeusAnalogScene : NTKAnalogScene {
    NSDate *_overrideDate;
    SKNode *_fontContainerNodes[2];
    NSArray *_fontHourNodes[2];
    SKNode *_logoContainerNode;
    SKSpriteNode *_logo1Node;
    SKSpriteNode *_logo2Node;
    SKNode *_multicolorContainerNode;
    SKSpriteNode *_multicolorBackground;
    SKSpriteNode *_multicolorSplit[6];
    double _previousCorrectionTime;
    double _currentTime;
    double _startSplitRotation;
    double _endSplitRotation;
    double _rotationDuration;
    NTKZeusColorPalette *_palette;
    unsigned long long _currentDensity;
    unsigned long long _style;
    BOOL _isEditing;
    BOOL _isStatusIconVisible;
    double _bleedZRotation;
}

@property (nonatomic, getter=isScrubbing) BOOL scrubbing;
@property (readonly, nonatomic) NSCalendar *calendar;
@property (nonatomic) double backgroundAlpha;

- (void).cxx_destruct;
- (void)dealloc;
- (void)applyStyle:(unsigned long long)a0;
- (void)update:(double)a0;
- (void)applyTransitionFraction:(double)a0 fromStyle:(unsigned long long)a1 toStyle:(unsigned long long)a2;
- (void)_configureForEditMode:(long long)a0;
- (void)setOverrideDate:(id)a0 duration:(double)a1;
- (double)_contentAlphaForEditMode:(long long)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 forDevice:(id)a1;
- (void)applyDensity:(unsigned long long)a0;
- (void)applyTransitionFraction:(double)a0 fromDensity:(unsigned long long)a1 toDensity:(unsigned long long)a2;
- (void)applyPalette:(id)a0;
- (void)applyTransitionFraction:(double)a0 fromPalette:(id)a1 toPalette:(id)a2;
- (void)_significantTimeChanged;
- (void)startScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)endScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_update12ForStatusIconVisibility;
- (void)_update12ForStatusIconVisibilityAnimated:(BOOL)a0;
- (id)_hoursNodeForStyle:(unsigned long long)a0 bleed:(unsigned long long)a1;
- (void)_displayZoomScale:(double)a0 fraction:(double)a1;
- (void)_applyHourLabelCollectionNode:(id)a0;
- (struct CGPoint { double x0; double x1; })_logoContainerPositionForStyle:(unsigned long long)a0;
- (void)_applyTransitionFraction:(double)a0 fromHourLabelCollectionNode:(id)a1 toHourLabelCollectionNode:(id)a2;
- (void)_applyDialColor:(id)a0 withBleed:(unsigned long long)a1;
- (void)_applyComplicationColor:(id)a0;
- (id)_nodeForBleed:(unsigned long long)a0;
- (double)_digitAlphaForEditMode:(long long)a0;
- (id)auxiliaryScrubbingObscuredNodes;
- (void)setAdjustsForStatusBarIcon:(BOOL)a0 animated:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })centerOf4NumeralForStyle:(unsigned long long)a0;
- (void)setOverrideDate:(id)a0 hourRadians:(double)a1 minuteRadians:(double)a2 secondRadians:(double)a3;
- (double)_secondHandAlphaForDensity:(unsigned long long)a0 isEditing:(BOOL)a1;
- (unsigned long long)currentDensity;
- (double)_lowerComplicationAlphaForEditing:(BOOL)a0;
- (void)_configureForTransitionFraction:(double)a0 fromEditMode:(long long)a1 toEditMode:(long long)a2 witScale:(double)a3;
- (double)_splitAngle;

@end
