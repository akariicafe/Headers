@interface FigMomentCaptureSettings : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long settingsID;
@property (readonly, nonatomic) unsigned long long userInitiatedCaptureTime;
@property (nonatomic) int torchMode;
@property (nonatomic) int flashMode;
@property (nonatomic) BOOL autoRedEyeReductionEnabled;
@property (nonatomic) int digitalFlashMode;
@property (nonatomic) int qualityPrioritization;
@property (nonatomic) int HDRMode;
@property (nonatomic, getter=isAutoOriginalPhotoDeliveryEnabled) BOOL autoOriginalPhotoDeliveryEnabled;
@property (nonatomic, getter=isAutoSpatialOverCaptureEnabled) BOOL autoSpatialOverCaptureEnabled;
@property (nonatomic, getter=isAutoDeferredProcessingEnabled) BOOL autoDeferredProcessingEnabled;
@property (nonatomic) unsigned int rawOutputFormat;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithSettingsID:(long long)a0 userInitiatedCaptureTime:(unsigned long long)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
