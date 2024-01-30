@class NSString;

@interface FMPrecisionFindingUI.FMPFSKPatternNode : SKNode {
    void /* unknown type, empty encoding */ experienceType;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ pixelsPerInch;
    void /* unknown type, empty encoding */ sceneSize;
    void /* unknown type, empty encoding */ ringView;
    void /* unknown type, empty encoding */ explodedDiskRadius;
    void /* unknown type, empty encoding */ peripheralDiskRadius;
    void /* unknown type, empty encoding */ canvasDebugNode;
    void /* unknown type, empty encoding */ canvasInsideBorderBezierNode;
    void /* unknown type, empty encoding */ canvasDiskBezierNode;
    void /* unknown type, empty encoding */ canvasPatternSpinesNode;
    void /* unknown type, empty encoding */ gimbalNode;
    void /* unknown type, empty encoding */ patternFragmentsNode;
    void /* unknown type, empty encoding */ patternFragmentNodes;
    void /* unknown type, empty encoding */ labelsNode;
    void /* unknown type, empty encoding */ noonDotColor;
    void /* unknown type, empty encoding */ pointeeDotColor;
    void /* unknown type, empty encoding */ noonNode;
    void /* unknown type, empty encoding */ pointeeNode;
    void /* unknown type, empty encoding */ noonNodeSnappedUnderPointeeNode;
    void /* unknown type, empty encoding */ extraDiskRadiusWhenSnapping;
    void /* unknown type, empty encoding */ forceHideNoonNode;
    void /* unknown type, empty encoding */ allFragmentsAreOrbiting;
    void /* unknown type, empty encoding */ track;
    void /* unknown type, empty encoding */ trackDidChange;
    void /* unknown type, empty encoding */ trackTop;
    void /* unknown type, empty encoding */ trackBottom;
    void /* unknown type, empty encoding */ needsRecomputeVisibleFragments;
    void /* unknown type, empty encoding */ conformationFactorSpring;
    void /* unknown type, empty encoding */ conformedToExplodedFactorSpring;
    void /* unknown type, empty encoding */ energeticAngleSpring;
    void /* unknown type, empty encoding */ lethargicAngleSpring;
    void /* unknown type, empty encoding */ centerFactorSpring;
    void /* unknown type, empty encoding */ lookoutSpring;
    void /* unknown type, empty encoding */ trackSpring;
    void /* unknown type, empty encoding */ labelsOpacitySpring;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ inFOV;
    void /* unknown type, empty encoding */ shouldApplyConformedToExplodedFactor;
    void /* unknown type, empty encoding */ conformedToExplodedFactor;
    void /* unknown type, empty encoding */ presentedConformedToExplodedFactor;
    void /* unknown type, empty encoding */ shouldApplyConformationFactor;
    void /* unknown type, empty encoding */ conformationFactor;
    void /* unknown type, empty encoding */ presentedConformationFactor;
    void /* unknown type, empty encoding */ shouldApplyBearing;
    void /* unknown type, empty encoding */ bearing;
    void /* unknown type, empty encoding */ presentedEnergeticBearing;
    void /* unknown type, empty encoding */ presentedLethargicBearing;
    void /* unknown type, empty encoding */ shouldApplyCenterFactor;
    void /* unknown type, empty encoding */ centerFactor;
    void /* unknown type, empty encoding */ presentedCenterFactor;
    void /* unknown type, empty encoding */ derivativeCenterFactor;
    void /* unknown type, empty encoding */ shouldLookout;
    void /* unknown type, empty encoding */ lookout;
    void /* unknown type, empty encoding */ presentedLookout;
    void /* unknown type, empty encoding */ shouldLabelsOpacity;
    void /* unknown type, empty encoding */ labelsOpacity;
    void /* unknown type, empty encoding */ presentedLabelsOpacity;
}

@property (nonatomic, readonly) NSString *description;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
