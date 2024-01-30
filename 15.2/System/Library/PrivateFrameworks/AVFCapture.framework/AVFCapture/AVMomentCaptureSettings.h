@class NSString;

@interface AVMomentCaptureSettings : NSObject <NSCopying> {
    long long _torchMode;
    long long _flashMode;
    long long _digitalFlashMode;
    long long _photoQualityPrioritization;
    long long _HDRMode;
    NSString *_bravoCameraSelectionBehaviorForRecording;
}

@property (readonly, nonatomic) long long uniqueID;
@property (readonly, nonatomic) unsigned long long userInitiatedCaptureTime;
@property (nonatomic) long long torchMode;
@property (copy, nonatomic) NSString *bravoCameraSelectionBehaviorForRecording;
@property (nonatomic) long long flashMode;
@property (nonatomic, getter=isAutoRedEyeReductionEnabled) BOOL autoRedEyeReductionEnabled;
@property (nonatomic) long long digitalFlashMode;
@property (nonatomic) long long photoQualityPrioritization;
@property (nonatomic) long long HDRMode;
@property (nonatomic, getter=isAutoOriginalPhotoDeliveryEnabled) BOOL autoOriginalPhotoDeliveryEnabled;
@property (nonatomic, getter=isAutoSpatialOverCaptureEnabled) BOOL autoSpatialOverCaptureEnabled;
@property (nonatomic, getter=isAutoDeferredProcessingEnabled) BOOL autoDeferredProcessingEnabled;
@property (nonatomic) unsigned int rawOutputFormat;

+ (id)settingsWithUserInitiatedCaptureTime:(unsigned long long)a0;
+ (id)settingsWithUserInitiatedCaptureTime:(unsigned long long)a0 uniqueID:(long long)a1;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)debugDescription;
- (id)_initWithUserInitiatedCaptureTime:(unsigned long long)a0 uniqueID:(long long)a1;

@end
