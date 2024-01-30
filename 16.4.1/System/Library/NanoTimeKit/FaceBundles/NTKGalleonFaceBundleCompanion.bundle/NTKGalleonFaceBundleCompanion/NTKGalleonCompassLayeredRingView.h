@class NSString, NTKGalleonDegreeDialView, NTKGalleonMinuteDialView, CALayer, UIImageView, NTKGalleonHourDialView;
@protocol NTKGalleonColorPalette;

@interface NTKGalleonCompassLayeredRingView : UIView <NTKGalleonHeadingSettable, NTKGalleonProgressSettable> {
    CALayer *_ringLayer;
    NTKGalleonDegreeDialView *_degreeView;
    double _heading;
    NTKGalleonMinuteDialView *_minuteView;
    NTKGalleonHourDialView *_hourView;
    UIImageView *_degreeRotateImageView;
    double _dontPrerenderBefore;
    unsigned long long _rejectedFrames;
    double _stickyAt;
}

@property (nonatomic) unsigned long long ringMode;
@property (retain, nonatomic) id<NTKGalleonColorPalette> palette;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHeading:(double)a0;
- (id)init;
- (void).cxx_destruct;
- (double)ringThickness;
- (void)_applyPaletteToHourDial:(id)a0;
- (void)_applyPalette:(id)a0 toDial:(unsigned long long)a1;
- (void)_applyPaletteToDegreeDial:(id)a0;
- (void)_applyPaletteToMinuteDial:(id)a0;
- (BOOL)_compassDialVisible;
- (double)_easeInCurveWithFraction:(double)a0;
- (id)_generatePrerenderedDial;
- (BOOL)_hourDialVisible;
- (double)_incomingAlphaForFraction:(double)a0 withAnimationStyle:(unsigned long long)a1;
- (BOOL)_minuteDialVisible;
- (id)_modeViewForMode:(unsigned long long)a0;
- (double)_outgoingAlphaForFraction:(double)a0 withAnimationStyle:(unsigned long long)a1;
- (double)_ringScaleFactorForBounceFraction:(double)a0;
- (void)_setDegreePrerenderedMode:(BOOL)a0;
- (void)_updateDropShadowForPalette:(id)a0;
- (void)_updateRingRotation;
- (void)applyGPSRingEnableFraction:(double)a0;
- (void)applyGPSRingEnableFraction:(double)a0 forMode:(unsigned long long)a1;
- (void)applyRingModeTransitionFraction:(double)a0 fromMode:(unsigned long long)a1 toMode:(unsigned long long)a2 withAnimationStyle:(unsigned long long)a3;
- (void)galleon_setHeading:(double)a0;
- (void)galleon_setProgress:(double)a0;
- (void)setGPSRingDiameter:(double)a0;
- (void)setGPSRingEnabled:(BOOL)a0;
- (void)transitionToTritiumWithProgress:(float)a0;

@end
