@class AVCapturePhotoInitiationSettingsInternal;

@interface AVCapturePhotoInitiationSettings : NSObject {
    AVCapturePhotoInitiationSettingsInternal *_internal;
}

@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) long long uniqueID;
@property (nonatomic) long long flashMode;
@property (nonatomic, getter=isAutoStillImageStabilizationEnabled) BOOL autoStillImageStabilizationEnabled;
@property (nonatomic) long long HDRMode;
@property (nonatomic) BOOL burstQualityCaptureEnabled;

+ (id)photoInitiationSettingsWithUserInitiatedRequestTimestamp:(unsigned long long)a0;

- (void)dealloc;
- (id)_initWithTimestamp:(unsigned long long)a0;

@end
