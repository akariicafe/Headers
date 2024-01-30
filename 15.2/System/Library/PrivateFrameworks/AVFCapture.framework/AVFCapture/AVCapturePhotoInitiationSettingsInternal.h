@interface AVCapturePhotoInitiationSettingsInternal : NSObject {
    long long uniqueID;
    unsigned long long timestamp;
    long long flashMode;
    BOOL autoStillImageStabilizationEnabled;
    long long HDRMode;
    BOOL burstQualityCaptureEnabled;
}

@end
