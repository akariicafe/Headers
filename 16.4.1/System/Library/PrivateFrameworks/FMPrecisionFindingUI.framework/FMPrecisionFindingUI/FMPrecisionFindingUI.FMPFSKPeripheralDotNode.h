@class NSString;

@interface FMPrecisionFindingUI.FMPFSKPeripheralDotNode : FMPrecisionFindingUI.FMPFSKNode {
    void /* unknown type, empty encoding */ experienceType;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ dotDiameter;
    void /* unknown type, empty encoding */ pixelsPerInch;
    void /* unknown type, empty encoding */ subScale;
    void /* unknown type, empty encoding */ gimbalNode;
    void /* unknown type, empty encoding */ diskNode;
    void /* unknown type, empty encoding */ dotNode;
    void /* unknown type, empty encoding */ dotCGPathNode;
    void /* unknown type, empty encoding */ btRangingNode;
    void /* unknown type, empty encoding */ interativeRadiusBeaconNode;
    void /* unknown type, empty encoding */ isPlayingInitialPulse;
    void /* unknown type, empty encoding */ hasPlayedInitialPulse;
    void /* unknown type, empty encoding */ perimeterRotateOnceAction;
    void /* unknown type, empty encoding */ diskRadiusSpring;
    void /* unknown type, empty encoding */ dotScaleSpring;
    void /* unknown type, empty encoding */ angleSpring;
    void /* unknown type, empty encoding */ opacitySpring;
    void /* unknown type, empty encoding */ brightnessSpring;
    void /* unknown type, empty encoding */ xOffsetSpring;
    void /* unknown type, empty encoding */ yOffsetSpring;
    void /* unknown type, empty encoding */ headingSpring;
    void /* unknown type, empty encoding */ radiusFactorSpring;
    void /* unknown type, empty encoding */ renderingColor;
    void /* unknown type, empty encoding */ shouldApplyDiskRadius;
    void /* unknown type, empty encoding */ diskRadius;
    void /* unknown type, empty encoding */ presentedDiskRadius;
    void /* unknown type, empty encoding */ shouldApplyDotScale;
    void /* unknown type, empty encoding */ dotScale;
    void /* unknown type, empty encoding */ presentedDotScale;
    void /* unknown type, empty encoding */ shouldApplyAngle;
    void /* unknown type, empty encoding */ angle;
    void /* unknown type, empty encoding */ presentedAngle;
    void /* unknown type, empty encoding */ shouldApplyOpacity;
    void /* unknown type, empty encoding */ opacity;
    void /* unknown type, empty encoding */ presentedOpacity;
    void /* unknown type, empty encoding */ shouldApplyBrightness;
    void /* unknown type, empty encoding */ brightness;
    void /* unknown type, empty encoding */ presentedBrightness;
    void /* unknown type, empty encoding */ shouldApplyOffset;
    void /* unknown type, empty encoding */ offset;
    void /* unknown type, empty encoding */ presentedOffset;
    void /* unknown type, empty encoding */ presentedAbsoluteHeading;
    void /* unknown type, empty encoding */ interactiveAngleFactor;
    void /* unknown type, empty encoding */ shouldApplyRadiusFactor;
    void /* unknown type, empty encoding */ radiusFactor;
    void /* unknown type, empty encoding */ presentedRadiusFactor;
}

@property (nonatomic, readonly) NSString *description;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
