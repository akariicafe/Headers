@class NSString;

@interface FMPrecisionFindingUI.FMPFSKPatternFragmentNode : FMPrecisionFindingUI.FMPFSKShapeNode {
    void /* unknown type, empty encoding */ experienceType;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ gimbalNode;
    void /* unknown type, empty encoding */ dotNode;
    void /* unknown type, empty encoding */ minScaleFactor;
    void /* unknown type, empty encoding */ maxScaleFactor;
    void /* unknown type, empty encoding */ explodedDiskRadius;
    void /* unknown type, empty encoding */ peripheralDiskRadius;
    void /* unknown type, empty encoding */ innerPeripheralDiskRadius;
    void /* unknown type, empty encoding */ travelingStyle;
    void /* unknown type, empty encoding */ conformedBrightness;
    void /* unknown type, empty encoding */ nonConformedBrightness;
    void /* unknown type, empty encoding */ initialDisturbanceScatterOffset;
    void /* unknown type, empty encoding */ disturbScatterRandomOffsetFrameCounter;
    void /* unknown type, empty encoding */ initialPeripheralPosition;
    void /* unknown type, empty encoding */ initialExplodedPosition;
    void /* unknown type, empty encoding */ curveLength;
    void /* unknown type, empty encoding */ arcLength;
    void /* unknown type, empty encoding */ perimeterRotateOnceAction;
    void /* unknown type, empty encoding */ intermediatePosition;
    void /* unknown type, empty encoding */ relativeHeading;
    void /* unknown type, empty encoding */ disturbanceScatterOffsetXSpring;
    void /* unknown type, empty encoding */ disturbanceScatterOffsetYSpring;
    void /* unknown type, empty encoding */ disturbanceHomingFactorSpring;
    void /* unknown type, empty encoding */ headingSpring;
    void /* unknown type, empty encoding */ noiseSubSpring;
    void /* unknown type, empty encoding */ explodedPosition;
    void /* unknown type, empty encoding */ peripheralPosition;
    void /* unknown type, empty encoding */ composedPosition;
    void /* unknown type, empty encoding */ renderingColor;
    void /* unknown type, empty encoding */ useAlternateScaling;
    void /* unknown type, empty encoding */ conformationTimingFunction;
    void /* unknown type, empty encoding */ conformedToExplodedFactor;
    void /* unknown type, empty encoding */ conformationFactor;
    void /* unknown type, empty encoding */ scalingFactor;
    void /* unknown type, empty encoding */ shouldApplyDisturbanceScatterOffset;
    void /* unknown type, empty encoding */ disturbanceScatterOffset;
    void /* unknown type, empty encoding */ presentedDisturbanceScatterOffset;
    void /* unknown type, empty encoding */ shouldApplyDisturbanceHomingFactor;
    void /* unknown type, empty encoding */ disturbanceHomingFactor;
    void /* unknown type, empty encoding */ presentedDisturbanceHomingFactor;
    void /* unknown type, empty encoding */ trackOffset;
    void /* unknown type, empty encoding */ presentedAbsoluteHeading;
}

@property (nonatomic, readonly) NSString *description;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
