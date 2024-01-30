@class BlinkDetectionPlist;

@interface FrameSelectionPlist : NSObject {
    BOOL enableReferenceSelectionWithCombinedWeight;
    BOOL enableReferenceSelectionWithFaceFocusScore;
    BOOL enableBlurFrameDetection;
    struct { double bias; double gyroWeight; double cornerWeight; double focusWeight; double motionWeight; } referenceSelectionRegressionWeightShortFrame;
    struct { double bias; double gyroWeight; double cornerWeight; double focusWeight; double motionWeight; } referenceSelectionRegressionWeightLongFrame;
    struct { double bias; double gyroWeight; double cornerWeight; double focusWeight; double motionWeight; } blurFrameRejectionRegressionWeightShortFrame;
    struct { double bias; double gyroWeight; double cornerWeight; double focusWeight; double motionWeight; } blurFrameRejectionRegressionWeightLongFrame;
    float blurFrameWeightAdjustementLeftLimit;
    float blurFrameWeightAdjustementRightLimit;
    BlinkDetectionPlist *blinkDetectionPlist;
}

- (void)applyOverrides;
- (void).cxx_destruct;
- (int)readPlist:(id)a0;
- (int)_setModelWeights:(id)a0 weights:(struct { double x0; double x1; double x2; double x3; double x4; } *)a1;

@end
