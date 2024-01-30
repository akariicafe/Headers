@interface GlobalDistortionCorrectionPlist : NSObject {
    struct { float forwardOrders[8]; float inverseOrders[8]; } polynomial;
    float opticalCenterOffsetX;
    float opticalCenterOffsetY;
    float pixelSizeMicrometers;
}

@end
