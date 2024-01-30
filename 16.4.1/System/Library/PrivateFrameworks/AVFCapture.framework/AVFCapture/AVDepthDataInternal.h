@class NSData, AVCameraCalibrationData;

@interface AVDepthDataInternal : NSObject {
    struct __CVBuffer { } *pixelBuffer;
    int version;
    long long quality;
    BOOL filtered;
    long long accuracy;
    AVCameraCalibrationData *calibrationData;
    float depthBlurEffectSimulatedAperture;
    NSData *depthBlurEffectRenderingParameters;
    BOOL portraitScoreIsHigh;
    float portraitScore;
    float portraitLightingEffectStrength;
}

@end
